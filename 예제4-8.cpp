#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}
//만들고 삭제하기 때문에 중간에 실행하기도 함

int main() {
	int radius;
	while (true) {
		cout << "정수 반지름 입력(음수이면 종료)>> ";
		cin >> radius;
		if (radius < 0) break; //음수가 입력되어 종료한다.
		Circle* p = new Circle(radius); //동적 객체 생성 , 동적 메모리는 반드시 포인트를 사용한다.
		cout << "원의 면적은 " << p->getArea() << endl;
		delete p; //객체 반환, delete문이 없다면 메모리 누수 발생
	}
}