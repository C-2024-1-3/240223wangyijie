include<iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 0;
	char ch;//ע���ַ��ͱ�����ֻ�ܹ�������ĸ�����Դ����������
	cin >> num1 >> ch >> num2;
	switch (ch)//����switch��Ϊ����
	{
	case '+': cout << num1 + num2 << endl; break;
	case '-': cout << num1 - num2 << endl; break;
	case'*':cout << num1 * num2 << endl; break;
		if (num2 != 0)//����if�жϷ�ĸ�Ƿ�Ϊ��
		{
	case'/':cout << num1 / num2 << endl; break;
	case'%':cout << num1 % num2 << endl; break;
		}
		else
		{
			cout << "������ĳ���Ϊ��" << endl;
		}
	default:cout << "�������������Ƿ�" << endl;
	}

	return 0;
}