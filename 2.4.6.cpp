#include<iostream>
#include<string.h>
using namespace std;
char a[1000],b[26];
int sum[26];
void count(const char s[], int counts[])
{
	int l=strlen(s);
	int p=0;
	for(int i=0;i<l;++i) {
		bool m=1;
		for(int j=0;j<=p;++j)
		  if(tolower(s[i])==b[j])
		  {
		  	m=0;counts[j]++;break; 
		  }
		if(m) {
			b[p]=s[i];counts[p]++;p++;
		}	    
	}
	for(int i=0;i<p;++i)
	  cout<<b[i]<<": "<<counts[i]<<" times"<<endl;
}
int main()
{
	cin.getline(a,1000);
	count(a,sum);
}
