#include <iostream>
using namespace std;


//请找到一个大于 2022 的最小数，这个数转换成二进制之后，最低的 6 个二进制为全为 0 。
//bool six(int x)
//{
//	int count = 6;
//	int temp = 0;
//	while (x && count!=0)
//	{
//		temp = x & 1;
//		x /= 2;
//		if (temp!=0)
//		{
//			return false;
//		}
//		count--;
//	}
//	return true;
//}

//int main()
//{
//	int ans = 0;
//
//	for (int i=2023;i<4000;i++)
//	{
//		if (six(i))
//		{
//			ans = i;
//			break;
//		}
//	}
//	cout << ans;
//
//	return 0;
//}

//bool six(int x)
//{
//	int sum = 0;
//	int count = 0;
//	int a = x;
//	while (x)
//	{
//		int temp = x % 10;
//		sum = sum + (temp * pow(16,count));
//		x /= 10;
//		count++;
//	}
//	if ((sum%a)==0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//
//}
//int main()
//{
//	int ans = 0;
//
//	for (int i=10;i<10000;i++)
//	{
//		if (six(i))
//		{
//			ans = i;
//			break;
//		}
//	}
//	cout << ans;
//	return 0;
//}


//bool zhi(int x)
//{
//	for (int j=2;j<x;j++)
//	{
//		if (x%j==0)
//		{
//			return false;
//		}
//	}
//	return true;
//}


//int main()
//{
//
//	int sum = 0;
//	int count = 0;
//	for (int i=2;i<2022;i++)
//	{
//		if (zhi(i))
//		{
//			sum += i;
//			count++;
//			if (sum>2022)
//			{
//				break;
//			}
//		}
//	}
//	cout << count;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//
//
//int main()
//{
//    int t, c, s;
//
//    cin >> t >> c >> s;
//
//    double speed = 1.0 * c / t;
//    double sum = s - c * 1.0;
//    int ans = sum / speed;
//
//
//    cout << ans;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//#include <vector>
//#include <string>
//
//int main()
//{
//    int n;
//    cin >> n;
//    vector<string> ans(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> ans[i];
//    }
//
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i+1; j < n; j++)
//        {
//            if (ans[i] == ans[j])
//            {
//                ans[j] = "";
//            }
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        if (ans[i] != "")
//        {
//            cout << ans[i];
//        }
//    }
//
//    return 0;
//}



#include <iostream>
using namespace std;
#include <vector>

int bubblesort(vector<int>& ret, int n)
{
    int sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ret[j] > ret[j+1])
            {
                swap(ret[i], ret[j]);
                sum += max(ret[i], ret[j]);
            }
        }
    }
    return sum;
}

int main()
{

    int n;
    cin >> n;
    vector<int> ret(n);
    //for (int i = 0; i < n; i++)
    //{
    //    cin >> ret[i];
    //}
    ret[0] = 1;
    ret[1] = 5;
    ret[2] = 2;
    ret[3] = 1;

    

    int ans = bubblesort(ret, n);
    cout << ans;
    return 0;
}