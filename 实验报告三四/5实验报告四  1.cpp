#include<iostream>//这个实验首先可以看出是要通过两层循环判断来实现
using namespace std;
int main()
{
	int arr[10];//定义一个数组来承载最终的数据
	int arr1[10];//定义一个临时数组来存放用户输入的数据
	int num = 0;//定义最终去掉重复的数后剩余的数
	int temp;//创建一个临时变量
	for (int i = 0; i < 10; i++)//这个for循环用于进行数据的输入
	{
		cin >> arr1[i];
	}
	for (int x = 0; x < 10; x++)//这个for循环对整个数组进行遍历
	{
		temp = 0;//初始化临时变量
		for (int y = 0; y < x; y++)//这个for用于判断这个数arr[x]与这个数之前的数是否存在相等的情况，不把arr[x]与整个数组进行比较是因为
		{//遍历整个数组时会遍历到自身，这样全都不符合下面的if条件判断于是一个数也输出不出来
			if (arr1[x] == arr1[y])
			{
				temp++;//不能在这里面嵌套for循环进行赋值，因为要考虑外面嵌套循环的影响，所以在这里面创建一个临时变量
			}

		}
		if (temp == 0)
		{
			arr[num] = arr1[x];//将临时数组中的数赋值给正式数组
			num++;//num++计算出正式数组中有多少数字，便于后面输出
		}

	}
	for (int a = 0; a < num; a++)
	{
		cout << arr[a] <<" ";
	}

}