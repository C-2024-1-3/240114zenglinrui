#include<iostream>
using namespace std;
int a[1000], b[1000], c[2000];
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1 + size2 ; ++i)
	{
		if (i < size1) list3[i] = list1[i];
		else list3[i] = list2[i - size1];
	}
	for (int i = 0; i < size1 + size2 ; ++i)
	{
		bool p = 0;
		for (int j = 0; j < size1 + size2 - 1 - i; ++j)
			if (list3[j] > list3[j + 1])
			{
				swap(list3[j], list3[j + 1]); p = 1;
			}
		if (!p) break;
	}
	for (int i = 0; i < size1 + size2 ; ++i)
		cout << list3[i] << " ";
}
int main()
{
	int l1, l2;
	cin >> l1;
	for (int i = 0; i < l1; ++i)
		cin >> a[i];
	cin >> l2;
	for (int i = 0; i < l2; ++i)
		cin >> b[i];
	merge(a, l1, b, l2, c);
}
