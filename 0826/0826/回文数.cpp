#include <iostream>
using namespace std;

int main()
{
	int n;
	int sn;
	int tmp;
	int sum = 0;

	cin >> n >> sn;

	for (int i = n; i; i /= sn)
	{
		tmp = i % sn;
		sum = sum * sn + tmp;
	}

	if (n == sum)
	{
		cout << n << "在" << sn << "进制下是回文数" << endl;
	}
	else
	{
		cout << n << "在" << sn << "进制下不是回文数" << endl;
	}

	system("pause");
	return 0;
}