#include<iostream>
using namespace std;
int main()
{
	double a = 0, b = 0;
	const double c = 3.14;//定义一个常量c 用define a 3.14  也可以
	cout << "请输入半径和锥高" << endl;//提示输入
	cin >> a >> b;
	cout << "该圆锥的体积为" << c * a * a * b / 3 << endl;//用公式计算圆锥体积
	return 0;




}