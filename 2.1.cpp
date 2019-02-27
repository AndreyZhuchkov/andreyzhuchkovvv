#include <iostream>
#include "cstdio"
using namespace std;
int main()
{
	float a, b;
	char andr;
	cout << "¬введите a и b \n ";
	cin >> a >> b;
	cout << "¬ведите действие \n";
	cin >> andr;
	switch (andr)
	{
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a / b;
		break;
	default:
		break;
	}
	return 0;
}
