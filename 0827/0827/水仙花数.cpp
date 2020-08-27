#include <iostream>
using namespace std;

int main()
{
	int tmp[10] = { 0 };
	int sum = 0;
	int count = 0;

	for (int i = 0; i < 1000; i++)
	{
		for (int j = i; j; j /= 10)
		{
			tmp[count] = j % 10;
			count++;
		}

		for (int j = 0; j < count; j++)
		{
			sum += pow(tmp[j], count);
		}

		if (sum == i)
		{
			cout << i << endl;
		}
		count = sum = 0;
	}

	system("pause");
	return 0;
}
