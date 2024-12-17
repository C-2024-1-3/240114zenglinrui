#include<iostream>
using namespace std;
class Student              //类声明
{
private:
	int num;
	const char *name;
	char sex;
public:                   //公用成员函数原型声明
	Student(int n=0, const char *p=NULL, char s = '/0')
	{
		num = n;
		name = p;
		sex = s;
	}
	void display()
	{
		cout << "num：" << num << endl;
		cout << "name：" << name << endl;
		cout << "sex：" << sex << endl;
	}
	void set_value(int n,const char *p, const char s)
	{
		num = n;
		name = p;
		sex = s;
	}
};

