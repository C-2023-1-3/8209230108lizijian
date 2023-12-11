#include  "mytemperature.h"
double celsius_to_fah(double cel) {
	cout << fixed << setprecision(1);
	return (cel*9/5)+32 ;
}
double fahrenheit_to_cels(double fah) {
	cout << fixed << setprecision(2);
	return (fah - 32) * 5 / 9;
}