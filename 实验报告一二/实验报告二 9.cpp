#include <iostream>
using namespace std;
int main()
{
	double money = 0;
	double day = 0;//设置两个变量并进行初始化
	for (int i = 2; i <= 100; i *= 2)//设置循环看一共会买多少个苹果
	{
		day++;//计算循环了多少次，即用了多少天
		money += i * 0.8;//计算总钱数
	}
	cout << "平均每天花钱" << endl;
	cout << money / day << endl;//计算平均花钱
	system("pause");
	return 0;


}