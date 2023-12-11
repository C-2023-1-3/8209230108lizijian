#include <iostream>
using namespace std;
bool ifnew(int* p,int m) {//判断是否为新数字
	for (int i = 0; i < m-1; i++) {
		if (p[i] == p[m])
			return 0;
	}
		return 1;	
}
int main() {
	int* count = new int[10];
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++) {//输入数组
		cin >> count[i];
	}
	int digit[10]; int n = 0;
	for (int i = 0; i < 10; i++) {//找出新的数为新的数组赋值
		if (ifnew(count, i)==1) {
			digit[n] = count[i];
			n++;		
		}
	}
	cout << "The distinct numbers are :";
	for (int i = 0; i < n; i++) {//输出新的数组
		cout << digit[i] << " ";
	}
	delete[]count;
	return 0;
}









