#include<iostream>
using namespace std;
int main()
{
	char a;//创建一个字符型变量
	cin >> a;
	if (a >= 'a' && a <= 'z')//这些字符会转为asc2码从a到z逐渐变大
	{
		cout << static_cast<char>(a - 'a' + 'A') << endl;//直接输出会输出为asc2码 要进行类型的强制转换 从a到z的asc2码是连续的因此算出相差多少再加到A的asc2码上即可

	}
	else
	{
		cout << (a + 1) << endl;

	}
	system("pause");
	return 0;




}