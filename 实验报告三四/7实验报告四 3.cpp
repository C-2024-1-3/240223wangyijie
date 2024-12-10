#include<iostream>
using namespace std;
void change(bool* arr, int i, int a = 2)
{
	for (a = 2; a <= 100; a++)//每次的间隔数,注意题上说的是每隔两个改变一次状态
	{
		for (i = a - 1/*数组的编号比正常的编号少一*/; i < 100; i += a + 1)//每次的状态改变，i=i+a+1，这个意思就是每次加a+1

		{//因为说的是每隔a个改变一次状态不是每a个改变一次状态
			arr[i] = (!arr[i]);//注意取反的符号
		}
	}
}
int main()
{
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = true;//先完成第一个学生的操作，因为第一个学生不是每隔一个改变一次状态，是直接改变了所有的状态，和其他人不一样
	}
	for (int i = 1; i < 100; i++)
	{
		change(arr, i);//调用函数
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == true)//一定是写成==而不是写成赋值符号=
		{
			cout << i + 1 << " ";//注意输出的不是数组的编号而是存物柜的编号
		}
	}

}