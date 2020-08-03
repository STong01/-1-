#include <iostream>
#include <string>
using namespace std;

int test(string str1, string str2)
{
	int n1 = str1.length();
	int n2 = str2.length();

	int sum = 0;

	for (int i = 0; i <= n1 - n2; i++)
	{
		int p = i;
		for (int j = 0; j < n2; j++)
		{
			if (str1[p] == str2[j])
			{
				p++;
			}
			else
			{
				break;
			}

			if (j == n2 - 1)
			{
				sum++;
			}
		}
	}
	return sum;
}

int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);

	cout << test(str1, str2) << endl;

	system("pause");
	return 0;
}