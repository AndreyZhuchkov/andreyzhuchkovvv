#include <iostream>
#include "math.h"
int main() {
	using namespace std;
	double a, x, y, t;
	cin >> a >> x;
	if (a > x)
		y = sqrt(abs(sin(a*x)));
	else
		y = a + log(x + a);
	if (a > y)
	{
		t = y / (a - x);
	}
	if (a == y)
	{
		t = y / (a - x) + (a + x) / (y*y);
	}
	if (a < y)
	{
		t = tan(a*x) + cos(2 * a*y);
	}
	cout << "a= " << a << "\n" << "x= " << x << "\n" << "y= " << y << "\n" << "t= " << t << endl;
	return 0;
}