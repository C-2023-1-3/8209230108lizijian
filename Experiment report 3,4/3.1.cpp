#include <iostream>
using namespace std;
int max_div(int& m, int& n) {//�����Լ��
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
int min_mul(int&m,int&n) {//����С������
	return m * n / max_div(m, n);
}
int main() {
	int m, n;
	cout << "������������Ȼ��:";
	cin >> m >> n;
	cout <<"���Լ���ǣ�"<< max_div(m, n) << endl;
	cout <<"��С�������ǣ�" << min_mul(m, n);
	return 0;
}

