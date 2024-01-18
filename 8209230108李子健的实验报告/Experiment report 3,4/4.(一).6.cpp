#include <iostream>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < strlen(s); i++) {
		char ch= tolower(s[i]);
		if (ch >= 'a' && ch <= 'z') {
			counts[ch - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << char('a' + i) << ":" << counts[i] <<" times\n" ;
		}
	}
}
int main() {
	char s[100];
	cout << "Enter a string:";
	cin.getline(s, 100);
	int counts[26] = { 0 };
	count(s, counts);
	return 0;
}




