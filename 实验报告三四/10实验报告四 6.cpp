#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[])//���������ܵ���һ���׵�ַ
{
	int length = strlen(s);//��ס�����������ȡһ������ĳ���
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;//�ȳ�ʼ��ȫ����ֵΪ0
	}
	/*for (int i = 65,i1=97; i <= 90||i1<=122; i++,i1++)
	{
		for (int b = 0, a = 0; b < length && a < 25; b++, a++)//������Ƕ��ѭ��������������������Ϊÿ���ⲿѵ����������������
		{
			if (s[b] == static_cast<char>(i)||s[b]==static_cast<char>(i1))
			{
				counts[a]++;
			}
		}
	}*///����
	for (int i = 0; i < length; i++)
	{
		char ch = s[i];//Ҫѧ����һ����ʱ���������������ж�,����Ҳ�е���ÿ�ζ�Ҫ����һ����������������
		if (ch >= 'a' && ch <= 'z')
		{
			counts[ch - 'a']++;//ch������нӵ���һ����ĸ��asc2�룬a��asc2����65����˰�a�������Եõ���Ӧ�����������������ch��ʱ�нӵ���a��Ϊ65����ȥa��Ϊcounts[0]����Ϊcounts[0]Ӧ�ö�Ӧ����

		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			counts[ch - 'A']++;
		}

	}
}
int main()
{
	int counts[26];
	char s[100];//����һ���㹻��ļ���
	cout << "Enter a string " << endl;
	cin.getline(s, 100);

	count(s, counts);//����β��б���д�����������ʽ����ôֻ�ô�һ���׵�ַ��ȥ����
	for (int i = 0,a=97; i < 26&&a<=122; i++,a++)
	{
		if (counts[i] != 0)
		{
			cout << static_cast<char>(a) << ":" << " ";
			cout << counts[i] << endl;
		}
	}
}
