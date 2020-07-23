#include <iostream>
using namespace std;

class CMyString
{
public:
	CMyString(char* pData = nullptr);
	CMyString(const CMyString& str);
	~CMyString(void);

private:
	char* m_pData;
};

/*
CMyString& CMyString::operator =(const CMyString& str)
{
	if (this == &str)
	{
		return *this;
	}

	delete[]m_pData;
	m_pData = nullptr;

	m_pData = new char[strlen(str.m_pData) + 1];
	strcpy(m_pData, str.m_pData);

	return *this;
}
*/
int main()
{

	system("pause");
	return 0;
}