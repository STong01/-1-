#include <iostream>
using namespace std;

long long Fibonacci1(unsigned int n)
{
	if (n <= 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}

	return Fibonacci1(n - 1) + Fibonacci1(n - 2);
}

long long Fibonacci2(unsigned n)
{
	int result[2] = { 0, 1 };
	if (n < 2)
	{
		return result[n];
	}

	long long fibNMinusOne = 1;
	long long fibNMinusTwo = 0;
	long long fibN = 0;

	for (unsigned int i = 2; i <= n; i++)
	{
		fibN = fibNMinusOne + fibNMinusTwo;

		fibNMinusTwo = fibNMinusOne;
		fibNMinusOne = fibN;
	}

	return fibN;
}

int main()
{
	int n;
	while (cin >> n)
	{
		//cout << Fibonacci1(n) << endl;
		cout << Fibonacci2(n) << endl;
	}
	system("pause");
	return 0;
}