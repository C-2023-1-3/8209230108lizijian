#include <iostream>
using namespace std;
bool ifnew(int* p,int m) {//�ж��Ƿ�Ϊ������
	for (int i = 0; i < m-1; i++) {
		if (p[i] == p[m])
			return 0;
	}
		return 1;	
}
int main() {
	int* count = new int[10];
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++) {//��������
		cin >> count[i];
	}
	int digit[10]; int n = 0;
	for (int i = 0; i < 10; i++) {//�ҳ��µ���Ϊ�µ����鸳ֵ
		if (ifnew(count, i)==1) {
			digit[n] = count[i];
			n++;		
		}
	}
	cout << "The distinct numbers are :";
	for (int i = 0; i < n; i++) {//����µ�����
		cout << digit[i] << " ";
	}
	delete[]count;
	return 0;
}









