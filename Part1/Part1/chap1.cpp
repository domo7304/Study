//-------------------------------------2020/7/15 ������---------------------------------------//

//#include <iostream>
//using namespace std;
//
//int main() {
//	int result = 0;
//
//	for (int i = 0; i < 5; i++) {
//		int num;
//		cout << i + 1 << "��° ���� �Է�: ";
//		cin >> num;
//		result += num;
//	}
//	cout << "�հ�: " << result;
//	return 0;
//}
//
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	char str[100];
//	cin >> str;
//	cout << str << '\n';
//
//	return 0;
//}
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	int num;
//
//	cin >> num;
//	for (int i = 0; i < 9; i++) {
//		cout << num << " x " << i + 1 << " = " << num * (i + 1) << '\n';
//	}
//	return 0;
//}
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	while (1) {
//		int num;
//
//		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
//		cin >> num;
//
//		if (num == -1)	break;
//
//		cout << "�̹� �� �޿�: " << 50 + num * 0.12 << "����" << '\n';
//	}
//	cout << "���α׷��� �����մϴ�." << '\n';
//	return 0;
//}

#include <iostream>
using namespace std;

void swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void swap(char* c1, char* c2) {
	char tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;
}

void swap(double* d1, double* d2) {
	double tmp = *d1;
	*d1 = *d2;
	*d2 = tmp;
}

int main() {
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << '\n';

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << '\n';

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	cout << dbl1 << ' ' << dbl2 << '\n';

	return 0;
}