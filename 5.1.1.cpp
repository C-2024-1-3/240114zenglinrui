#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void set()
	{
		int h,m,s;
		cin>>h>>m>>s;
		hour=h;minute=m;sec=s;
	}
	void print()
	{
		cout << hour << "：" << minute << "：" << sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.set();
	t1.print();
	return 0;
}
