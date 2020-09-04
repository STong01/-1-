#include <iostream>
using namespace std;

void printNum(float num)
{
	if (num > 0 && num <= 9)
	{
		cout << num << " ";
		return;
	}

	float Y1 = num / 2;
	while (Y1 - (int)Y1 == 0)
	{
		Y1 = Y1 / 2;
	}
	Y1 = Y1 * 2;

	while (Y1 - (int)Y1 == 0)
	{
		Y1 = Y1 / 3;
	}
	Y1 = Y1 * 3;

	while (Y1 - (int)Y1 == 0)
	{
		Y1 = Y1 / 7;
	}
	Y1 = Y1 * 7;

	if (Y1 == 1)
	{
		cout << num << " ";
		return;
	}
	else
	{
		return;
	}
}

int main()
{
	for (float i = 1; i < 100; i++)
	{
		printNum(i);
	}
	cout << endl;

	system("pause");
	return 0;
}