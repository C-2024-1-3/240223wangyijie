#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	//���ڼ����ַ������ȵĺ���strlen
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);
	//�ж����s1��s2������ô�Ͳ�������s2���Ӵ�
	if (len_s1 > len_s2)
	{
		return -1;

	}
	else;
	int a = 0;
	for (int i = 0; i <= len_s2 - len_s1/*�����Ŀ���Ǳ���s2�����п�����Ϊ��ʼ����ַ����ж�s1�Ƿ�Ϊ���Ӵ�*/; i++)
	{
		bool match = true;
		for (a = 0; a < len_s1; a++)//���ѭ����Ŀ���Ǳ���S1
		{

			if (s2[i + a] != s1[a])//
			{
				match = false;//�����������match��ԭ����else�޷�д��for�������棬�����Ҫ�����ŵ�һ�������棬��for�������ڽ����ж�
				break;
			}
		}
		if (match)//���Ϊ��
		{
			return i;
		}
	}
	return -1;//return -1;д�����������������return i���û���κ�ֵ�ܷ�����ô�Ż᷵��-1
}
int main()
{

	char s1[100];//��Ϊ����һ��Ҫ��char����getline(cin,input)��input.length()�������ò��ˣ�������ֻ������string ����
	char s2[100];
	cout << "Enter the first string:" << endl;
	cin.getline(s1, 100);//��cin.getline���Բ�����string���Ҳ��ð���ͷ�ļ�
	cout << "Enter the second string" << endl;
	cin.getline(s2, 100);
	int a = indexOf(s1, s2);
	cout << "indexof(" << s1 << " , " << s2 << ") is"/*��ֻ��һ���������ʽ*/ << indexOf(s1, s2) << endl;//�����ú������������