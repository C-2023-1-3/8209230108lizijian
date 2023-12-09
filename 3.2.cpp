#include <iostream>
using namespace std;
bool is_prime(int num) {//判断是否为素数
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
     }
    return 1;
}
int main() {
    int n = 0;//输出的数的数量
    int num = 2;//数字
    while (n < 200) {
        if (is_prime(num)==1)
        {
            cout << num << "\t";
            n++;
            if (n % 10 == 0) {//控制每行输出十个数
                cout << endl;
            }
        }
        num++;
    }
}

