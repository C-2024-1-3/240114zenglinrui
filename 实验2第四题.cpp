#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	char c;
  	cin>>a>>c>>b;
	if(c=='+')
	  cout<<a+b<<endl;
	else if(c=='-')
	  cout<<a-b<<endl;
	else if(c=='*')
	  cout<<a*b<<endl;
	else if(c=='/')
	{
		if(b==0)
		{
			cout<<"³ý²»¾¡"<<endl;
			return 0;
		}
		cout<<a/b<<endl;
	  }  
	else if(c=='%')
	  cout<<a%b<<endl;
	else
	  cout<<"wrong"<<endl;                      
}

