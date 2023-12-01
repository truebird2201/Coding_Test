#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

public:
	Point(int _x, int _y) : x(_x),y(_y) {}
	~Point(){}
	const Point operator+ (const Point& _p1)
	{
		return Point(_p1.x + x, _p1.y + y);
	}
	void Print() const
	{
		cout << x << " , " << y << endl;
	}
	int GetX() const
	{
		return x;
	}
	int GetY() const
	{
		return y;
	}
	void SetXY(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
	const Point& operator++()
	{
		x++;
		y++;
		return *this;
	}
	const Point operator++(int)
	{
		Point pt(x, y);
		x++;
		y++;
		return pt;
	}
	bool operator==(const Point pt)
	{
		return x == pt.x && y == pt.y;
	}
	bool operator!=(const Point pt)
	{
		return !(*this==pt);
	}
};

void Print1(int n)
{
	cout << n << endl;
}

int main()
{
	void (*Print2)(int) = Print1;
	Print1(1);
	Print2(2);
}