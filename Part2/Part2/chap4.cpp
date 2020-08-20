//#include <iostream>
//using namespace std;
//
//class Fruitseller {
//private:
//	int APPLE_PRICE;
//	int NumOfApples;
//	int MyMoney;
//
//public:
//	void InitMembers(int price, int num, int money) {
//		APPLE_PRICE = price;
//		NumOfApples = num;
//		MyMoney = money;
//	}
//	int SaleApples(int money) {
//		if (money < 0) {
//			cout << "�߸��� ������ ���޵Ǿ� �ǸŸ� ����մϴ�." << '\n';
//			return 0;
//		}
//
//		int num = money / APPLE_PRICE;
//		NumOfApples -= num;
//		MyMoney += money;
//		return num;
//	}
//	void ShowResult() const {
//		cout << "���� ��� : " << NumOfApples << '\n';
//		cout << "�Ǹ� ���� : " << MyMoney << '\n';
//	}
//};
//
//class FruitBuyer {
//	int Mymoney;
//	int NumOfApples;
//
//public:
//	void InitMembers(int money) {
//		Mymoney = money;
//		NumOfApples = 0;
//	}
//	void BuyApples(Fruitseller& seller, int money) {
//		if (money < 0) {
//			cout << "�߸��� ������ ���޵Ǿ� ���Ÿ� ����մϴ�." << '\n';
//			return;
//		}
//		NumOfApples = seller.SaleApples(money);
//		Mymoney -= money;
//	}
//	void ShowResult() const {
//		cout << "������ ��� : " << NumOfApples << '\n';
//		cout << "���� �ܾ� : " << Mymoney << '\n';
//	}
//};
//
//int main() {
//	Fruitseller seller;
//	FruitBuyer buyer;
//
//	seller.InitMembers(1000, 20, 0);
//	buyer.InitMembers(5000);
//
//	buyer.BuyApples(seller, 2000);
//
//	cout << "�Ǹ����� ����" << '\n';
//	seller.ShowResult();
//	cout << "�������� ����" << '\n';
//	buyer.ShowResult();
//
//	return 0;
//}


//--------------------------------------------2020.07.24. �ݿ���, Init ��� �Լ��� �̿��Ͽ� ������� ����-----------------------------------------------
//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//	int xpos;
//	int ypos;
//public:
//	void Init(int x, int y) {
//		xpos = x;
//		ypos = y;
//	}
//	void ShowPointInfo() const {
//		cout << "[" << xpos << ", " << ypos << "]" << '\n';
//	}
//};
//
//class Circle {
//private:
//	Point p;
//	int rad;
//public:
//	void Init(int x, int y, int r) {
//		p.Init(x, y);
//		rad = r;
//	}
//	void ShowCircleInfo() const {
//		cout << "radius : " << rad << '\n';
//		p.ShowPointInfo();
//	}
//};
//
//class Ring {
//private:
//	Circle c1;
//	Circle c2;
//public:
//	void Init(int x1, int y1, int r1, int x2, int y2, int r2) {
//		c1.Init(x1, y1, r1);
//		c2.Init(x2, y2, r2);
//	}
//	void ShowRingInfo() const {
//		cout << "Inner Cicle Info..." << '\n';
//		c1.ShowCircleInfo();
//		cout << "Outer Circle Info..." << '\n';
//		c2.ShowCircleInfo();
//	}
//};
//
//int main() {
//	Ring ring;
//	ring.Init(1, 1, 4, 2, 2, 9);
//	ring.ShowRingInfo();
//	return 0;
//}

//--------------------------------�� ������ �����ڸ� ���� ������� �ʱ�ȭ�� �ٲ��� ��� + ������� const �� �ٲ���------------------------------------------------
//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//	int xpos;
//	int ypos;
//public:
//	Point(const int& x, const int& y) 
//		: xpos(x), ypos(y){}
//	
//	void ShowPointInfo() const {
//		cout << "[" << xpos << ", " << ypos << "]" << '\n';
//	}
//};
//
//class Circle {
//private:
//	Point p;
//	int rad;
//public:
//	Circle(const int& x, const int& y, const int& r)
//		:p(x, y), rad(r) {}
//
//	void ShowCircleInfo() const {
//		cout << "radius : " << rad << '\n';
//		p.ShowPointInfo();
//	}
//};
//
//class Ring {
//private:
//	Circle c1;
//	Circle c2;
//public:
//	Ring(int x1, int y1, int r1, int x2, int y2, int r2)
//		:c1(x1, y1, r1), c2(x2, y2, r2) {}
//
//	void ShowRingInfo() const {
//		cout << "Inner Cicle Info..." << '\n';
//		c1.ShowCircleInfo();
//		cout << "Outer Circle Info..." << '\n';
//		c2.ShowCircleInfo();
//	}
//};
//
//int main() {
//	Ring ring(1, 1, 4, 2, 2, 9);
//
//	ring.ShowRingInfo();
//	return 0;
//}


//-------------------------------------------�̴ϼȶ������� ���� 'const �������' ������----------------------------------------
//#include <iostream>
//using namespace std;
//
//class fruitseller {
//private:
//	const int apple_price;
//	int numofapples;
//	int mymoney;
//
//public:
//	fruitseller(int price, int num, int money)
//		:apple_price(price), numofapples(num), mymoney(money) {}
//
//	int saleapples(int money) {
//		if (money < 0) {
//			cout << "�߸��� ������ ���޵Ǿ� �ǸŸ� ����մϴ�." << '\n';
//			return 0;
//		}
//
//		int num = money / apple_price;
//		numofapples -= num;
//		mymoney += money;
//		return num;
//	}
//	void showresult() const {
//		cout << "���� ��� : " << numofapples << '\n';
//		cout << "�Ǹ� ���� : " << mymoney << '\n';
//	}
//};
//
//class fruitbuyer {
//	int mymoney;
//	int numofapples;
//
//public:
//	fruitbuyer(int money)
//		:mymoney(money), numofapples(0) {}
//
//	void buyapples(fruitseller& seller, int money) {
//		if (money < 0) {
//			cout << "�߸��� ������ ���޵Ǿ� ���Ÿ� ����մϴ�." << '\n';
//			return;
//		}
//		numofapples = seller.saleapples(money);
//		mymoney -= money;
//	}
//	void showresult() const {
//		cout << "������ ��� : " << numofapples << '\n';
//		cout << "���� �ܾ� : " << mymoney << '\n';
//	}
//};
//
//int main() {
//	fruitseller seller(1000, 20, 0);
//	fruitbuyer buyer(5000);
//
//	buyer.buyapples(seller, 2000);
//
//	cout << "�Ǹ����� ����" << '\n';
//	seller.showresult();
//	cout << "�������� ����" << '\n';
//	buyer.showresult();
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//namespace COMP_POS {
//	enum {
//		CLERK,
//		SENIOR,
//		ASSIST,
//		MANAGER
//	};
//
//	void ShowPosition(int position) {
//		switch (position) {
//		case CLERK:
//			cout << "���" << '\n';
//			break;
//		case SENIOR:
//			cout << "����" << '\n';
//			break;
//		case ASSIST:
//			cout << "�븮" << '\n';
//			break;
//		case MANAGER:
//			cout << "����" << '\n';
//			break;
//		}
//	}
//}
//
//class NameCard {
//private:
//	char* name;
//	char* company;
//	char* phone;
//	int position;
//public:
//	NameCard(const char* _name, const char* _company, const char* _phone, int _position)
//		: position(_position) {
//		name = new char[strlen(_name) + 1];
//		company = new char[strlen(_company) + 1];
//		phone = new char[strlen(_phone) + 1];
//
//		strcpy(name, _name);
//		strcpy(company, _company);
//		strcpy(phone, _phone);
//	}
//
//	void ShowNameCardInfo() {
//		cout << "�̸�: " << name << '\n';
//		cout << "ȸ��: " << company << '\n';
//		cout << "��ȭ��ȣ: " << phone << '\n';
//		cout << "����: ";
//		COMP_POS::ShowPosition(position);
//		cout << '\n';
//	}
//
//	~NameCard() {
//		delete[]name;
//		delete[]company;
//		delete[]phone;
//	}
//};
//
//int main() {
//	NameCard manClerk("LEE", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
//	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
//	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
//	manClerk.ShowNameCardInfo();
//	manSenior.ShowNameCardInfo();
//	manAssist.ShowNameCardInfo();
//
//	return 0;
//}


//---------------------------2020.7.27 ��--------------------------------------//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//namespace COMP_POS {
//	enum {
//		CLERK, SENIOR, ASSIST, MANAGER
//	};
//	void ShowPosition(int pos) {
//		switch (pos) {
//		case CLERK:
//			cout << "CLERK" << '\n';
//			break;
//		case SENIOR:
//			cout << "SENIOR" << '\n';
//			break;
//		case ASSIST:
//			cout << "ASSIST" << '\n';
//			break;
//		case MANAGER:
//			cout << "MANAGER" << '\n';
//			break;
//		}
//	}
//}
//
//class NameCard {
//private:
//	char* name;
//	char* company;
//	char* phone;
//	int position;
//public:
//	NameCard(const char* _name, const char* _company, const char* _phone, int _position)
//		:position(_position) {
//		name = new char[strlen(_name) + 1];
//		company = new char[strlen(_company) + 1];
//		phone = new char[strlen(_phone) + 1];
//
//		strcpy(name, _name);
//		strcpy(company, _company);
//		strcpy(phone, _phone);
//	}
//	void ShowNameCardInfo() {
//		cout << "�̸�: " << name << '\n';
//		cout << "ȸ��: " << company << '\n';
//		cout << "��ȭ��ȣ: " << phone << '\n';
//		cout << "����: ";
//		COMP_POS::ShowPosition(position);
//		cout << '\n';
//	}
//
//	~NameCard() {
//		delete[]name;
//		delete[]company;
//		delete[]phone;
//	}
//};
//
//int main() {
//	NameCard manClerk("LEE", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
//	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
//	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
//	manClerk.ShowNameCardInfo();
//	manSenior.ShowNameCardInfo();
//	manAssist.ShowNameCardInfo();
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	void SetPersonInfo(char* _name, int _age) {
//		name = _name;
//		age = _age;
//	}
//	void ShowPersonInfo() {
//		cout << "�̸�: " << name << ", ";
//		cout << "����: " << age << '\n';
//	}
//};
//
//int main() {
//	Person parr[3];
//	char namestr[100];
//	int age;
//	char* strptr;
//
//	for (int i = 0; i < 3; i++) {
//		cout << "�̸�: ";
//		cin >> namestr;
//		cout << "����: ";
//		cin >> age;
//
//		strptr = new char[strlen(namestr) + 1];
//		strcpy(strptr, namestr);
//		parr[i].SetPersonInfo(strptr, age);
//	}
//	parr[0].ShowPersonInfo();
//	parr[1].ShowPersonInfo();
//	parr[2].ShowPersonInfo();
//
//	return 0;
//}