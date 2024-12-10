#include<iostream>
using namespace std;
void  bubblesort(double* arr, int length)//用指针可以使形参和实参同时改变；这里利用冒泡排序时需要同时传入数组的地址和它的长度
{
	for (int m = 0; m < length - 1; m++)
	{
		for (int n = 0; n < length - 1 - m; n++)
		{
			if (arr[n] > arr[n + 1])
			{
				int temp = arr[n];
				arr[n] = arr[n + 1];
				arr[n + 1] = temp;
			}
			else;//这就是一个冒泡排序的函数
		}
	}

}
int main()
{
	double  arr[10];//创建一个双精度的数组
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];//利用循环进行输入
	}
	int length = sizeof(arr) / sizeof(arr[1]);
	bubblesort(arr, length);//调用函数后要加分号
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";//因为是利用指针把地址直接传到函数里，所以形参和实参都会变
	}//直接把排序后的输出出来即可
	return 0;
}