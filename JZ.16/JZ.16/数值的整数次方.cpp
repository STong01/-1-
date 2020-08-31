#include <iostream>
using namespace std;

double Power1(double base, int exponent)
{
	double result = 1.0;
	for (int i = 1; i <= exponent; i++)
	{
		result *= base;
	}
	return result;
}

bool g_InvalidInput = false;

double PowerWithUnsignedExponent(double base, unsigned int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}
	if (exponent == 1)
	{
		return base;
	}

	double result = PowerWithUnsignedExponent(base, exponent >> 1);
	result *= result;

	if (exponent & 0x1 == 1)
	{
		result *= base;
	}

	return result;

}

double Power2(double base, int exponent)
{
	g_InvalidInput = false;

	if (exponent < 0)
	{
		g_InvalidInput = true;
		return 0.0;
	}

	unsigned int absExponent = (unsigned int)(exponent);

	if (exponent < 0)
	{
		absExponent = (unsigned int)(-exponent);
	}

	double result = PowerWithUnsignedExponent(base, absExponent);
	if (exponent < 0)
	{
		result = 1.0 / result;
	}
	return result;
}

int main()
{
	double base;
	int exponent;
	while (cin >> base >> exponent)
	{
		cout << Power2(base, exponent) << endl;
	}

	system("pause");
	return 0;
}