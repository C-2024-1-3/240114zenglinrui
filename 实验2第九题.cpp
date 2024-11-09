#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s=2,day=0;
	double p=0.8,sump(0);
	for(int i=s;i<=100;i*=2)
	{
		day++;
		sump+=i*p;
	}
	cout<<sump/day;			          
}

