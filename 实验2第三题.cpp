#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	int sum; 
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a)
	{
		sum=a+b+c;
		cout<<sum<<endl;
		if(a==b||a==c||b==c)
		  cout<<"µÈÑüÈý½ÇÐÎ"; 
	}
}

