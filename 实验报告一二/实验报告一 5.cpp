#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a = 0;
	cout << "�����뻪���¶�" << endl;
	cin >> a;//������������¶�
	cout << "ת��Ϊ�����¶Ⱥ�Ϊ" <<fixed <<setprecision(2) << 5 * (a - 32) / 9 << endl;//һ��ʹ��fixed���б�����λС�� ֻ��setprecisionֻ���ÿ�ѧ��������ʾ
	system("pause");
	return 0;


}

