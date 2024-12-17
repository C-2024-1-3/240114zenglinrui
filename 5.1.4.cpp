#include <iostream>
using namespace std;
class Student
{
private:
	const char* num;
	int score;
public:
	Student(const char* p=NULL, int n=0)
	{
		num = p;
		score = n;
	}
	void num1()
	{
		cout << num;
	}
	int grade()
	{
		return score;
	}
};
void max(Student* s)
{
	Student a;
	a = s[0];
	for (int i = 1; i < 5; ++i)
	{
		if (a.grade() < s[i].grade()) a = s[i];
	}
	a.num1();
}
int main()
{
	Student s[5] = {
		Student("001",50),Student("002",60),Student("003",100),Student("004",20),Student("005",60)
	};
	max(s);
}
