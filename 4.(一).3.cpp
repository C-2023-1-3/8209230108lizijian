#include <iostream>
using namespace std;
void changelocker(bool* locker, int n) {//�ӵڶ���ѧ����ʼ�ĵ�n��ѧ���Ŀ���ģʽ
	int m = n + 1;
	while (n<=100) {
		if ((n - m + 1) % m == 0)
		{
			locker[n-1] = !locker[n-1];
		}
		n++;
	}
}
int main() {
	bool locker[100];
	for (int i = 0; i < 100; i++) 
		locker[i] = false;//�ر����д����
	for (int i = 0; i < 100; i++)
		locker[i] = true;//��һ��ѧ������Ϊ
	for(int i=2;i<=100;i++)
	changelocker(locker, i);//�ڶ���һ�ٸ�ѧ������Ϊ
	for (int i = 0; i < 100; i++) {
		if(locker[i]==1)
			cout<<i+1<<" ";
	}
	return 0;
}


