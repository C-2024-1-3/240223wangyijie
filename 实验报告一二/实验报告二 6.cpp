#include<iostream>
using namespace std;


int gcd(int m, int n)//����һ�������Լ���ĺ���
{
	int temp = 0;//������ʱ����
	for (int i = 0; i <= m && i <= n; i++)//���Լ����ѭ����Χ
	{
		if ((m % i == 0) && (n % i == 0))//���Լ�������ԣ��ҳ����й�Լ��
		{
			temp = i;//ͨ��ѭ��������һ����ֵ��temp
		}
		else {}

	}
	return temp;//���������void������һ��Ҫ�з���ֵ

}
int lcm(int x, int y, int z)//������С��������������Ϊ���Լ������С�������ĳ˻�����ԭ���������ĳ˻�
{
	int e = x * y / z;//���Կ���ֱ�Ӳ�ȡ�����Ķ��巽ʽ
	return e;
}

int main() {
	int a = 0, b = 0;
	cout << "����������������" << endl;
	cin >> a >> b;
	int c = gcd(a, b);//���������ĵ���
	int d = lcm(a, b, c);
	cout << "������������С��������" << d << endl;
	cout << "�������������Լ����" << c << endl;
	system("pause");
	return 0;
}
