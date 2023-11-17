#include <iostream>
using namespace std;
int main() {
	double a, b, c; double perimeter;
	cout << "Enter the lengths of the three sides of the triangle:";
	cin >> a; cin >> b; cin >> c;
	perimeter = a + b + c;
	cout << "The perimeter of the triangle is:" << perimeter << endl;
	if (a == b && a == c) {
		cout << "The triangle is equilateral" << endl;
	}
	return 0;
}



