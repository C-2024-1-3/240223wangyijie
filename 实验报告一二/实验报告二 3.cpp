#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	cout << "�����������ε����߳�" << endl;
	cin >> a >> b >> c;
	if ((a < b + c) && (b < a + c) && (c < b + a))
	{
		if ((a == b) || (a == c) || (b == c))
		{
			cout << "���������ǵ���������" << endl;

		}
		else
		{
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else
	{
		cout << "����������߳��Ȳ��ܹ���������" << endl;
	}
	
	return 0;

}