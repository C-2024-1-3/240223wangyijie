#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int c_hour;
	int c_minute;
	int c_sec;
public:
	int gethour(int hour)//�����Ա��������˽�е�ֵreturn ����ʹ֮���Է���
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
	Time t1; //����t1ΪTime�����
	int hour, hour1;
	int minute, minute1;
	int sec, sec1;
	cin >> hour;      //�����趨��ʱ�� 
	cin >> minute;
	cin >> sec;
	hour1 = t1.gethour(hour);//���ó�Ա�����������
	minute1 = t1.gethour(minute);
	sec1 = t1.getsec(sec);
	cout << hour1 << ":" << minute1 << ":" << sec1 << endl;
	return 0;
}