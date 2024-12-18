#include<iostream>
using namespace std;//可以统一将类定义在头文件中
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
private:
	int num;
	char name[20];
	char sex;
public:
	void set_value(int s_num,const char s_name[20],char s_sex)
	{
		num = s_num;
		for (int i = 0; i < 20; i++)//利用循环对数组进行赋值，这里用cin.getline(name,20)进行赋值也可以
		{
			name[i] = s_name[i];
		}
		sex = s_sex;
	}
};
