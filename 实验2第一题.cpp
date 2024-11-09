#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s;
	cin>>s;
	if('a'<=s&&s<='z')
	{
		s=s-'a'+'A';
		cout<<s<<endl;
	}
	else
	{
		s+=1;
		cout<<(int)s;
	  } 
}

