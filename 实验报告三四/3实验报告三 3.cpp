#include<iostream>
#include<iomanip>//����С��ʱʹ�õ�ͷ�ļ�
using namespace std;
#include"mytemperature.h"//������ļ��н��к����ĵ���
int main()
{
	double choose = 0;
	double  temp = 0;
	cout << "��ѡ��ת����ʽ" << endl;
	cout << "1.�����¶�ת�����¶�" << endl;//ѡ���л��ķ�ʽ
	cout << "2.�����¶�ת�����¶�" << endl;
	cin >> choose;
	cout << "�������¶�" << endl;
	cin >> temp;
	if (choose == 1)
	{
		double  fah = celsius_to_fah(temp);
		cout <<fixed<<setprecision(2)<< fah << endl;
	}
	else if (choose == 2)
	{
		double  cel = fahrenheit_to_cels(temp);
		cout <<fixed<<setprecision(2)<< cel << endl;
	}
	else;//�������ʵ�ֺ������ļ��ı�д
}