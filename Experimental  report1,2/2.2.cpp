#include <iostream>
using namespace std;
int main() {
	double x, y;
	cout << "Enter the value of x(0<x<10):"; cin >> x;
	if (x < 1 && x > 0) {
		y = 3 - 2 * x;
		cout << y;
	}
	else if (x >= 1 && x < 5) {
		y = 2 / (4 * x) + 1;
		cout << y;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
		cout << y;
	}
	else
		cout << "x值不符合规范" << endl;
	return 0;
}



