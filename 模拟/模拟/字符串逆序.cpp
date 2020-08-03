#include <iostream>
#include <string>
using namespace std;

string test(string str)
{
	int n = str.length();
	char temp = str[0];
	for (int i = 0; i <= n / 2; i++)
	{
		temp = str[n - 1 - i];
		str[n - 1 - i] = str[i];
		str[i] = temp;
	}
	return str;
}

int main()
{
	string str;
	while (cin >> str)
	{
		cout << test(str) << endl;
	}

	system("pause");
	return 0;
}