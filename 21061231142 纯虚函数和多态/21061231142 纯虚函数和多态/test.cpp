#include <iostream>

using namespace std;


class Base
{
public:
	virtual void func() = 0;    //���麯�����޷�ʵ��������
};


class Son :public Base
{
public:
	virtual void func()
	{
		cout << "son func" << endl;
	}
};



int main()
{

	//Base b;    �޷�ʵ������������಻��д�麯��������Ҳ�޷�ʵ����

	Base* B = new Son;   //����һ������ָ���������

	B->func();


	return 0;
}