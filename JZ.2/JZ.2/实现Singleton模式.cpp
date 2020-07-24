#include <iostream>
using namespace std;

/*
//单线程环境
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
//多线程环境
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
//加同步锁前后两次判断实例是否已存在
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