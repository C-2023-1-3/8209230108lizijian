#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "Enter the number:";
	double a; cin >> a;
	int judge = 0;
	if (a < 0)
	{
		a = -a; judge++;
	}
	double xn=a;
	double xn1=(xn+(a/xn))/2;
	cout << fixed << setprecision(11);
	while ((xn1 - xn) * (xn1 - xn) >=1e-20) {
		xn = xn1;
	    xn1 = (xn + a /xn) / 2;
	}
	cout.unsetf(ios::fixed);
	cout << "The square root of ";
	if (judge == 1) { cout << "-"; }
	cout<<a<<" is:"<< xn1;
	if (judge== 1)
		cout << "i";
	return 0;
}











