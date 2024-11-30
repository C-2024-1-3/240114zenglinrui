#include<iostream>
using namespace std;
int a[101];
int main()
{
	for(int i=1;i<=100;++i)
	  for(int j=i;j<=100;j+=i)
		  a[j]++;
	for(int i=1;i<=100;++i)
	  if(a[i]%2) cout<<i<<" ";	  
}
