#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		cout << "Constructor by default" << endl;
		x = y = 0;
	}
	Point(int a, int b)
	{
		cout << "Constructor with 2 params" << endl;
		x = a;
		y = b;
	}
	Point(int a)
	{
		cout << "Constructor with 1 param" << endl;
		x = y = a;
	}
	~Point()
	{
		cout << "Destructor\n";
	}
	void Init(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print() {
		cout << "X: " << x << " Y: " << y << endl;
	}

};
int main()
{
	Point obj1;
	obj1.Init(10, 20);
	obj1.Print();

	Point obj2;
	obj2.Init(5, 9);
	obj2.Print();
	Point obj3(100, 200);
	Point obj4(300);
}