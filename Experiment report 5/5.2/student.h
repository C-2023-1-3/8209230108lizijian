#include <iostream>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set(int s_n, char* s_name, char s_sex);
private:
	int num;
	char name[20];
	char sex;
};