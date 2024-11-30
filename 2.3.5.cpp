#include<iostream>
using namespace std;
int peach(int t,int sum)
{
	if(t==1) return sum;
	else
	  return peach(t-1,(sum+1)*2);
}
int main()
{
	cout<<peach(10,1);
}
