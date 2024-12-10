#include<iostream>
#include<iomanip>//保留小数时使用的头文件
using namespace std;
#include"mytemperature.h"//这个分文件中进行函数的调用
int main()
{
	double choose = 0;
	double  temp = 0;
	cout << "请选择转换方式" << endl;
	cout << "1.摄氏温度转华氏温度" << endl;//选择切换的方式
	cout << "2.华氏温度转摄氏温度" << endl;
	cin >> choose;
	cout << "请输入温度" << endl;
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
	else;//这样便可实现函数分文件的编写
}