#include<iostream>
using namespace std;
int main()   //C语言程序，要了解
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;    //将数组a首地址送给p
    for (i = 0; i < 3; i++)
        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));  //与cout功能差不多
}//当一个指针指向了一个数组的首地址时，用指针名和用数组名可以达到相同的效果a[i],p[i]都指的是数组中的元素
//*（p+i）*(a+i)指的是解引用后的数