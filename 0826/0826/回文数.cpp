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
		cout << n << "��" << sn << "�������ǻ�����" << endl;
	}
	else
	{
		cout << n << "��" << sn << "�����²��ǻ�����" << endl;
	}

	system("pause");
	return 0;
}