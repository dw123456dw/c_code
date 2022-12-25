//#include <iostream>
//using namespace std;
//#include <vector>
//int main()
//{
//	int n;
//	cin >> n;
//	vector<long long> ret(1000000);
//
//	ret[0] = 1;
//	ret[1] = 1;
//
//	for (int i=2;i<n;i++)
//	{
//		ret[i] = (ret[i - 1]  + ret[i - 2])%10007 ;
//	}
//
//	cout << ret[n-1] << endl;
//	return 0;
//}
//#define M(a,b,c) a-b*c
//int t()
//{
//	static int i;
//	i += 1;
//	return i;
//}
//
//int f(int Int)
//{
//	if (Int==0)
//	{
//		return 1;
//	}
//	return (Int + f(Int - 1));
//}
//class A
//{
//public:
//	int m1 = 10;
//};
//class B :public A
//{
//public:
//	int m1 = 20;
//};
//
//class Father 
//{
//public:
//	int a;
//	Father(int a = 0) :Register(a) {};
//	void setRegister(int a) { Register = a; };
//	int Register;
//};
//class Son :public Father
//{
//public:
//	void isRegister()
//	{
//		cout << Register << endl;
//	}
//};

//int main()
//{
//	Son son;
//	cout << son.Register;
//	son.setRegister(1);
//	son.isRegister();
//	return 0;
//}

#include <iostream>
using namespace std;
#include <vector>
template <typename T>
T searchmax(vector<T>& arr,int n)
{
	T max = arr[0];
	​for(int i = 0; i < n;i++)
    {
       ​ if (arr[i] > max)
        ​{
            ​max = arr[i];
        }    ​    ​       ​
    }
	​return max;
}
int main()
{
	double d;
	vector<double> ret;

	for (int i=0;i<5;i++)
	{
		cin >> d;
		ret.push_back(d);
	}
	d = searchmax(ret,5);
	cout << d;
	return 0;
}