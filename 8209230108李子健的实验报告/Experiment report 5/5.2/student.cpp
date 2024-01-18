#include "student.h"          //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
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