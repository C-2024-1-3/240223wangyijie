#include<iostream>
using namespace std;
int peaches(int n)//n代表天数
{
	if (n == 10)//最后一天单独写，因为不存在下一天
	{
		return 1;
	}
	else
	{
		return 2 * (peaches(n + 1) + 1);//在这里写递推公式即可，后一天的加一再乘2就是前一天的
	}
}
int main()
{
	cout << peaches(1) << endl;//输出最终的数据1

}//递归相关的问题时先考虑递归公式然后在函数中调用函数即可