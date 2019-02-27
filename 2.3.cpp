#include <iostream>
#include "math.h"
int main() {
	using namespace std;
	double a, b, z, t;
	cin >> a >> b;
	if (a >= b)
		z = 1 - 2 * cos(a)*sin(b);
	else
		z = sqrt(abs(a*a - b * b));
	if (z < b)
	{
		t = pow(z + a * a*b, 1.0 / 3.0);
	}
	if (z == b)
	{
		t = 1 - log10(z) + cos(a*a*b);
	}
	if (z > b)
	{
		t = 1 / (cos(z*a));
	}
	cout << "a= " << a << "\n" << "b= " << b << "\n" << "z= " << z << "\n" << "t= " << t << endl;
	return 0;
}

