#include <iostream>
using namespace std;
class cube {
private:
	int length, width, high;
public:
	cube(int l = 0, int w = 0, int h = 0) {
		length = l; width = w; high = h;
	}
	void set(int l, int w, int h) {
		length = l; width = w; high = h;
	}
	int calculateV(){
		return length * width * high;
	}
	~cube() {};
};
int main() {
	cube s[3];
	int l, w, h;
	for (int i = 0; i < 3; i++) {
		cin >> l >> w >> h;
		s[i].set(l, w,h);
	}
	for(int  i = 0; i < 3; i++) {
		cout << s[i].calculateV() << " ";
	}
	return 0;
}