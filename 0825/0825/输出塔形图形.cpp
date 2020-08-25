#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int i, j;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			putchar(' ');
		}

		for (j = 1; j <= 2 * i - 1; j++)
		{
			putchar('*');
		}
		cout << endl;
	}

	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)
		{
			putchar(' ');
		}

		for (j = 1; j <= 2 * i - 1; j++)
		{
			putchar('*');
		}
		cout << endl;
	}

	system("pause");
	return 0;
}