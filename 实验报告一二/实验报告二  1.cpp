#include<iostream>
using namespace std;
int main()
{
	char a;//����һ���ַ��ͱ���
	cin >> a;
	if (a >= 'a' && a <= 'z')//��Щ�ַ���תΪasc2���a��z�𽥱��
	{
		cout << static_cast<char>(a - 'a' + 'A') << endl;//ֱ����������Ϊasc2�� Ҫ�������͵�ǿ��ת�� ��a��z��asc2�����������������������ټӵ�A��asc2���ϼ���

	}
	else
	{
		cout << (a + 1) << endl;

	}
	system("pause");
	return 0;




}