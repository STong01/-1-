#include <iostream>
using namespace std;

//��̬�滮
int maxProductAfterCutting_solution1(int length)
{
	if (length < 2)
	{
		return 0;
	}
	if (length == 2)
	{
		return 1;
	}
	if (length == 3)
	{
		return 2;
	}

	int* products = new int[length + 1];
	products[0] = 0;
	products[1] = 1;
	products[2] = 2;
	products[3] = 3;

	int max = 0;
	for (int i = 4; i <= length; i++)
	{
		max = 0;
		for (int j = 1; j <= i / 2; j++)
		{
			int product = products[j] * products[i - j];
			if (max < product)
			{
				max = product;
			}

			products[i] = max;
		}
	}

	max = products[length];
	delete[] products;

	return max;
}

//̰���㷨
int maxProductAfterCutting_solution2(int length)
{
	if (length < 2)
	{
		return 0;
	}
	if (length == 2)
	{
		return 1;
	}
	if (length == 3)
	{
		return 2;
	}

	//�����ܶ�ļ�ȥ����Ϊ3�����Ӷ�
	int timesOf3 = length / 3;

	//���������ʣ�µĳ���Ϊ4��ʱ�򣬲����ټ�ȥ�̶�Ϊ3�����Ӷ�
	//��ʱ���õİ취�ǰ����Ӽ��ɳ���Ϊ2������
	if (length - timesOf3 * 3 == 1)
	{
		timesOf3 -= 1;
	}

	int timesOf2 = (length - timesOf3 * 3) / 2;

	return (int)(pow(3, timesOf3)*pow(2, timesOf2));
}


int main()
{
	int length;
	while (cin >> length)
	{
		cout << maxProductAfterCutting_solution2(length) << endl;
	}
	system("pause");
	return 0;
}