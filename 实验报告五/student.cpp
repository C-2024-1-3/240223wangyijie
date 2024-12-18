//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include"student.h"            //不要漏写此行，否则编译通不过,注意引用头文件要加引号   .h头文件中写过函数的基本框架后在cpp文件中就不用写了
void Student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout <<"name:" << name << endl;
    cout << "sex:" << sex << endl;
}