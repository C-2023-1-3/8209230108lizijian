#include <iostream>
using namespace std;
int main() {
    char s[6] = {' ',' ',' ',' ','*'};
    for (int i =4; i >=0; i--) {
        s[i] = '*';
        cout << s<<endl;
    }
    return 0;
}



