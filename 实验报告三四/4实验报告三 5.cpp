#include<iostream>
using namespace std;
int peaches(int n)//n��������
{
	if (n == 10)//���һ�쵥��д����Ϊ��������һ��
	{
		return 1;
	}
	else
	{
		return 2 * (peaches(n + 1) + 1);//������д���ƹ�ʽ���ɣ���һ��ļ�һ�ٳ�2����ǰһ���
	}
}
int main()
{
	cout << peaches(1) << endl;//������յ�����1

}//�ݹ���ص�����ʱ�ȿ��ǵݹ鹫ʽȻ���ں����е��ú�������