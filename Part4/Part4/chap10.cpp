//-------------------------------------2020.8.6.목요일----------------------------------------//
//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0)
//		:xpos(x), ypos(y) {	}
//
//	void ShowPosition() {
//		cout << "[" << xpos << ", " << ypos << ']' << '\n';
//	}
//	Point& operator+=(const Point& ref) {
//		xpos += ref.xpos;
//		ypos += ref.ypos;
//		return *this;
//	}
//	Point& operator-=(const Point& ref) {
//		xpos -= ref.xpos;
//		ypos -= ref.ypos;
//		return *this;
//	}
//	friend Point operator-(const Point& ref1, const Point& ref2);
//	friend bool operator==(const Point& ref1, const Point& ref2);
//	friend bool operator!=(const Point& ref1, const Point& ref2);
//};
//
//Point operator-(const Point& ref1, const Point& ref2) {
//	Point pos(ref1.xpos - ref2.xpos, ref1.ypos - ref2.ypos);
//	return pos;
//}
//bool operator==(const Point& ref1, const Point& ref2) {
//	if (ref1.xpos == ref2.xpos && ref1.ypos == ref2.ypos) return true;
//	else return false;
//}
//bool operator!=(const Point& ref1, const Point& ref2) {
//	return !(ref1 == ref2);
//}
//
//int main() {
//	Point pos1(20, 30);
//	Point pos2(5, 7);
//	Point pos3(5, 7);
//
//	(pos1 - pos2).ShowPosition();
//	(pos2 += pos3).ShowPosition();
//
//	if (pos2 == pos3)
//		cout << "equal" << '\n';
//	else cout << "not equal" << '\n';
//
//	(pos2 -= pos3).ShowPosition();
//
//	if (pos2 != pos3)
//		cout << "not equal" << '\n';
//	else cout << "equal" << '\n';
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point (int x, int y)
//		:xpos(x), ypos(y){
//		cout << "call constructor!!" << '\n';
//	}
//	void ShowPosition() {
//		cout << "[" << xpos << ", " << ypos << ']' << '\n';
//	}
//	Point(const Point& ref)
//		: xpos(ref.xpos), ypos(ref.ypos) {
//		cout << "call copy!!" << '\n';
//	}
//	Point& operator++() {
//		xpos += 1;
//		ypos += 1;
//		return *this;
//	}
//	friend Point operator--(Point& ref);
//};
//
//Point operator--(Point&ref) {
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return ref;
//}
//
//int main() {
//	Point pos(1, 2);
//	++pos;
//	pos.ShowPosition();
//	--pos;
//	pos.ShowPosition();
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x, int y)
//		:xpos(x), ypos(y) {}
//	void ShowPosition() {
//		cout << '[' << xpos << ", " << ypos << ']' << '\n';
//	}
//	Point& operator-() {
//		xpos = -xpos;
//		ypos = -ypos;
//		return *this;
//	}
//	friend Point& operator~(Point& ref);
//};
//
//Point& operator~(Point& ref) {
//	int tmp = ref.xpos;
//	ref.xpos = ref.ypos;
//	ref.ypos = tmp;
//	return ref;
//}
//
//int main() {
//	Point pos1(9, -7);
//	pos1.ShowPosition();
//
//	Point pos2 = -pos1;
//	pos2.ShowPosition();
//	(~pos2).ShowPosition();
//	pos2.ShowPosition();
//
//	return 0;
//}

#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0)
		: xpos(x), ypos(y) {
		cout << "call constructor!" << '\n';
	}
	Point(const Point& cpy)
		: xpos(cpy.xpos), ypos(cpy.ypos) {
		cout << "call copy!" << '\n';
	}
	void ShowPosition() {
		cout << "[" << xpos << ", " << ypos << ']' << '\n';
	}
	friend const Point operator--(Point& ref, int);
};

const Point operator--(Point& ref, int) {
	const Point retobj(ref.xpos, ref.ypos);    //const Point retobj(ref.xpos, ref.ypos);로 하게 될 경우에는 생성자 호출, const Point retobj(ref); 로 하게 될 경우에는 복사생성자 호출
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;
}

int main() {
	Point pos1(3, 7);
	Point pos2;
	pos2 = pos1--;
	pos2.ShowPosition();
	pos1.ShowPosition();

	return 0;
}