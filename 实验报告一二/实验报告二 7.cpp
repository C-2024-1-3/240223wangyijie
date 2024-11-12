#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 5; i++)//第一个循环表示需要5行
	{
		for (int m = 0; m <= i; m++)//第二个循环表示每行的*数量小于他的行数
		{
			cout << "*";
		}
		cout << endl;//在每一行的结尾进行换行
	}
	system("pause");
	return 0;
}