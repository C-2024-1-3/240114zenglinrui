#include<iostream>
using namespace std;
double a[10];
void rank1()
{
	for(int i=0;i<10;++i)
	{
		bool p=0;
		for(int j=0;j<10-1-i;++j)
		  if(a[j]>a[j+1])
		  {
		  	swap(a[j],a[j+1]);
		  	p=1;
			}
		if(!p) break;	  
	}
}
int main()
{
	for(int i=0;i<10;++i)
	  cin>>a[i];
	rank1();  
	for(int i=0;i<10;++i)
	  cout<<a[i]<<" ";  
}
