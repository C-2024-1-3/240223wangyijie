#include<iostream>
using namespace std;
int* f()
{
	
	int* list = new int[4];
	for (int i = 0;i < 4; i++)//new �������������ͨ��for ѭ������ֵ
	{
		list[i] = i+1;
	}//�βδ����ջ�����ں�����������ͷ�
	return list;//����ֵ�ᱻ��������һ�α�����֮���������������
}
void main()
{
	int* list = f();//new�ڶ������ٿռ䲻�ᱻ�ͷ�
	cout << list[0] << endl;
	cout << list[1] << endl;
	delete[] list;

}