#include<iostream>
using namespace std;
int b[11];
int main()
{
	int a[11];
	for(int i=1;i<=10;++i)
	  cin>>a[i];
	int p=1;
	bool s=1;  
	for(int i=1;i<=10;++i)
	{
	  s=1;
	  for(int j=1;j<=p;++j)
	    if(a[i]==b[j])
	    {
	    	s=0;break;
		}
	  if(s)
	  {
	  	b[p]=a[i];++p;
		  }	
	}
	for(int i=1;i<=p-1;++i)
	  cout<<b[i]<<" ";    
}
