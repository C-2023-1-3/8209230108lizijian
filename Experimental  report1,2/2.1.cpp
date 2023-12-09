#include <iostream>
using namespace std;
int main() {
	char letter; 
	cout << "Enter a letter:"; cin >> letter;
	if (letter > 'Z') {
		cout << "The uppercase of " << letter << " is:";
		letter= letter - 32;
		cout << letter;
	}
	else {
		letter = letter + 1;
		cout << "The ASCII of " << letter<< " is:" << (int)letter;
	}
	return 0;
}


