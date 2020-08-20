#define _CRT_SECURE_NO_WARNINGS
//복사생성자가 호출될까 대입연산자가 호출될까

//#include <iostream>
//using namespace std;
//
//class First {
//private:
//	int num1, num2;
//public:
//	First(int x = 0, int y = 0)
//		: num1(x), num2(y) {}
//	First (const First& ref)
//		:num1(ref.num1), num2(ref.num2) {
//		cout << "call a copy constructor!!" << '\n';
//	}
//	First operator=(const First& ref) {
//		num1 = ref.num1;
//		num2 = ref.num2;
//		cout << "call a operator= !!" << '\n';
//		return *this;
//	}
//	void ShowNum() {
//		cout << num1 << ", " <<num2 << '\n';
//	}
//};
//
//int main() {
//	First f1(10, 20);
//	First f2 = f1;
//	f2.ShowNum();
//
//	return 0;
//}


//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* name, int _age) 
//		: age(_age) {
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//	}
//	Person& operator=(const Person& ref) {
//		delete[]name;
//		this->name = new char[strlen(ref.name) + 1];
//		strcpy(this->name, ref.name);
//		this->age = ref.age;
//		return *this;
//	}
//	void ShowPersonInfo() {
//		cout << "name: " << name << '\n';
//		cout << "age: " << age << '\n';
//	}
//	~Person() {
//		delete[]name;
//		cout << "called destructor!!" << '\n';
//	}
//};
//
//int main() {
//	Person man1("Lee dong wooo", 29);
//	Person man2("Yoon ji yul", 22);
//	man2 = man1;
//
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//}

//-------------------------2020.08.13 목요일--------------------------//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* name, int _age)
//		: age(_age) {
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		cout << "call a constructor!!" << '\n';
//	}
//	Person(const Person& ref)
//		: age(ref.age) {
//		name = new char[strlen(ref.name) + 1];
//		strcpy(name, ref.name);
//		cout << "call a copy constructor!!" << '\n';
//	}
//	Person& operator=(const Person& ref) {
//		delete[]name;
//		this->name = new char[strlen(ref.name) + 1];
//		strcpy(this->name, ref.name);
//		age = ref.age;
//		cout << "call a operator = !!" << '\n';
//		return *this;
//	}
//	~Person() {
//		delete[]name;
//		cout << "call a destructor!!" << '\n';
//	}
//	void ShowPersonInfo() {
//		cout << "name:" << name << '\n';
//		cout << "age: " << age << '\n';
//	}
//};
//
//int main() {
//	cout << "case1: operator overroading" << '\n';
//	Person p1("이도원", 22);
//	Person p2("황현수", 23);
//	p2.ShowPersonInfo();
//	p2 = p1;
//	p2.ShowPersonInfo();
//	cout << '\n';
//
//	cout << "case2: copy constructor" << '\n';
//	Person p3 = p1;
//	p3.ShowPersonInfo();
//	
//	return 0;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Gun {
//private:
//	int bullet;
//public:
//	Gun(int num)
//		: bullet(num){}
//	void Shot() {
//		cout << "BANG!" << '\n';
//		bullet--;
//	}
//};
//
//class Police {
//	int handcuffs;
//	Gun* pistol;
//public:
//	Police(int num, int cuff)
//		: handcuffs(cuff) {
//		if (num > 0) pistol = new Gun(num);
//		else pistol = NULL;
//	}
//	Police(const Police& ref)
//		: handcuffs(ref.handcuffs) {
//		if (ref.pistol != NULL) pistol = new Gun(*(ref.pistol));
//		else pistol = NULL;
//	}
//	Police& operator=(const Police& ref) {
//		delete[]pistol;
//		if (ref.pistol != NULL) pistol = new Gun(*(ref.pistol));
//		else pistol = NULL;
//		handcuffs = ref.handcuffs;
//		return *this;
//	}
//	void PutHandcuff() {
//		cout << "SNAP!" << '\n';
//		handcuffs--;
//	}
//	void Shot() {
//		if (pistol == NULL) cout << "MISS!" << '\n';
//		else pistol->Shot();
//	}
//	~Police() {
//		if (pistol != NULL) delete pistol;
//	}
//};
//int main() {
//	Police pman1(5, 3);
//	Police pman2 = pman1;
//	pman2.PutHandcuff();
//	pman2.Shot();
//
//	Police pman3(2, 4);
//	pman3 = pman1;
//	pman3.PutHandcuff();
//	pman3.Shot();
//
//	return 0;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Book {
//	char* title;
//	char* isbn;
//	int price;
//public:
//	Book(const char* title, const char* isbn, int value)
//		:price(value) {
//		this->title = new char[strlen(title) + 1];
//		this->isbn = new char[strlen(isbn) + 1];
//		strcpy(this->title, title);
//		strcpy(this->isbn, isbn);
//	}
//	void ShowBookInfo() {
//		cout << "title: " << '\n';
//		cout << "isbn: " << '\n';
//		cout << "price: " << '\n';
//	}
//	~Book() {
//		delete[]title;
//		delete[]isbn;
//	}
//};
//
//class EBook : public Book {
//private:
//	char* DRMKey;
//public:
//	EBook(const char* title, const char* isbn, int value, const char* key)
//		: Book(title, isbn, value) {
//		DRMKey = new char[strlen(key) + 1];
//		strcpy(DRMKey, key);
//	}
//	EBook(const EBook& ref)
//		: Book(ref.title, ref.isbn, ref.price) {
//		DRMKey = new char[strlen(ref.DRMKey) + 1];
//		strcpy(DRMKey, ref.DRMKey);
//	}
//	EBook& operator=(const EBook& ref) {
//		delete[]
//			delete[]
//	}
//	void ShowEBookInfo() {
//		ShowBookInfo();
//		cout << "DRMKey: " << DRMKey << '\n';
//	}
//	~EBook() {
//		delete[]DRMKey;
//	}
//};
//
//int main() {
//	EBook ebook1("좋은 c++ ebook", "555-12345-890-1", 10000, "fdx9woi8kiw");
//	EBook ebook2 = ebook1;
//	ebook2.ShowEBookInfo();
//	cout << '\n';
//	EBook ebook3("dumy", "dumy", 0, "dumy");
//	ebook3 = ebook2;
//	ebook3.ShowEBookInfo();
//	return 0;
//
//}