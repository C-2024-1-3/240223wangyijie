#include<iostream>
using namespace std;
class cuboid//长方体类
{
public:
	int length;
	int width;
	int height;
	int volume()
	{
		int sum = length * width * height;
		return sum;
	}
};
int main()
{
	cuboid cuboid1;//这三个逐个进行输入  并计算体积即可
	cin >> cuboid1.length >> cuboid1.width >> cuboid1.height;
	int sum1 = cuboid1.volume();
	cuboid cuboid2;
	cin >> cuboid2.length >> cuboid2.width >> cuboid2.height;
	int sum2 = cuboid2.volume();
	cuboid cuboid3;
	cin >> cuboid3.length >> cuboid3.width >> cuboid3.height;
	int sum3 = cuboid3.volume();
	cout << "第一个长方体的体积为" << sum1 << endl;
	cout << "第二个长方体的体积为" << sum2 << endl;
	cout << "第三个长方体的体积为" << sum3 << endl;
}