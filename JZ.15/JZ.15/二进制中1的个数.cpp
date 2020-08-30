#include <iostream>
using namespace std;

//死循环解法
//当n为负数的时候，运行时会陷入死循环
int NumberOf1_1(int n)
{
	int count = 0;
	while (n)
	{
		if (n & 1)
		{
			count++;
		}

		n = n >> 1;
	}
	return count;
}

//常规解法
int NumberOf1_2(int n)
{
	int count = 0;
	unsigned int flag = 1;
	while (flag)
	{
		if (n & flag)
		{
			count++;
		}
		flag = flag << 1;
	}
	return count;
}

int NumberOf1_3(int n)
{
	int count = 0;
	while (n)
	{
		++count;
		n = (n - 1) & n;
	}
	return count;
}

int main()
{
	int n;
	while (cin >> n)
	{
		cout << NumberOf1_3(n) << endl;
	}

	system("pause");
	return 0;
}