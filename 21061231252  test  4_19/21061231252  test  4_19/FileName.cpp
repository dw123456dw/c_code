//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int balance = 0;
//    int mom = 0;
//
//    for (int i = 1;i <= 12;i++)
//    {
//        balance += 300;
//        int budget;
//        cin >> budget;           //预算
//
//        if (balance < budget)
//        {
//            cout << -i;
//            return 0;
//        }
//
//        if (balance - budget >= 100)   //存
//        {
//            int temp = (balance - budget) / 100;
//            mom += temp*100;
//            balance -= temp*100;
//            balance -= budget;
//        }
//        else                      //不存
//        {
//            balance -= budget;
//        }
//    }
//
//    cout << mom * 1.2+balance;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int arr[10];
//
//void swap(int* a, int* b)
//{
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0;i < n;i++)
//    {
//        cin >> arr[i];
//    }
//
//    int sum = 0;
//
//    for (int i = 0;i < n;i++)
//    {
//        for (int j = 0;j < n-1-i;j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                swap(&arr[j], &arr[j + 1]);
//                sum++;
//            }
//        }
//    }
//
//    cout << sum;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n, k;
//    cin >> n >> k;     //n根烟，k个烟头换1根烟
//    int ans = n;
//    int residue = n;    //头
//
//    while (residue >= k)
//    {
//        ans += residue / k;
//        residue = residue / k + residue % k;
//    }
//
//    cout << ans;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//#include <set>
//set<int> s;
//
//bool check(int i,int j,int k)
//{
//	while (i)
//	{
//		s.insert(i%10);
//		i /= 10;
//	}
//
//	while (j)
//	{
//		s.insert(j % 10);
//		j /= 10;
//	}
//
//	while (k)
//	{
//		s.insert(k % 10);
//		k /= 10;
//	}
//	if (s.find(0)!=s.end())
//	{
//		s.clear();
//		return false;
//	}
//
//
//	if (s.size()==9)
//	{
//		s.clear();
//		return true;
//	}
//	s.clear();
//	return false;
//}
//
//
//int main()
//{
//	for (int i=100;i<=999;i++)
//	{
//		for (int j=100;j<=999;j++)
//		{
//			for (int k=100;k<=999;k++)
//			{
//				if (i*2==j && i*3==k && check(i,j,k))
//				{
//					cout << i << " " << j << " " << k << endl;
//					
//				}
//			}
//		}
//	}
//	return 0;
//}




#include <iostream>
using namespace std;
#include <string>

int main()
{
	cout << "192 384 576" << endl;
	cout << "219 438 657" << endl;
	cout << "273 546 819" << endl;
	cout << "327 654 981";

	return 0;
}
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//int v, w[10], n, j, k;
//int main() {
//    for (int i = 1;i < 333;i++) {//因为三个数为n,n*2,n*3,n*3<=1000,所以n<333
//        j = i * 2;
//        k = i * 3;
//        n = 0;
//        memset(w, 0, sizeof(w));
//        w[i / 100] = 1;w[i / 10 % 10] = 1;w[i % 10] = 1;//判断是否有重复数字
//        w[j / 100] = 1;w[j / 10 % 10] = 1;w[j % 10] = 1;
//        w[k / 100] = 1;w[k / 10 % 10] = 1;w[k % 10] = 1;
//        for (int t = 1;t < 10;t++)
//            n = w[t] + n;
//        if (n == 9)//如果九个数都有，输出
//            cout << i << " " << j << " " << k << endl;
//    }
//    return 0;
//}