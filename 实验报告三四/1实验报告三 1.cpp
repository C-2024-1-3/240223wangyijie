#include<iostream>
using namespace std;
int GCD(int& m, int& n)//�������Լ��������ʹ��������Ϊ�������������Բٿ��û������m,n
{
	int temp = 0;
	int a = 0;//���ñ���������ֵ
	for (temp = 1; temp <= m && temp <= n; temp++)//����ѭ������1��m��n�нϴ��һ��
	{
		if (m % temp == 0 && n % temp == 0)//�ж��Ƿ�Ϊm,n�Ĺ�Լ��
		{
			a = temp;//��ֵ����a����������ѭ��������ҵ�����a
		}
		else
		{
		};
	}
	return a;
}
int LCM(int& m, int& n)//������С����������
{
	int temp1 = 0;
	int a1 = 0;
	for (temp1 = 1; temp1 <= m * n; temp1++)//ע�����ﲻ������tenp1����˭����Ȼ��ֱ������ѭ��
	{
		if (temp1 % m == 0 && temp1 % n == 0)
		{
			a1 = temp1;
			break;//ֱ������ѭ��
		}
		else;
	}
	return a1;
}
int main()
{
	int m = 0;//���ñ���
	int n = 0;
	cout << "������m,n��ֵ" << endl;
	cin >> m >> n;
	int x, y;
	x = GCD(m, n);//�Ժ������е���
	y = LCM(m, n);//�Ժ������е���
	cout << "��С������Ϊ" << y << endl;//�Ժ����������
	cout << "���Լ��Ϊ" << x << endl;
	return 0;
}