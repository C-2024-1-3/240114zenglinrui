#include<iostream>
#include<string.h>
using namespace std;
int* f()
{
	int* t;
	t = new int[4];
	int list[] = { 1,2,3,4 };
	for (int i = 0; i < 4; ++i)
	  t[i] = list[i];
	return t;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete [] p;
}
