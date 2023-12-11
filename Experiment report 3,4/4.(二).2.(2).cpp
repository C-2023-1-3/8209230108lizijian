#include <iostream>
using namespace std;
int parseHex(const char* const hexString) {
	int num; int sum = 0;
	for (int i = 0; i < strlen(hexString); i++) {
		if (hexString[i] >= '0' && hexString[i] <='9')
		num = hexString[i]-'0';
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
		num = hexString[i] - 'A'+10;
		for (int j = 0; j < strlen(hexString)-1- i; j++) {
			num *= 16;
		}
		sum += num;		
	}
	return sum;
}
int main() {
	char hexString[40];
	cin.getline(hexString, 40);
	cout<<parseHex(hexString);
	return 0;
}


