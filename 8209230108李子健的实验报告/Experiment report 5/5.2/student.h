#include <iostream>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set(int s_n, char* s_name, char s_sex);
private:
	int num;
	char name[20];
	char sex;
};