#include<iostream>
using namespace std;//����ͳһ���ඨ����ͷ�ļ���
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
private:
	int num;
	char name[20];
	char sex;
public:
	void set_value(int s_num,const char s_name[20],char s_sex)
	{
		num = s_num;
		for (int i = 0; i < 20; i++)//����ѭ����������и�ֵ��������cin.getline(name,20)���и�ֵҲ����
		{
			name[i] = s_name[i];
		}
		sex = s_sex;
	}
};
