#include <iostream>
using namespace std;
int main() {
	double a, b,value;
	cout << "Enter two digits:";
	cin >> a; cin >> b;
	char operator0;
	cout << "Enter the operators for both(+,-,*,/):";
	cin >> operator0;
	if (operator0 == '+') {value = a + b;}
	else if (operator0 == '-') {value = a - b;}
	else if (operator0 == '*') {value = a * b;}
	else if (operator0 == '/') {
		if (b == 0) {
			cout << "The second digit can't be 0" << endl;
			return 0;
		}
		else {
			value = a / b;
		}
	}
	else {
		cout << "The entered operator is incorrect" << endl;
		return 0;
	}
	cout << a << operator0 << b << "=" << value << endl;
	return 0;
}




