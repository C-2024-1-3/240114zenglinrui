#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x, y;
	while (cin >> x)
	{
		if (0 < x && x < 1)
			y = 3 - 2 * x;
		if (x >= 1 && x < 5)
			y = 1 / (2 * x) + 1;
		if (x >= 5 && x < 10)
			y = x * x;
		cout << y << endl;
	}
}
