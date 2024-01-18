#include <iostream>
using namespace std;
class Point {
private:
	int x ; int y ;
public:
	Point(int x=60 , int y=80 ) {
		this->x = x; this->y = y;
	}
	void setPoint(int i, int j) {
		x += i; y += j;
	}
	void display() {
		cout << "(" << x << "," << y << ")\n";
	}
	~Point(){};
};
int main() {
	Point s;
	s.setPoint(2, 5);
	s.display();
	return 0;
}




