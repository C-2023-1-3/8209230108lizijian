#include<iostream>
using namespace std;
int main() {
	int a; cin >> a;
	int b; cin >> b;
	int least = 1;   int max;
	int c = min(a, b);
	for (int i = 2; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			least = i;
			break;
		}
	}
	max = a * b / least;
	cout << "��С������" << least << endl;
	cout << "���Լ��" << max << endl;
}



