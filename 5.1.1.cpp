#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
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
		cout << hour << "��" << minute << "��" << sec << endl;
	}
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.set();
	t1.print();
	return 0;
}
