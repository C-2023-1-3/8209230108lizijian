#include <iostream>
using namespace std;
void changelocker(bool* locker, int n) {//从第二个学生开始的第n个学生的开关模式
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
		locker[i] = false;//关闭所有储物柜
	for (int i = 0; i < 100; i++)
		locker[i] = true;//第一个学生的行为
	for(int i=2;i<=100;i++)
	changelocker(locker, i);//第二到一百个学生的行为
	for (int i = 0; i < 100; i++) {
		if(locker[i]==1)
			cout<<i+1<<" ";
	}
	return 0;
}


