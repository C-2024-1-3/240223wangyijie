#include <iostream>
using namespace std;
int main()
{
	double money = 0;
	double day = 0;//�����������������г�ʼ��
	for (int i = 2; i <= 100; i *= 2)//����ѭ����һ��������ٸ�ƻ��
	{
		day++;//����ѭ���˶��ٴΣ������˶�����
		money += i * 0.8;//������Ǯ��
	}
	cout << "ƽ��ÿ�컨Ǯ" << endl;
	cout << money / day << endl;//����ƽ����Ǯ
	system("pause");
	return 0;


}