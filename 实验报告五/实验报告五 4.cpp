#include<iostream>
using namespace std;
class Student
{

public:
	int id;
	int mark;
public:
	Student(int a, int b)//���ù��캯�����г�ʼ��
	{
		id = a;
		mark = b;
	}
	void getInformation()//���ѧ����Ϣ
	{
		cout << id << "��ѧ��ȡ��" << mark << "�ֵ���߷�" << endl;
	}

};
Student Max(Student* arr)//����Ƚ����ֵ����
{
	Student max_student(0, 0);//���ŷ����ù��캯��id ��mark����ʼ��Ϊ0
	for (int i = 0; i < 5; i++)
	{
		if (arr[i].mark > max_student.mark)//����ѭ��ȡ�����ֵ
		{
			max_student.mark = arr[i].mark;
			max_student.id = arr[i].id;
		}
	}
	return max_student;//�������ֵ
}
int main()
{
	Student arr[5] =
	{//����student�������
		{01,100},
		{02,99},
		{03,98},
		{04,97},
		{05,96}
	};//����������student���͵�����ʱ������ֱ�Ӳ���arr[i].id�ķ�ʽ���������еĶ���  ����ͽж�������
	Student s_max = Max(arr);//���ñȽ����ֵ����
	s_max.getInformation();
	return 0;
}
