#include <iostream>
using namespace std;
int main()
{
	double a = 0, xn = 0, xnp1 = 0;//�����������������
	cout << "������һ����Ҫ���俪ƽ��������" << endl;
	cin >> a;
	xn = a;//a��Ϊ��ʼֵ
	while (1)//����Ϊ��ѭ��
	{

		xnp1 = 0.5 * (xn + a / xn);//���õ�����ʽ

		if ((xnp1 - xn >= 0 && xnp1 - xn < 0.00001) || (xnp1 - xn && xn - xnp1 < 0.00001))//��������ѭ��������,ע�������Ǿ���ֵ����������ʾ
		{
			cout << xnp1 << endl;//������յĿ���ֵ
			break;
		}
		else
		{
		}
		xn = xnp1;//��������������Ͱ�xnp1���¸�ֵ��xn
	}
	system("pause");
	return 0;

}
