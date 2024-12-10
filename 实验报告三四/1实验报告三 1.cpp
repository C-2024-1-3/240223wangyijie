#include<iostream>
using namespace std;
int GCD(int& m, int& n)//定义最大公约数函数并使用引用作为参数，这样可以操控用户输入的m,n
{
	int temp = 0;
	int a = 0;//设置变量并赋初值
	for (temp = 1; temp <= m && temp <= n; temp++)//设置循环遍历1到m或n中较大的一个
	{
		if (m % temp == 0 && n % temp == 0)//判断是否为m,n的公约数
		{
			a = temp;//把值赋给a，这样经过循环便可以找到最大的a
		}
		else
		{
		};
	}
	return a;
}
int LCM(int& m, int& n)//设置最小公倍数函数
{
	int temp1 = 0;
	int a1 = 0;
	for (temp1 = 1; temp1 <= m * n; temp1++)//注意这里不用限制tenp1大于谁，不然会直接跳出循环
	{
		if (temp1 % m == 0 && temp1 % n == 0)
		{
			a1 = temp1;
			break;//直接跳出循环
		}
		else;
	}
	return a1;
}
int main()
{
	int m = 0;//设置变量
	int n = 0;
	cout << "请输入m,n的值" << endl;
	cin >> m >> n;
	int x, y;
	x = GCD(m, n);//对函数进行调用
	y = LCM(m, n);//对函数进行调用
	cout << "最小公倍数为" << y << endl;//对函数进行输出
	cout << "最大公约数为" << x << endl;
	return 0;
}