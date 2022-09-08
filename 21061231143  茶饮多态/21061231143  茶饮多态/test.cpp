#include <iostream>
using namespace std;

                          //感受多态的便利



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
		cout << "烧矿泉水" << endl;
	}

	virtual void PutSomething()
	{
		cout << "加入茶叶" << endl;
	}

	virtual void Over()
	{
		cout << "茶制作完成" << endl;
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
		cout << "烧咖啡特制水" << endl;
	}

	virtual void PutSomething()
	{
		cout << "加入黑咖啡" << endl;
	}

	virtual void Over()
	{
		cout << "咖啡制作完成" << endl;
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