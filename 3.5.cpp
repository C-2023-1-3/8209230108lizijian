#include <iostream>
using namespace std;
void num(int & n,int&day) {
	n = (n + 1) * 2;
	day--;
	if(day>1)
	num(n,day);
}
int main() {
	int n = 1;
	int day = 10;
	num(n,day);
	cout <<"��1����ӹ�ժ��"<< n<<"������";
	return 0;
}
