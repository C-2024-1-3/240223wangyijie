#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int c_hour;
	int c_minute;
	int c_sec;
public:
	int gethour(int hour)//定义成员函数并把私有的值return 出来使之可以访问
	{
		c_hour = hour;
		return c_hour;
	}
	int  getminute(int minute)
	{
		c_minute = minute;
		return c_minute;
	}
	int  getsec(int sec)
	{
		c_sec = sec;
		return c_sec;
	}
};
int main()
{
	Time t1; //定义t1为Time类对象
	int hour, hour1;
	int minute, minute1;
	int sec, sec1;
	cin >> hour;      //输入设定的时间 
	cin >> minute;
	cin >> sec;
	hour1 = t1.gethour(hour);//调用成员函数并且输出
	minute1 = t1.gethour(minute);
	sec1 = t1.getsec(sec);
	cout << hour1 << ":" << minute1 << ":" << sec1 << endl;
	return 0;
}