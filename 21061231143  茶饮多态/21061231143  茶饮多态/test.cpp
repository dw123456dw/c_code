#include <iostream>
using namespace std;

                          //���ܶ�̬�ı���



class DoDrink
{
public:
	virtual void BoilWater() = 0;


	virtual void PutSomething() = 0;


	virtual void Over() = 0;

	virtual void MakeDrink() = 0;
};


class Tea :public DoDrink
{
public:
	virtual void BoilWater()
	{
		cout << "�տ�Ȫˮ" << endl;
	}

	virtual void PutSomething()
	{
		cout << "�����Ҷ" << endl;
	}

	virtual void Over()
	{
		cout << "���������" << endl;
	}

	virtual void MakeDrink()
	{
		BoilWater();
		PutSomething();
		Over();
	}
};



class Coffee :public DoDrink
{
public:
	virtual void BoilWater()
	{
		cout << "�տ�������ˮ" << endl;
	}

	virtual void PutSomething()
	{
		cout << "����ڿ���" << endl;
	}

	virtual void Over()
	{
		cout << "�����������" << endl;
	}

	virtual void MakeDrink()
	{
		BoilWater();
		PutSomething();
		Over();
	}
};



void test(DoDrink* abs)
{
	abs->MakeDrink();

	delete abs;

}



int main()
{
	test(new Coffee);
	
	cout << "------------------------" << endl;

	test(new Tea);


	return 0;
}