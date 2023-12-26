#include<iostream>
using namespace std;
class Time           
{
private:          
	int hour;
	int minute;
	int sec;
public:
   void settime(int h, int m, int s) {
		hour = h, minute = m, sec = s;
	}
   void showtime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};


int main()
{
	Time t1; //定义t1为Time类对象
	int h, m, s; cin >> h >> m >> s;
	t1.settime(h, m, s);
	t1.showtime();
	return 0;
}



