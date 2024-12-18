#include<iostream>
using namespace std;
class Student
{

public:
	int id;
	int mark;
public:
	Student(int a, int b)//利用构造函数进行初始化
	{
		id = a;
		mark = b;
	}
	void getInformation()//输出学生信息
	{
		cout << id << "号学生取得" << mark << "分的最高分" << endl;
	}

};
Student Max(Student* arr)//定义比较最大值函数
{
	Student max_student(0, 0);//括号法调用构造函数id 和mark都初始化为0
	for (int i = 0; i < 5; i++)
	{
		if (arr[i].mark > max_student.mark)//利用循环取到最大值
		{
			max_student.mark = arr[i].mark;
			max_student.id = arr[i].id;
		}
	}
	return max_student;//返回最大值
}
int main()
{
	Student arr[5] =
	{//定义student类的数组
		{01,100},
		{02,99},
		{03,98},
		{04,97},
		{05,96}
	};//定义这样的student类型的数组时，可以直接采用arr[i].id的方式来访问类中的东西  这个就叫对象数组
	Student s_max = Max(arr);//调用比较最大值函数
	s_max.getInformation();
	return 0;
}
