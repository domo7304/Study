//#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//using namespace std;
//
//class String {
//private:
//	char* str;
//public:
//	String(const char* str) {
//		this->str = new char[strlen(str) + 1];
//		strcpy(this->str, str);
//	}
//	String(const String& ref) {
//		str = new char[strlen(ref.str) + 1];
//		strcpy(str, ref.str);
//	}
//	String& operator=(const String& ref) {
//		delete[]str;
//		str = new char[strlen(ref.str) + 1];
//		strcpy(str, ref.str);
//		return *this;
//	}
//	String& operator+(const String& ref){
//		int len = strlen(str) + strlen(ref.str);
//		str = new char[len + 1]; // �̹� �޸𸮰� �Ҵ�Ǿ��ְ� �ʱ�ȭ �Ǿ��ִ� str�� new char �� �޸𸮸� ���Ҵ��Ѵٸ� ���ο����� ���� ���� �Ͼ��..? ���߿� �� �����ϰ� �˰� �ȴٸ� �� �ڵ尡 �´� �ڵ����� �����غ���.
//		for (int i = 0; i < strlen(ref.str); i++) {
//			str[strlen(str) + 1 + i] = ref.str[i];
//		}
//		//���� ���� § �ڵ�. �̸� strcat�� �̿��Ͽ� �ٽ� �����غ���
//		//strcat(str, ref.str);
//		//�̰� �� �����̸� ������ str�� '���� NULL���ڸ� ����������' �Ͽ� ���ڿ��� ���ٿ����� ����.
//		return *this;
//	}
//	void operator+=(const String& ref) {
//		int len = strlen(str) + strlen(ref.str);	
//		str = new char[len + 1]; // �̹� �޸𸮰� �Ҵ�Ǿ��ְ� �ʱ�ȭ �Ǿ��ִ� str�� new char �� �޸𸮸� ���Ҵ��Ѵٸ� ���ο����� ���� ���� �Ͼ��..? ���߿� �� �����ϰ� �˰� �ȴٸ� �� �ڵ尡 �´� �ڵ����� �����غ���.
//		for (int i = 0; i < strlen(ref.str); i++) {
//			str[strlen(str) + 1 + i] = ref.str[i];
//		}
//		//���� ���� § �ڵ�. �̸� strcat�� �̿��Ͽ� �ٽ� �����غ���
//		//strcat(str, ref.str);
//		//�̰� �� �����̸� ������ str�� '���� NULL���ڸ� ����������' �Ͽ� ���ڿ��� ���ٿ����� ����.
//	}
//	bool operator==(const String& ref) {
//		for (int i = 0; i < strlen(str); i++) {
//			if (str[i] != ref.str[i]) return false;
//		}
//		return true;
//		//���� ���� § �ڵ�. �̸� strcmp�� �̿��Ͽ� �ٽ� �����غ���
//		//return strcmp(str, ref.str) ? false : true;
//		//�� �� �����̸� �񱳰� �Ϸ�ȴ�.
//	}
//	/*friend ostream& operator<<(ostream& cout, const String& ref);
//	friend istream& operator>>(istream& cin, const String& ref);*/
//	~String() {
//		delete[]str;
//	}
//};
//
////ostream& operator<<(ostream& cout, const String& ref) {
////	for (int i = 0; i < strlen(ref.str); i++) {
////		cout << ref.str[i];
////	}
////	return cout;
////}
////
////istream& operator>>(istream& cin, const String& ref) {
////	for (int i = 0; i < strlen(ref.str); i++) {
////		cin >> ref.str[i];
////	}
////	return cin;
////}
//// c++ ������ �̹� cout cin �� ���� �����ε��� �Ǿ��ֱ� ������ ���� �� �� �ڵ尡 �ùٸ��� �˻��غ� ���� ����...���߿� �� �����ϰ� �˰� �ȴٸ� ���������� �ٽ� �����غ���.
//
////���翡 �����ִ� �ڵ�
///*
//ostream& operator<< (ostream& cout, String& ref){
//	cout << ref.str;
//	return cout;
//}
//
//istream& operator>> (istream& cin, String& ref){
//	char str[100];
//	cin >> str;
//	ref = String(str);
//	return cin;
//*/
//
//int main() {
//	string str1 = "I like ";
//	string str2 = "string class";
//	string str3 = str1 + str2;
//
//	cout << str1 << '\n';
//	cout << str2 << '\n';
//	cout << str3 << '\n';
//
//	str1 += str2;
//	if (str1 == str3) cout << "������ ���ڿ�" << '\n';
//	else cout << "�������� ���� ���ڿ�" << '\n';
//
//	string str4;
//	cout << "���ڿ� �Է�: ";
//	cin >> str4;
//	cout << "�Է��� ���ڿ�: " << str4 << '\n';
//
//	return 0;
//}