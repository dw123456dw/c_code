#include <iostream>
using namespace std;


class Base
{
public:
	virtual void f(float x)
	{
		cout << "Base  f" << endl;
	}
	void g(float x)
	{
		cout << "Base  g" << endl;
	}
	void h(float x)
	{
		cout << "Base  h" << endl;
	}
};


class Son :public Base
{
public:
	virtual void f(float x)
	{
		cout << "Son  f" << endl;
	}
	void g(int x)
	{
		cout << "Son  g" << endl;
	}
	void h(float x)
	{
		cout << "Son  h" << endl;
	}
};




int main()
{
	Son S;
	Base* B1 = &S;   //�������ֱ��ø���ָ�������ָ�����
	Son* S2 = &S;

	B1->f(3.14f);  //�麯����д��������
	S2->f(3.14f);

	B1->g(3.14f);  //�������������Ḳ�Ǹ���
	S2->g(3.14f);


	B1->h(3.14f);  //������
	S2->h(3.14f);

	return 0;
}