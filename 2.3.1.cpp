#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a<b) swap(a,b);
	while(1)
	{
		if(a%b==0) return b;
		a%=b;
		swap(a,b);
	}
}
int min(int a,int b)
{
	return a*b/gcd(a,b);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<" "<<min(a,b);
}
