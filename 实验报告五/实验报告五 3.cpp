#include<iostream>
using namespace std;
class cuboid//��������
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
	cuboid cuboid1;//�����������������  �������������
	cin >> cuboid1.length >> cuboid1.width >> cuboid1.height;
	int sum1 = cuboid1.volume();
	cuboid cuboid2;
	cin >> cuboid2.length >> cuboid2.width >> cuboid2.height;
	int sum2 = cuboid2.volume();
	cuboid cuboid3;
	cin >> cuboid3.length >> cuboid3.width >> cuboid3.height;
	int sum3 = cuboid3.volume();
	cout << "��һ������������Ϊ" << sum1 << endl;
	cout << "�ڶ�������������Ϊ" << sum2 << endl;
	cout << "����������������Ϊ" << sum3 << endl;
}