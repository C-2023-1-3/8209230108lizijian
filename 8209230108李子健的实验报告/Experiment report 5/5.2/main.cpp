#include "student.h"
int main()
{
	Student stud;                //�������
	int n; char name[20]; char sex;
	cin >> n >> name >> sex;
	stud.set(n, name, sex);
	stud.display();              //ִ��stud�����display����
	return 0;
}