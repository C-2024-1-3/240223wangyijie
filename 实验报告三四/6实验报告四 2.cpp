#include<iostream>
using namespace std;
void  bubblesort(double* arr, int length)//��ָ�����ʹ�βκ�ʵ��ͬʱ�ı䣻��������ð������ʱ��Ҫͬʱ��������ĵ�ַ�����ĳ���
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
			else;//�����һ��ð������ĺ���
		}
	}

}
int main()
{
	double  arr[10];//����һ��˫���ȵ�����
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];//����ѭ����������
	}
	int length = sizeof(arr) / sizeof(arr[1]);
	bubblesort(arr, length);//���ú�����Ҫ�ӷֺ�
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";//��Ϊ������ָ��ѵ�ֱַ�Ӵ�������������βκ�ʵ�ζ����
	}//ֱ�Ӱ������������������
	return 0;
}