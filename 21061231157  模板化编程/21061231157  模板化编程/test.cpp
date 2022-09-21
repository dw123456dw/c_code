#include <iostream>
using namespace std;
template<typename T>
void Swap(T& a,T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void mysort(T arr[],int len)
{
	for (int i=0;i<len;i++)
	{
		int max = i;
		for (int j=i+1;j<len;j++)
		{
			if (arr[max]<arr[j])
			{
				max = j;
			}
		}
		if (max!=i)
		{
			Swap(arr[max],arr[i]);
		}
	}
}
template<typename T>
void print(T arr[],int len)
{
	for (int i=0;i<len;i++)
	{
		cout << arr[i] << " ";
	}
}

void test1()
{
	char chararr[] = "abcdefg";
	int sz = sizeof(chararr) / sizeof(char);
	mysort(chararr,sz);
	print(chararr,sz);
}
void test2()
{
	int arr[] = {5,9,7,1,3,6,4,8,1,0};
	int sz = sizeof(arr) / sizeof(int);
	mysort(arr,sz);
	print(arr,sz);
}

int main()
{
	//test1();
	test2();
	return 0;
}