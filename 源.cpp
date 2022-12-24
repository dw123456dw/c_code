#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
// 
//#include <algorithm>
//using namespace std;
//const int N = 110;
//int num[N][N];
//int dp[N][N];
//int n;
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= i; j++) {
//            cin >> num[i][j];
//        }
//    }
//
//    // dp[i][j] = max(dp[i-1][j-1],dp[i-1][j]) + num[i][j];
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= i; j++) {
//            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + num[i][j];
//        }
//    }
//    //int res = 0;
//    //for (int i = 1; i <= n; i++) {
//    //    res = max(dp[n][i], res);
//    //}
//    //cout << res;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << dp[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    cout << dp[n][(n/2)+1];
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//const int N=110;
//int num[N][N];
//int dp[N][N];
//int main()
//{
//  // 请在此输入您的代码
//  int n;
//  cin >> n;
//  for(int i=1;i<=n;i++)
//  {
//    for(int j=1;j<=i;j++)
//    {
//      cin >> num[i][j];
//    }
//  }
//
//  for(int i=1;i<=n;i++)
//  {
//    for(int j=1;j<=i;j++)
//    {
//      dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+num[i][j];
//    }
//  }
//
//  for (int i = 1; i <= n; i++)
//  {
//      for (int j = 1; j <= i; j++)
//      {
//          cout << " " << dp[i][j];
//      }
//      cout << endl;
//  }
//
//  cout << dp[n][(n/2)+1];
//  return 0;
//}

//#include <iostream>
//using namespace std;
//
//const int N = 210;
//
//int arr[N];
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
//void mysort(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	mysort(arr, n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//#include <stdio.h>
//
//const double PI = 3.14159265358979323;
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double s = PI * n * n;
//
//	printf("%.7f", s);
//
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//const int N = 1010;
//int arr[N];
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	int target;
//	cin >> target;
//
//	int ans = -1;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == target)
//		{
//			ans = i+1;
//			break;
//		}
//	}
//
//	cout << ans;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int arr[10];
//
//int main()
//{
//	arr[0] = 153;
//	int pos = 1;
//
//	for (int i = 154; i < 1000; i++)
//	{
//		int a, b, c, temp = i;
//		while (temp)
//		{
//			c = temp % 10;
//			temp /= 10;
//			b = temp % 10;
//			temp /= 10;
//			a = temp % 10;
//			temp /= 10;
//		}
//		if (a * a * a + b * b * b + c * c * c == i)
//		{
//			arr[pos++] = i;
//		}
//	}
//
//	for (int i = 0; i < pos; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 40;
//
//int arr[N][N];
//
//
//
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	arr[0][0] = 1;
//	arr[1][0] = 1;
//	arr[1][1] = 1;
//
//	for (int i = 2; i < N; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//
//		for (int j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <string>
//
//bool isnum(string s)
//{
//	int i = 0, j = s.size() - 1;
//	while (s[i] == s[j] && i <= j)
//	{
//		i++;
//		j--;
//	}
//	if (i <= j)
//	{
//		return false;
//	}
//	else
//	{
//		return true;
//	}
//}
//int ret[100];
//
//int main()
//{
//	int pos = 0;
//	for (int i = 1000; i < 10000; i++)
//	{
//		if (isnum(to_string(i)))
//		{
//			ret[pos++] = i;
//		}
//	}
//
//	for (int i = 0; i < pos; i++)
//	{
//		cout << ret[i] << endl;;
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//char arr[30][30];
//
//int main()
//{
//	string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int m, n;
//	cin >> n >> m;
//
//	int pos = 0;
//	for (int i = 0; i < 26; i++)
//	{
//		for (int j = i; j < 26; j++)
//		{
//			arr[i][j] = s[pos++];
//		}
//		pos = 0;
//	}
//	for (int i=1;i<=26;i++)
//	{
//		for (int j=0;j<i;j++)
//		{
//			arr[i][j] = arr[j][i];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <string>
//
//#define max 100
//
//string to_String(int n)
//{
//	int m = n;
//	int i = 0, j = 0;
//	char s[max];
//	char ss[max];
//	while (m > 0)
//	{
//		s[i++] = m % 10 + '0';
//		m /= 10;
//	}
//	s[i] = '\0';
//
//	i = i - 1;
//	while (i >= 0)
//	{
//		ss[j++] = s[i--];
//	}
//	ss[j] = '\0';
//
//	return ss;
//}
//
//bool isnum(string s)
//{
//	int i = 0, j = s.size() - 1;
//	while (s[i++] == s[j++] && i <= j)
//	if (i <= j)
//	{
//		return false;
//	}
//	else
//	{
//		return true;
//	}
//}
//int ret[100];
//int main()
//{
//	int n;
//	cin >> n;
//	int ans = 0;
//	int pos = 0;
//	for (int i = 100000; i < 1000000; i++)
//	{
//		
//		if (isnum(to_String(i)))
//		{
//			string s = to_String(i);
//			for (int j = 0; j < s.size(); j++)
//			{
//				ans += s[j]-'0';
//			}
//			if (ans == n)
//			{
//				ret[pos++] = i;
//			}
//			ans = 0;
//		}
//	}
//	for (int i = 0; i < pos; i++)
//	{
//		cout << ret[i] << endl;;
//	}
//	return 0;
//}

#include <iostream>
using namespace std;

int main()
{
	int n, temp;
	cin >> n;
	int max = INT_MIN, min = INT_MAX, sum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp > max)
		{
			max = temp;
		}
		if (temp < min)
		{
			min = temp;
		}
		sum += temp;
	}

	cout << max << endl;
	cout << min << endl;
	cout << sum << endl;

	return 0;
}