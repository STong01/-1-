#include <iostream>
using namespace std;

/*
//���̻߳���
public sealed class Singleton1
{
	private Singleton1()
	{
	}

	private static Singleton1 instance = null;
	public static Singleton1 Instance
	{
		get
		{
		if (instance == null)
		{
			instance = new Singleton1();
		}
		return instance;
		}
	}
};
*/

/*
//���̻߳���
public sealed class Singleton2
{
	private Singleton2()
	{
	}

	private static readonly object syncObj = new object();

	private static Singleton2 instance = null;
	public static Singleton2 Instance
	{
		get
		{
		lock(syncObj)
		{
			if (instance == null)
			{
				instance = new Singleton2();
			}
		}
		return instance;
		}
	}
};
*/

/*
//��ͬ����ǰ�������ж�ʵ���Ƿ��Ѵ���
public sealed class Singleton3
{
	private Singleton3()
	{
	}

	private static object syncObj = new object();

	private static Singleton3 instance = null;
	private static Singleton3 Instance
	{
		get
		{
		if (instance == null)
		{
			lock(syncObj)
			{
				if (instance == null)
				{
					instance = new Singleton3();
				}
			}
		}
		return instance;
		}
	}
};
*/

int main()
{

	system("pause");
	return 0;
}