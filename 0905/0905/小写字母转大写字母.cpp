#include <iostream>
#define isBigLetter(ch) (ch <= 'Z' && ch >= 'A')
using namespace std;

int isSmallLetter(char ch)
{
	return ch <= 'z' && ch >= 'a';
}

int main()
{
	char ch;
	while (1)
	{
		ch = getchar();
		if (ch == '@')
		{
			break;
		}
		if (isSmallLetter(ch))
		{
			putchar(ch - 32);
		}
		else if (isBigLetter(ch))
		{
			putchar(ch + 32);
		}
		else if (isalnum(ch))
		{
			//do nothing;
		}
		else
		{
			putchar(ch);
		}
	}

	system("pause");
	return 0;
}