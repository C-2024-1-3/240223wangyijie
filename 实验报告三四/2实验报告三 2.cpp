#include<iostream>
using namespace std;
bool is_prime(int num)//������������ĺ���
{
	int p = 0;//����p����
	if (num == 2)//�Ȱ�2����������Ϊ֮���ѭ�����޷�д������2������
	{
		p = 1;//���� true
	}
	else
	{
		for (int i = 2; i < num; i++)//��Ϊ1�����������������i����Ҫ��2��ʼ
		{
			if (num % i == 0)//��Ϊ2�����������������2����д����2/2==0���ᱻ�ж�Ϊ��������
			{
				p = 0;
				break;
			}
			else
			{
				p = 1;
			}
		}
		return p;
	}
}
int main()
{
	int l = 0;//����l��Ϊȷ�������ı���
	for (int a = 1; l <= 200; a++)//����ѭ����������Ϊl<200,�������ĸ���Ϊ200ʱ����
	{
		int x = is_prime(a);
		if (x != 0)
		{
			cout << a << " ";
			l++;//�ҵ�һ���Ͱ�ȷ�������ı�����һ
			if (l % 10 == 0)//�����ȷ��ÿʮ����һ��
			{
				cout << endl;//֮ǰ��������Ϊ�����if elseд�������else��ȥ��
			}
			else
			{
			}
		}
		else
		{

		}

	}
	return 0;

}