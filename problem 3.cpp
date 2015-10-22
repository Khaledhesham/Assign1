#include <iostream>
#include <string>

using namespace std;

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0)
	{
		x = a;
		y = b;
	}
	void showmove() const
	{
		cout << "x = " << x << "and y = " << y<<endl;
	}
	Move add(const Move & m) const
	{
		double a, b;
		a = x + m.x;
		b = y + m.y;
		Move o(a, b);
		return o;
	}

	void reset(double a = 0, double b = 0)
	{
		x = a;
		y = b;
	}
};

void main()
{
	Move x(1,2);
	x.showmove();
	Move m;
	m = m.add(x);
	m.showmove();
	m.reset(2, 2);
	m.showmove();
	m.reset();
	m.showmove();
}