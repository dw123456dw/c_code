#pragma once
#include <iostream>
using namespace std;

class Cude//创建一个立方体类
{
public:
	//获取长宽高
	void setL(int n)
	{
		C_L = n;
	}
	void setW(int n)
	{
		C_W = n;
	}
	void setH(int n)
	{
		C_H = n;
	}

	//返回长宽高
	int GetL()
	{
		return C_L;
	}

	int GetH()
	{
		return C_H;
	}
	int GetW()
	{
		return C_W;
	}

	int CalcuS()
	{
		return 2 * C_H * C_L + 2 * C_L * C_W + 2 * C_W * C_H;
	}

	int CalcuV()
	{
		return C_H * C_L * C_W;
	}

	//因为此函数是在类内所以只需要传入另一个立方体就可以比较
	bool issameclass(Cude c)
	{
		if (C_H == c.GetH() && C_L == c.GetL() && C_W == c.GetW())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
private:

	int C_L;
	int C_W;
	int C_H;

};

bool issame(Cude &c1,Cude &c2)
{
	if (c1.GetH()==c2.GetH() && c1.GetL()==c2.GetL() && c1.GetW()==c2.GetW())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	Cude c1;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);


	Cude c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(20);

	int ret = issame(c1,c2);
	if (ret)
	{
		cout << "一样" << endl;
	}
	else
	{
		cout << "不一样" << endl;

	}

	int ret1 = c1.issameclass(c2);

	if (ret1)
	{
		cout << "一样" << endl;
	}
	else
	{
		cout << "不一样" << endl;

	}


	return 0;
}


