#include <iostream>
#include <iomanip>//使用setprecision时要用的头文件
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//直接输出
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;//转变为字符型变量
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:因为此时65534超出了short的范围超出了32767后会从-32768开始向上计数因此会输出-2
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;//用整型输出
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;//强转为double类型输出
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;//不使用fix的情况下setprecision会以科学计数法的方式保留4位
	//这样写cout << "output in double type:" <<fixed<< setprecision(4) << static_cast<double>(testUnint) << endl;可以真正的保留小数点后四位
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "output in oct unsigned int type:" << oct << testUnint << endl;
	cout << "output in int type" << static_cast<int>(testUnint) << endl;

	system("pause");
	return 0;
}