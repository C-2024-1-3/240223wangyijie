#include<iostream>
using namespace std;
bool is_prime(int num)//定义求解素数的函数
{
	int p = 0;//引入p变量
	if (num == 2)//先把2整出来，因为之后的循环中无法写出包含2的条件
	{
		p = 1;//返回 true
	}
	else
	{
		for (int i = 2; i < num; i++)//因为1不是质数所以这里的i必须要从2开始
		{
			if (num % i == 0)//因为2是质数所以如果不把2单独写出来2/2==0，会被判断为不是质数
			{
				p = 0;
				break;
			}
			else
			{
				p = 1;
			}
		}
		return p;
	}
}
int main()
{
	int l = 0;//引入l作为确定个数的变量
	for (int a = 1; l <= 200; a++)//设置循环结束条件为l<200,即质数的个数为200时结束
	{
		int x = is_prime(a);
		if (x != 0)
		{
			cout << a << " ";
			l++;//找到一个就把确定质数的变量加一
			if (l % 10 == 0)//这个是确定每十个换一行
			{
				cout << endl;//之前出错是因为把这个if else写到下面的else中去了
			}
			else
			{
			}
		}
		else
		{

		}

	}
	return 0;

}