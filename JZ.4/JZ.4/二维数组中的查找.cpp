#include <iostream>
using namespace std;

bool Find(int* matrix, int rows, int columns, int number)
{
	bool found = false;

	if (matrix != nullptr && rows > 0 && columns > 0)
	{
		int row = 0;
		int column = columns - 1;
		while (row < rows && column >= 0)
		{
			if (matrix[row * columns + column] == number)
			{
				found = true;
				break;
			}
			else if (matrix[row * columns + column]>number)
			{
				--column;
			}
			else
			{
				++row;
			}
		}
	}
	return found;
}

int main()
{
	int matrix[] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
	int temp = Find(matrix, 4, 4, 16);
	if (temp)
	{
		cout << "存在所查数据" << endl;
	}
	else
	{
		cout << "不存在所查数据" << endl;
	}

	system("pause");
	return 0;
}