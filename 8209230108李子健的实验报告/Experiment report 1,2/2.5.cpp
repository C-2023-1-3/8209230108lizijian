#include <iostream>
#include <cctype>
using namespace std;
int main() {
	cout << "Please enter a line of word and end with\\n"<<endl;
	char ch;
	int alpha = 0;
	int digit = 0;
	int other = 0;
	int blank = 0;
	cin.get(ch);
	while (ch != '\n') {
		if (isalpha(ch)) {alpha++;}
		else if (isdigit(ch)) {digit++;}
		else if (isspace(ch)) { blank++; }
		else { other++; }
		cin.get(ch);
	}
	cout <<"The number of alpha is:" << alpha << endl;
	cout <<"The number of digit is:" << digit << endl;
	cout <<"The number of other is:" << other<< endl;
	cout <<"The number of blank is:" <<blank<< endl;
	return 0;
}


