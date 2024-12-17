#include <iostream>
using namespace std;
class Long
{
private:
	int length, width, height;
public:
	void set()
	{
		int l, w, h;
		cin >> l >> w >> h;
		length = l; width = w; height = h;
	}
	int cal()
	{
		return length * width * height;
	}
};
int main()
{
	Long a, b, c;
	a.set();
	b.set();
	c.set();
	cout << a.cal() << " " << b.cal() << " " << c.cal() << endl;
}
