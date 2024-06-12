#include <iostream>
#include <cmath>

class Vector
{
private:
	double x = 0;
	double y = 0;
	double z = 0;
public:
	Vector()
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	Vector(double x1, double y1, double z1, double x2, double y2, double z2)
	{
		double l = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
		Show(l);
	}
	void Show()
	{
		std::cout << '\n' << x << ' ' << y << ' ' << z;
	}
	void Show(double l)
	{
		std::cout << '\n' << "vector length = " << l ;
	}
};

int main()
{
	Vector v1(10,10,10);
	v1.Show();
	Vector v2(15, 15, 15);
	v2.Show();
	Vector v3(10, 10, 10, 15, 15, 15);
}
