#include <iostream>             //将类声明头文件包含进来
#include "student.h"
int main()
{
	Student stud;                //定义对象
	Student studl(007, "tcg", 'm');
	stud.set_value(8, "mkd", 'w');
	stud.display();     //执行stud对象的display函数
	return 0;
}
