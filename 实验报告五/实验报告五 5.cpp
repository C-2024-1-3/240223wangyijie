#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point()//Ĭ�Ϲ��캯������ֵ
	{
		x = 60;
		y = 80;
	}
	void setpoint(int i, int j)//��Ա����Ϊ˽�еĲ��ܵ��ã����������Ϊ�����ķ���ֵ���ں�����ֱ��cout��ô���Ե��ã�����ǳ�Ա����˽�е�����
		//��Ȼ����Ϊ˽���ֲ��ܷ��ʣ�û��һ�����ã�ֻ��ͨ��������������и�ֵ
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point p;
	int i;
	int j;
	cin >> i >> j;
	p.setpoint(i, j);//Ĭ�Ϲ��캯�����Զ����ã�������ù�����Ա����
	p.display();
}