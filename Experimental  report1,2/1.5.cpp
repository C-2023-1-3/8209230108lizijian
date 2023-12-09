#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float fahrenheit;
    float celsius;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << fixed << setprecision(2);
    cout << "Temperature in Celsius is: " << celsius << endl;
    return 0;
}


