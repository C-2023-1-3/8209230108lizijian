#include <iostream>
using namespace std;
int max_div(int& m, int& n) {//求最大公约数
	int a = max(m, n);
	int b = min(m, n);
	int temp;
	while (b!=0)
	{
		temp = a;
		a = b;
		b = temp % b;
	}
	return a;
}
int min_mul(int&m,int&n) {//求最小公倍数
	return m * n / max_div(m, n);
}
int main() {
	int m, n;
	cout << "请输入两个自然数:";
	cin >> m >> n;
	cout <<"最大公约数是："<< max_div(m, n) << endl;
	cout <<"最小公倍数是：" << min_mul(m, n);
	return 0;
}

