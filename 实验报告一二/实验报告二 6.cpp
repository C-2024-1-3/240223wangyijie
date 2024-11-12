#include<iostream>
using namespace std;


int gcd(int m, int n)//创建一个求最大公约数的函数
{
	int temp = 0;//创建临时变量
	for (int i = 0; i <= m && i <= n; i++)//最大公约数的循环范围
	{
		if ((m % i == 0) && (n % i == 0))//最大公约数的特性，找出所有公约数
		{
			temp = i;//通过循环把最大的一个赋值给temp
		}
		else {}

	}
	return temp;//如果不是用void定义则一定要有返回值

}
int lcm(int x, int y, int z)//创建最小公倍数函数，因为最大公约数与最小公倍数的乘积等于原来两个数的乘积
{
	int e = x * y / z;//所以可以直接采取这样的定义方式
	return e;
}

int main() {
	int a = 0, b = 0;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	int c = gcd(a, b);//两个函数的调用
	int d = lcm(a, b, c);
	cout << "这两个数的最小公倍数是" << d << endl;
	cout << "这两个数的最大公约数是" << c << endl;
	system("pause");
	return 0;
}
