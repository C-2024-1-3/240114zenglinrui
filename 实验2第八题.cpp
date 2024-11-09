#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a;
	cin>>a;
	double x,y;
	if(a<0) a=abs(a);
	x=a;
	y=(x+a/x)/2;
	while(abs(x-y)>=1e-5)
	{
		x=y;
		y=(x+a/x)/2;
	}
	cout<<y;    			          
}

