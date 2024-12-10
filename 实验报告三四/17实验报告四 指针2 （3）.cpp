#include<iostream>
using namespace std;
void order(int num,int* arr)
{
	
	cout << "请输入元素个数" << endl;
	

	
	for (int i = 0; i < num-1; i++)
	{
		for (int a = 0; a < num - i - 1; a++)
		{
			if (arr[a + 1] < arr[a])
			{
				int temp =arr[a];
				arr[a] = arr[a + 1];
				arr[a + 1] = temp;
			}
		}
	}

}
int main()
{
	int num;
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];//这里arr中仍然是具体值
	}
	order(num, arr);
	for (int i = 0; i < num; i++)
	{
		cout << arr[i];
	}


}