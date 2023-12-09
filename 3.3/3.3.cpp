#include <iostream>
#include "mytemperature.h"
using namespace std;
int main() {
	cout << "Clesius\tFahrenheit\t|Fahrenheit\tCelsius\n";
	for (double cel = 40.0, fah = 120.0; cel >= 31.0; cel -= 1, fah -= 10) {
		cout << fixed << setprecision(1);
		cout << cel << "\t";
		cout << celsius_to_fah(cel) << "\t\t";
		cout << "|";
		cout << fah << "\t\t";
		cout << fahrenheit_to_cels(fah) << endl;
	}
	return 0;
}




