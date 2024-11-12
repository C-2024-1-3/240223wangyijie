#include<iostream>
using namespace std;
int main()
{
	double x;
	cout << "请输入x的值" << endl;
	cin >> x;
	if ((x>0)&&(x<1))
	{
		cout << 3 - 2 * x << endl;
	}
	else if (x >= 1 && x < 5)
	{
		cout << 2 / (4 * x) + 1 << endl;

	}
	else if (x >= 5 && x < 10)
	{
		cout << x * x << endl;
	}
	else
	{
		cout << "不在范围内" << endl;
	}//分类进行输出即可
	system("pause");
	return 0;
}