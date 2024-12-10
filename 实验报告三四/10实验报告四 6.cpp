#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[])//这个数组接受的是一个首地址
{
	int length = strlen(s);//记住这个函数，先取一下数组的长度
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;//先初始化全部赋值为0
	}
	/*for (int i = 65,i1=97; i <= 90||i1<=122; i++,i1++)
	{
		for (int b = 0, a = 0; b < length && a < 25; b++, a++)//这样的嵌套循环不能有两个条件，因为每次外部训环结束后会进行重置
		{
			if (s[b] == static_cast<char>(i)||s[b]==static_cast<char>(i1))
			{
				counts[a]++;
			}
		}
	}*///错误
	for (int i = 0; i < length; i++)
	{
		char ch = s[i];//要学会用一个临时变量来进行条件判断,不用也行但是每次都要遍历一边数组运算量过大
		if (ch >= 'a' && ch <= 'z')
		{
			counts[ch - 'a']++;//ch在这里承接的是一个字母的asc2码，a的asc2码是65，因此把a减掉可以得到对应的数组的索引。例如ch此时承接的是a，为65，减去a后为counts[0]正好为counts[0]应该对应的数

		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			counts[ch - 'A']++;
		}

	}
}
int main()
{
	int counts[26];
	char s[100];//设置一个足够大的即可
	cout << "Enter a string " << endl;
	cin.getline(s, 100);

	count(s, counts);//如果形参列表中写的是数组的形式，那么只用传一个首地址进去即可
	for (int i = 0,a=97; i < 26&&a<=122; i++,a++)
	{
		if (counts[i] != 0)
		{
			cout << static_cast<char>(a) << ":" << " ";
			cout << counts[i] << endl;
		}
	}
}
