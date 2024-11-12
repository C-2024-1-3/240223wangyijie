#include<iostream>
using namespace std;
int main()
{
	int k = 0;//未定义变量k
	int i = k + 1;

	cout << i++ << endl;
	i = 1;//变量i重复定义
	cout << i++ << endl;//i++表示先进行运算再给i加一，即先输出i在给i加一，因此这行代码不会输出 无意义
	cout << "Welcome to C++" << endl;

	return 0;
}