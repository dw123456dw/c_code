#include <iostream>
using namespace std;

    
template<typename T>
T max(T* arr,int n)
{
	T temp = arr[0];
	for (int i=0;i<n;i++)
	{
		if (arr[i]>=temp)
		{
			temp = arr[i];
		}
	}
	return temp;
}
void test1()
{
	int arr1[10] = {5,6,8,7,4,1,9,3,0,10};
	int ret = max<int>(arr1,10);
	cout << ret << endl;
}

template<typename T>
struct less
{
	bool operator()(const T& a, const T& b)
	{
		return a < b;
	}
};

template<typename T>
struct greater
{
	bool operator()(const T& a, const T& b)
	{
		return a > b;
	}
};



template<class T>
class Sample
{
public:
	void getarr()
	{
		for (int i=0;i<10;i++)
		{
			cin >> arr[i];
		}
	}

	void sort()
	{
		int a, b;
		cout << "请选择排序方法和排序类型: " << endl;
		cout << "1.选择排序  2.插入排序  3.冒泡排序" << endl;
		cin >> a;
		cout << "请选择排序方式: " << endl;
		cout << "4. 升序  5.降序 " << endl;
		cin >> b;
		switch (a)
		{
		case 1:
			//selectionsort();
			this->selectionsort();
			break;
		case 2:
			//insertionsort();
			break;
		case 3:
			//bubble_sort();
			break;
		default :
			break;
		}

	}

private:
	T arr[10];

	template<typename T>
	class less
	{
		bool operator()(const T& a, const T& b)
		{
			return a < b;
		}
	};

	template<typename T>
	struct greater
	{
		bool operator()(const T& a, const T& b)
		{
			return a > b;
		}
	};


	template<typename F=less<T>>
	void selectionsort(F f=F());

	template<typename F = less<T>>
	void insertionsort(F f = F());

	template<typename F = less<T>>
	void bubble_sort(F f = F());

	//template<typename F = greater<T>>
	//void selectionsort1(F f = F());

	//template<typename F = greater<T>>
	//void insertionsort1(F f = F());

	//template<typename F = greater<T>>
	//void bubble_sort1(F f = F());
};


void test2()
{
	Sample<int> s;
	s.getarr();
	s.sort();
}

int main()
{
	//test1();
	test2();
	return 0;
}