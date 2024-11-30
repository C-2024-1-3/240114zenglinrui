#include<iostream>
#include<string.h>
using namespace std;
char a[1000];
int parseHex(const char *const hexString)
{
	int l=strlen(hexString),sum=0;
	for(int i=l-1;i>=0;--i)
	{
		int t=1;
		for(int j=1;j<=l-i-1;++j)
			t*=16;
		if(hexString[i]>='0'&&hexString[i]<='9')
		  sum+=(hexString[i] - '0')*t;
		if(hexString[i]>='a'&&hexString[i]<='f')
		  sum+=(hexString[i] - 87)*t;
		if(hexString[i]>='A'&&hexString[i]<='F')
		  sum+=(hexString[i] - 55)*t;  
	}
	return sum;
}
int main()
{
	cin.getline(a,1000);
	cout<<parseHex(a);
}
