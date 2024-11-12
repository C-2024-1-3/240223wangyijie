#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	cout << "请输入三角形的三边长" << endl;
	cin >> a >> b >> c;
	if ((a < b + c) && (b < a + c) && (c < b + a))
	{
		if ((a == b) || (a == c) || (b == c))
		{
			cout << "该三角形是等腰三角形" << endl;

		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "您输入的三边长度不能构成三角形" << endl;
	}
	
	return 0;

}