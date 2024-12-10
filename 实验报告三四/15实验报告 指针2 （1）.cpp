#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	//用于计算字符串长度的函数strlen
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);
	//判断如果s1比s2还长那么就不可能是s2的子串
	if (len_s1 > len_s2)
	{
		return -1;

	}
	else;
	int a = 0;
	for (int i = 0; i <= len_s2 - len_s1/*这里的目的是遍历s2中所有可能作为起始点的字符并判断s1是否为其子串*/; i++)
	{
		bool match = true;
		for (a = 0; a < len_s1; a++)//这个循环的目的是遍历S1
		{

			if (s2[i + a] != s1[a])//
			{
				match = false;//这里引入这个match的原因是else无法写到for函数外面，因此需要把他放到一个数里面，到for函数外在进行判断
				break;
			}
		}
		if (match)//如果为真
		{
			return i;
		}
	}
	return -1;//return -1;写在这里代表的是上面的return i如果没有任何值能返回那么才会返回-1
}
int main()
{

	char s1[100];//因为题中一定要用char所以getline(cin,input)和input.length()函数都用不了；这两个只能用与string 类型
	char s2[100];
	cout << "Enter the first string:" << endl;
	cin.getline(s1, 100);//用cin.getline可以不用于string并且不用包含头文件
	cout << "Enter the second string" << endl;
	cin.getline(s2, 100);
	int a = indexOf(s1, s2);
	cout << "indexof(" << s1 << " , " << s2 << ") is"/*这只是一个输出的形式*/ << indexOf(s1, s2) << endl;//最后调用函数并输出即可