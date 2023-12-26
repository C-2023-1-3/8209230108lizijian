#include "student.h"
int main()
{
	Student stud;                //定义对象
	int n; char name[20]; char sex;
	cin >> n >> name >> sex;
	stud.set(n, name, sex);
	stud.display();              //执行stud对象的display函数
	return 0;
}