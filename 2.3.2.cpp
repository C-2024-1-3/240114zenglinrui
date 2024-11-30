#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if(num==1) return false;
	if(num==2) return true;
	for(int i=2;i<=num/2;++i)
	  if(num%i==0)
	    return false;
	return true;    
}
int main()
{
	int t=0;
	for(int i=1;i<=200;++i)
	{
		if(is_prime(i))
		{
			t++;cout<<i<<" ";
		  }
		if(t==10)
		{
			t=0;cout<<endl;	
			 }     
	}
}
