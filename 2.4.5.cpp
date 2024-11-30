#include<iostream>
#include<string.h>
using namespace std;
char a[1001], b[1001];
int indexOf(const char s1[], const char s2[])
{
	int l1 = strlen(s1),l2=strlen(s2);
	if (l1 > l2) return -1;
	for (int i = 0; i < l2; ++i) {
		bool p = 1;
		if (s2[i] == s1[0]) {
			for (int j = 1; j < l1; ++j)
				if (s2[i + j] != s1[j])
				{
					p = 0;
					break;
				}
		}
		else p = 0;
		if (p) return i;
	}
	return -1;
}
int main()
{
	cin.getline(a,1001);
	cin.getline(b,1001);
	cout << indexOf(a, b);
}
