#pragma once
#include <iostream>
using namespace std;

class Cude//����һ����������
{
public:
	//��ȡ�����
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

	//���س����
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

	//��Ϊ�˺���������������ֻ��Ҫ������һ��������Ϳ��ԱȽ�
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
		cout << "һ��" << endl;
	}
	else
	{
		cout << "��һ��" << endl;

	}

	int ret1 = c1.issameclass(c2);

	if (ret1)
	{
		cout << "һ��" << endl;
	}
	else
	{
		cout << "��һ��" << endl;

	}


	return 0;
}


