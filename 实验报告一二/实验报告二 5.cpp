#include<iostream>
#include<string>//ʹ��getlineʱ��Ҫ�õ����ͷ�ļ�

using namespace std;
int main()
{
	string input;//����һ���ַ���������û�г�ʼ����string���͵ĳ��ȿ��Ը��������ַ����ȵı仯���仯char����������ǰȷ������
	cout << "����������һ���ַ�" << endl;
	
	getline(cin, input);//����������ݴ�ŵ�input�У�����Ҫ���ǿ��Խ��ո��Ѽ������ַ��������
	int a = input.length();//�������һ���ַ����ĳ��ȴ����a��

	int letter = 0, k = 0, num = 0, q = 0;
	for (int i = 0; i < a; i++)//ע������û�еȺ� ���顾�������һ��
	{
		char b = input[i];//�ѵ�һ����ַ��ͱ���b,����for����input�е��ַ�
		if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
		{
			letter++;//������ĸ������
		}
		else if (b == ' ')
		{
			k++;//����ո������
		}
		else if (b >= '0' && b <= '9')
		{
			num++;//�������ֵ�����
		}
		else
		{
			q++;//���������ַ�������
		}
	}
	cout << "��һ���ַ���������" << num << "��" << endl;
	cout << "��һ���ַ�������ĸ" << letter << "��" << endl;
	cout << "��һ���ַ����пո�" << k << "��" << endl;
	cout << "��һ���ַ����������ַ�" << q << "��" << endl;
	system("pause");
	return 0;
}
