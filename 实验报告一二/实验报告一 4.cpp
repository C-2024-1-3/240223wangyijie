#include <iostream>
#include <iomanip>//ʹ��setprecisionʱҪ�õ�ͷ�ļ�
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//ֱ�����
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;//ת��Ϊ�ַ��ͱ���
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?:��Ϊ��ʱ65534������short�ķ�Χ������32767����-32768��ʼ���ϼ�����˻����-2
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;//���������
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;//ǿתΪdouble�������
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;//��ʹ��fix�������setprecision���Կ�ѧ�������ķ�ʽ����4λ
	//����дcout << "output in double type:" <<fixed<< setprecision(4) << static_cast<double>(testUnint) << endl;���������ı���С�������λ
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������
	cout << "output in oct unsigned int type:" << oct << testUnint << endl;
	cout << "output in int type" << static_cast<int>(testUnint) << endl;

	system("pause");
	return 0;
}