#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,gcd,min;
	cin>>a>>b;
	c=a;d=b;
	while(1)
	{
		if(a<b)
		  swap(a,b);
		if(a%b==0)
		{
			gcd=b;
			break;
		}
		else
		{
			a%=b;
		}   
	}
	if(gcd==1) 
	  min=c*d;
	else
	  min=c*d/gcd;
	cout<<gcd<<" "<<min<<endl;    			          
}

