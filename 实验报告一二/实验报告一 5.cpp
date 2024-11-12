#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a = 0;
	cout << "请输入华氏温度" << endl;
	cin >> a;//输入这个华氏温度
	cout << "转化为摄氏温度后为" <<fixed <<setprecision(2) << 5 * (a - 32) / 9 << endl;//一定使用fixed进行保留两位小数 只用setprecision只能用科学计数法表示
	system("pause");
	return 0;


}

