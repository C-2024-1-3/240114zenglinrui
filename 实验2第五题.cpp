#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c[1000];
	cin.getline(c,1000);
	int en=0,num=0,sp=0,other=0;
	for(int i=0;c[i]!='\0';++i) {
		if(('a'<=c[i]&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z')) {
			++en;
		}
		  
	    else if('0'<=c[i]&&c[i]<='9')	{
	  	    ++num;
	    }
	  	else if(c[i]==' '){
	  		++sp; 
		  }
		else {
			++other;
		}       
	  }  	
	cout<<en<<" "<<num<<" "<<sp<<" "<<other<<endl;			          
}

