#include <iostream>
using namespace std;
#include <vector>


//bool is_palindrome(int x);
//
//void test()
//{
//	for (int i=10;i<=1000;i++)
//	{
//		if (is_palindrome(i))
//		{
//			cout << i << endl;
//		}
//	}
//}
//
//bool is_palindrome(int x)
//{
//	vector<int> digit;
//	while (x!=0)
//	{
//		digit.push_back(x%10);
//		x /= 10;
//	}
//
//	for (int i=0,j=digit.size()-1;i<j;i++,j--)
//	{
//		if (digit[i]!=digit[j])
//		{
//			return false;
//		}
//	}
//	return true;
//}

//void fun(float x)
//{
//	int t = x + 5;
//	cout << "t=" << t << endl;
//}
//
//
//void test2()
//{
//	float t = 3.5;
//	cout << "t=" << t << endl;
//	fun(t);
//
//	for (int i=0;i<10;i++)
//	{
//		float t = i, x = t + i;
//		cout << x << endl;
//	}
//	//cout << x << endl;    在此不可见
//}
//inline void Swap(int &x,int &y)
//{
//	int z(x);
//	x = y;
//	y = z;
//}
//void test3()
//{
//	srand(0);
//	vector<int> score(10);
//	for (auto &i:score)
//	{
//		i = rand() % 100;
//	}
//	for (int i=score.size()-1;i>=0;--i)
//	{
//		for (int j=0;j<i;j++)
//		{
//			if (score[j + 1] < score[j])
//			{
//				Swap(score[j+1],score[j]);
//			}
//		}
//	}
//
//	for (auto &i:score)
//	{
//		cout << i << endl;
//	}
//}

//using pFun = double(*)(double);
//double f_shphere(double x)
//{
//	return x * x;
//}
//double f_default(double x)
//{
//	return 0;
//}
//double f_sin(double x)
//{
//	return sin(x);
//}
//double integrate(double l,double u,pFun pf=f_default,int n=1000)
//{
//	double sum = 0.0;
//	double gap = (u - 1) / n;
//	for (int i=0;i<n;i++)
//	{
//		sum += (gap / 2.0) * (pf(1 + i * gap) + pf(1 + (i + 1) * gap));
//	}
//	return sum;
//}
//void test4()
//{
//	cout << "默认函数在区间[0:1]上的积分为" << integrate(0, 1) << endl;
//	cout << "sphere函数在区间[0:1]上的积分为" << integrate(0, 1, f_shphere) << endl;
//	cout << "sin函数在区间[0:1]上的积分为" << integrate(0, 1, f_sin) << endl;
//}




int main()
{
	//test1();
	//test2();
	//test3();
	//test4();

	return 0;
}