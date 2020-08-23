#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class String {
private:
	char* str;
public:
	String(const char* str) {
		this->str = new char[strlen(str) + 1];
		strcpy(this->str, str);
	}
	String(const String& ref) {
		str = new char[strlen(ref.str) + 1];
		strcpy(str, ref.str);
	}
	String& operator=(const String& ref) {
		delete[]str;
		str = new char[strlen(ref.str) + 1];
		strcpy(str, ref.str);
		return *this;
	}
	String& operator+(const String& ref){
		int len = strlen(str) + strlen(ref.str);
		str = new char[len + 1];
		for (int i = 0; i < strlen(ref.str); i++) {
			str[strlen(str) + 1 + i] = ref.str[i];
		}
		return *this;
	}
	void operator+=(const String& ref) {
		int len = strlen(str) + strlen(ref.str);
		str = new char[len + 1];
		for (int i = 0; i < strlen(ref.str); i++) {
			str[strlen(str) + 1 + i] = ref.str[i];
		}
	}
	bool operator==(const String& ref) {
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] != ref.str[i]) return false;
		}
		return true;
	}
	friend ostream& operator<<(const ostream& cout, const String& ref);
	friend istream& operator>>(const istream& cin, const String& ref);
	~String() {
		delete[]str;
	}
};

ostream& operator<<(const ostream& cout, const String& ref) {
	for (int i = 0; i < strlen(ref.str); i++) {
		cout 
	}
}



int main() {
	string str1 = "I like";
	string str2 = "string class";
	string str3 = str1 + str2;

	cout << str1 << '\n';
	cout << str2 << '\n';
	cout << str3 << '\n';

	str1 += str2;
	if (str1 == str3) cout << "동일한 문자열" << '\n';
	else cout << "동일하지 않은 문자열" << '\n';

	string str4;
	cout << "문자열 입력: " << '\n';
	cin >> str4;
	cout << "입력한 문자열: " << str4 << '\n';

	return 0;
}