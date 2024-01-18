#include<iostream>
using namespace std;
bool is_Prime(int n) {
	if (n == 1)return false;
	if (n == 2 or n == 3 or n == 5)return true;
	if (n % 2 == 0 or n % 3 == 0 or n % 5 == 0)return false;
	int i = 7;
	while (i * i <= n) {
		if (n % i == 0)return false;
		i += 4;
		if (n % i == 0)
			return false;
		i += 2;
	}
	return true;
}
int main() {
	int num = 0;
	int x = 1;
	while (num < 200) {
		if (is_Prime(x)) {
			num++;
			cout << x <<'\t';
			if (num % 10 == 0)cout << endl;
		}		
		x++;
	}
	return 0;
}

