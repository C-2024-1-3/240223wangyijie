#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])//��const �����ܺ����ڲ����ܶ���������޸�
{//�ں������Կ����޸�
	int size3 = size1 + size2;//��Ϊlist1��list2�ǲ����޸ĵ��������飬���ֻ����Ϊ�������������ʹ��
	for (int i = 0; i < size2; i++)
	{
		list3[i] = list2[i];//list3��Ϊ�ϲ��������
	}
	for (int i = 0; i < size1; i++)
	{
		list3[size2 + i] = list1[i];
	}//������for���ڰ���������������ϲ���list3��ȥ
	//������ð��������һ��
	for (int i = 0; i < size3 - 1; i++)//ѭ����������
	{
		for (int m = 0; m < size3 - i - 1; m++)//ÿһ��ѭ����Ҫ�����Ĵ����������Ǽ�ȥiҲ���Ǽ�ȥ�����ټ�1���������ÿ����Ҫ�����Ĵ���
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
	for (int i = 0; i < size3; i++)//���list3[]�е�����Ԫ��
	{
		cout << list3[i] << " ";

	}
}

int main()

{
	int size1;
	int size2;
	int size3;
	cout << "���������鳤��" << endl;
	cin >> size1;//��һ���������볤��
	cout << "enter list 1:" << endl;
	int* list1 = new int[size1];//��new��Ҫ������ĳ�����һ������,ֱ�Ӷ���һ������ʱ����д�������к��м�����������д�����������
	for (int i = 0; i < size1; i++)//ʹ��new����һ������ʱ��û���Լ������ֵģ�������ָ�������
	{
		cin >> list1[i];
	}
	cout << "���������鳤��" << endl;
	cin >> size2;
	cout << "enter list 2" << endl;
	int* list2 = new int[size2];//����һ����ͬ
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	size3 = size1 + size2;

	int* list3 = new int[size3];
	merge(list1, size1, list2, size2, list3);//���ú���ֻ�ô�һ����������ȥ������
	delete[] list1;//new�����Ŀռ����Ҫ�ֶ�ɾ��
	delete[] list2;
	delete[] list3;

}