#include <string>
#include <iostream>
#include <vector>

using namespace std;


class timer{
//private:
public:
	int hour;
	int minute;
public:
	timer(){ hour = 0;  minute = 0;};
	timer(int h, int m){ hour = h%24;  minute = m%60; };
	timer operator+(const timer&t)const;
	timer operator=(const timer&t)const;
	void  operator=(const timer&t);
};
timer timer::operator+(const timer&t)const
{
	timer ti;
	ti.minute = minute + t.minute;
	ti.hour   = hour   + t.hour + ti.minute / 60;

	ti.minute %= 60;
	ti.hour   %= 24;

	return ti;
}
timer timer::operator=(const timer&t)const
{
	timer ti;
	ti.hour   = t.hour;
	ti.minute = t.minute;

	return ti;
}
void timer::operator=(const timer&t)
{
	hour = t.hour;
	minute = t.minute;
}
int main(void)
{
	vector<int> vi;
	vector<int>::iterator pd;

	timer t0(1, 40);
	timer t1(2, 10);
	timer t3 = t0;

	cout << "Timer t3:" << t3.hour << "-" << t3.minute << endl;

	t3 = t0 + t1;

	cout << "Timer t0:" << t0.hour << "-" << t0.minute << endl;
	cout << "Timer t1:" << t1.hour << "-" << t1.minute << endl;
	cout << "Timer t3:" << t3.hour << "-" << t3.minute << endl;
	return 0;
}



