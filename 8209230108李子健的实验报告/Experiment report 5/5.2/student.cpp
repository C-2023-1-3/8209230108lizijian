#include "student.h"          //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set(int s_n, char*s_name, char s_sex) {
    num = s_n;
    strcpy_s(name, s_name); 
    sex = s_sex;   
}