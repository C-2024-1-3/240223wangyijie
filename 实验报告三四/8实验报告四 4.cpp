#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])//加const 代表不能函数内部不能对数组进行修改
{//在函数外仍可以修改
	int size3 = size1 + size2;//因为list1和list2是不可修改的两个数组，因此只能作为传入的两个数组使用
	for (int i = 0; i < size2; i++)
	{
		list3[i] = list2[i];//list3作为合并后的数组
	}
	for (int i = 0; i < size1; i++)
	{
		list3[size2 + i] = list1[i];
	}//这两个for用于把两个给定的数组合并到list3中去
	//下面用冒泡排序排一下
	for (int i = 0; i < size3 - 1; i++)//循环的总轮数
	{
		for (int m = 0; m < size3 - i - 1; m++)//每一次循环需要交换的次数，这里是减去i也就是减去轮数再减1，即可算出每轮需要交换的次数
		{
			if (list3[m] > list3[m + 1])
			{
				int temp = list3[m];
				list3[m] = list3[m + 1];
				list3[m + 1] = temp;
			}
			else;
		}

	}
	for (int i = 0; i < size3; i++)//输出list3[]中的所有元素
	{
		cout << list3[i] << " ";

	}
}

int main()

{
	int size1;
	int size2;
	int size3;
	cout << "请输入数组长度" << endl;
	cin >> size1;//第一个数先输入长度
	cout << "enter list 1:" << endl;
	int* list1 = new int[size1];//用new不要求数组的长度是一个变量,直接定义一个数组时必须写出数组中含有几个数，或者写出数组的内容
	for (int i = 0; i < size1; i++)//使用new定义一个数组时是没有自己的名字的，必须用指针的名字
	{
		cin >> list1[i];
	}
	cout << "请输入数组长度" << endl;
	cin >> size2;
	cout << "enter list 2" << endl;
	int* list2 = new int[size2];//和上一个相同
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	size3 = size1 + size2;

	int* list3 = new int[size3];
	merge(list1, size1, list2, size2, list3);//调用函数只用传一个数组名进去就行了
	delete[] list1;//new出来的空间最后要手动删除
	delete[] list2;
	delete[] list3;

}