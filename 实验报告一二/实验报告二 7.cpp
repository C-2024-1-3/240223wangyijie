#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 5; i++)//��һ��ѭ����ʾ��Ҫ5��
	{
		for (int m = 0; m <= i; m++)//�ڶ���ѭ����ʾÿ�е�*����С����������
		{
			cout << "*";
		}
		cout << endl;//��ÿһ�еĽ�β���л���
	}
	system("pause");
	return 0;
}