#include <iostream>
using namespace std;
class Point
{
private:
	int X, Y;
public:
	Point(int x=0,int y=0)
	{
		X = x; Y = y;
	}
	void setpoint(int i, int j)
	{
		X += i; Y += j;
	}
	void display()
	{
		cout << X << " " << Y << endl;
	}
};
int main()
{
	Point a(60, 80);
	a.display();
	a.setpoint(20, 80);
	a.display();
}
