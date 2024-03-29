#include <iostream>
using namespace std;

class Rectangle {
public:
	int width, height;
	bool isSquare();
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(int r);
};

bool Rectangle::isSquare() {
	return(width == height);
}

Rectangle::Rectangle() {
	width = height = 1;
}

Rectangle::Rectangle(int a, int b) {
	width = a; height = b;
}

Rectangle::Rectangle(int r) {
	width= height = r;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}