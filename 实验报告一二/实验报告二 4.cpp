include<iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 0;
	char ch;//注意字符型变量不只能够储存字母还可以储存运算符号
	cin >> num1 >> ch >> num2;
	switch (ch)//利用switch分为四类
	{
	case '+': cout << num1 + num2 << endl; break;
	case '-': cout << num1 - num2 << endl; break;
	case'*':cout << num1 * num2 << endl; break;
		if (num2 != 0)//利用if判断分母是否为零
		{
	case'/':cout << num1 / num2 << endl; break;
	case'%':cout << num1 % num2 << endl; break;
		}
		else
		{
			cout << "您输入的除数为零" << endl;
		}
	default:cout << "您输入的运算符非法" << endl;
	}

	return 0;
}