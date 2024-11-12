#include <iostream>
using namespace std;
int main()
{
	double a = 0, xn = 0, xnp1 = 0;//定义所需的三个变量
	cout << "请输入一个您要对其开平方根的数" << endl;
	cin >> a;
	xn = a;//a作为初始值
	while (1)//设置为死循环
	{

		xnp1 = 0.5 * (xn + a / xn);//运用迭代公式

		if ((xnp1 - xn >= 0 && xnp1 - xn < 0.00001) || (xnp1 - xn && xn - xnp1 < 0.00001))//设置跳出循环的条件,注意这里是绝对值可以这样表示
		{
			cout << xnp1 << endl;//输出最终的开方值
			break;
		}
		else
		{
		}
		xn = xnp1;//如果比满足条件就把xnp1重新赋值给xn
	}
	system("pause");
	return 0;

}
