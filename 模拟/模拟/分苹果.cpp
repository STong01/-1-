#include <iostream>
#include <vector>
using namespace std;

int test(vector<int> Pg, int n, int mp)
{
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		if ((Pg[i] - mp) % 2 != 0)
		{
			return -1;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (Pg[i] > mp)
		{
			num += (Pg[i] - mp) / 2;
		}
	}
	return num;
}

int main2()
{
	int n;
	while (cin >> n)
	{
		vector<int> Pg(n, 0);
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> Pg[i];
			sum += Pg[i];
		}

		if (sum % n == 0)
		{
			int mp = sum / n;
			cout << test(Pg, n, mp) << endl;
		}
		else
		{
			cout << "-1" << endl;
		}
	}

	system("pause");
	return 0;
}