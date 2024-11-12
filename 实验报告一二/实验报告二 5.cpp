#include<iostream>
#include<string>//使用getline时需要用到这个头文件

using namespace std;
int main()
{
	string input;//创建一个字符串变量但没有初始化，string类型的长度可以根据输入字符长度的变化而变化char【】必须提前确定长度
	cout << "请随意输入一行字符" << endl;
	
	getline(cin, input);//将输入的内容存放的input中，更重要的是可以将空格已及特殊字符存放其中
	int a = input.length();//将输入的一串字符串的长度存放在a中

	int letter = 0, k = 0, num = 0, q = 0;
	for (int i = 0; i < a; i++)//注意这里没有等号 数组【】里会少一个
	{
		char b = input[i];//把第一项给字符型变量b,利用for遍历input中的字符
		if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
		{
			letter++;//计算字母的数量
		}
		else if (b == ' ')
		{
			k++;//计算空格的数量
		}
		else if (b >= '0' && b <= '9')
		{
			num++;//计算数字的数量
		}
		else
		{
			q++;//计算其他字符的数量
		}
	}
	cout << "这一行字符中有数字" << num << "个" << endl;
	cout << "这一行字符中有字母" << letter << "个" << endl;
	cout << "这一行字符中有空格" << k << "个" << endl;
	cout << "这一行字符中有其他字符" << q << "个" << endl;
	system("pause");
	return 0;
}
