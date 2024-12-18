#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point()//默认构造函数赋初值
	{
		x = 60;
		y = 80;
	}
	void setpoint(int i, int j)//成员属性为私有的不能调用，但是如果作为函数的返回值或在函数中直接cout那么可以调用，这就是成员属性私有的作用
		//不然设置为私有又不能访问，没有一点作用，只能通过函数来对其进行赋值
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point p;
	int i;
	int j;
	cin >> i >> j;
	p.setpoint(i, j);//默认构造函数会自动调用，这里调用公共成员函数
	p.display();
}