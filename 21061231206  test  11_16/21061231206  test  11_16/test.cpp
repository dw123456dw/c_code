#include <iostream>
using namespace std;

template<typename T>
struct Less
{
	bool operator()(const T &a,const T &b)
	{
		return a < b;
	}
};

template<typename T>
struct Greater
{
	bool operator()(const T& a, const T& b)
	{
		return a > b;
	}
};

template<typename T>
class Sample
{
public:
	T m_ele[10];
	void out()
	{
		for (int i=0;i<10;i++)
		{
			cout << m_ele[i] << " ";
		}
		cout << endl;
	}


	template<typename F = Less<T>>
	void sort()
	{
		cout << "ÇëÊäÈëÅÅÐò·½·¨ºÍÅÅÐòÀàÐÍ" << endl;
		cout << "1 Ñ¡ÔñÅÅÐò 2 ²åÈëÅÅÐò 3 Ã°ÅÝÅÅÐò" << endl;
		cout << "4 ÉýÐò     5 ½µÐò " << endl;
		int a, b;
		cin >> a >> b;
		switch(a)
		{
		case 1:
			this->selectionSort();
			break;
		case 2:
			this->insertSort();
			break;
		case 3:
			this->bubbleSort();
			break;
		default:
			break;
		}
	}

	template<typename F = Less<T>>
	void selectionSort(F f = F())
	{
		for (int i=0;i<9;i++)
		{
			int min = i;
			for (int j=i+1;j<10;j++)
			{
				if (f(m_ele[j],m_ele[i]))
				{
					min = j;
				}
			}
			swap(i,min);
		}
	}

	template<typename F = Less<T>>
	void insertSort(F f = F());

	template<typename F = Less<T>>
	void bubbleSort(F f = F());
private:

	void swap(int i,int j)
	{
		T t = m_ele[i];
		m_ele[i] = m_ele[j];
		m_ele[j] = t;
	}
};


void test1()
{
	Sample<int> a;
	//int arr[10] = {5,6,9,7,1,2,3,4,8,0};
	//for (int i=0;i<10;i++)
	//{
	//	a.m_ele[i] = arr[i];
	//}
	a.sort();
	a.out();


}



int main()
{
	test1();


	return 0;
}