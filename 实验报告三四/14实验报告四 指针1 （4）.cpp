#include<iostream>
using namespace std;
int* f()
{
	
	int* list = new int[4];
	for (int i = 0;i < 4; i++)//new 出来的数组必须通过for 循环来赋值
	{
		list[i] = i+1;
	}//形参存放在栈区会在函数运行完后释放
	return list;//返回值会被编译器做一次保留，之后就随机输出东西了
}
void main()
{
	int* list = f();//new在堆区开辟空间不会被释放
	cout << list[0] << endl;
	cout << list[1] << endl;
	delete[] list;

}