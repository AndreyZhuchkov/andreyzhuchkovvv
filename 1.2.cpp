#include <iostream>
#include "cstdio"
using namespace std;
int main()
{
	float a, b;
	char andr;
	cout << "�������� a � b \n ";
	cin >> a >> b;
	cout << "������� �������� \n";
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
