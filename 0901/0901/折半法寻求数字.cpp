#include <iostream>
#include <vector>
using namespace std;

int findArgs(vector<int>a, int n, int f)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == f)
		{
			return i;
		}
	}
	return -1;
}

int halfFindArgs(vector<int>a, int n, int f)
{
	int left = 0;
	int right = n - 1;

	int mid;

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] < f)
		{
			left = mid + 1;
		}
		else if (a[mid] > f)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	vector<int>a = { 1, 3, 5, 6, 8, 10, 11, 14, 17, 20 };
	cout << findArgs(a, 10, 12) << endl;
	cout << halfFindArgs(a, 10, 11) << endl;

	system("pause");
	return 0;
}