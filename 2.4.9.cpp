#include<iostream>
#include<string.h>
using namespace std;
void rank1(int a[],int n)
{
	for(int i=0;i<n;++i)
	{
		bool p=1;
		for(int j=0;j<n-1-i;++j)
		  if(a[j]>a[j+1]) {
		  	swap(a[j],a[j+1]);p=0;
		  }
		if(p) break;  
	}
}
int main()
{
	int *p,n;
	cin>>n;
	if((p=new int [n])==NULL)
	  exit(0);
	for(int i=0;i<n;++i)
	  cin>>p[i];  
	rank1(p,n);
	for(int i=0;i<n;++i)
	  cout<<p[i]<<" "; 
	delete []p;   
}
