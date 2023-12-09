#include <iostream>
using namespace std;
int main() {
	const double price = 0.8;
	int mount0 = 2;
	int mount = 0;
	int day = 0;
	double ave_price;
	while (true) {
		mount += mount0;
		mount0 = mount0 * 2;
		day++;
		if ((mount+mount0) > 100)
			break;
	}
	ave_price = mount * price / day;
	cout << "Average cost "<<ave_price<<" per day";
	return 0;
}






