//#include <iostream>
//using namespace std;
//#include <string>
//#include <algorithm>
//int main()
//{
//	int n;
//	cin >> n;
//	string ans = "";
//	if (n == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//
//	while (n)
//	{
//		int temp1 = n % 16;
//		switch (temp1)
//		{
//		case 10:
//			ans += "A";
//			break;
//		case 11:
//			ans += "B";
//			break;
//		case 12:
//			ans += "C";
//			break;
//		case 13:
//			ans += "D";
//			break;
//		case 14:
//			ans += "E";
//			break;
//		case 15:
//			ans += "F";
//			break;
//		default:
//			ans += to_string(temp1);
//			break;
//		}
//		n /= 16;
//	}
//
//	reverse(ans.begin(),ans.end());
//	cout << ans;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//#include <string>
//#include <algorithm>
//#define max 100
//string to_String(int n)
//{
//	if (n==0)
//	{
//		return "0";
//	}
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
//	i = i - 1;
//	while (i >= 0)
//	{
//		ss[j++] = s[i--];
//	}
//	ss[j] = '\0';
//	return ss;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	string ans = "";
//	if (n == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//	while (n)
//	{
//		int temp1 = n % 16;
//		switch (temp1)
//		{
//		case 10:
//			ans += "A";
//			break;
//		case 11:
//			ans += "B";
//			break;
//		case 12:
//			ans += "C";
//			break;
//		case 13:
//			ans += "D";
//			break;
//		case 14:
//			ans += "E";
//			break;
//		case 15:
//			ans += "F";
//			break;
//		default:
//			ans += to_String(temp1);
//			break;
//		}
//		n /= 16;
//	}
//	reverse(ans.begin(), ans.end());
//	cout << ans;
//	return 0;
//}

#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <algorithm>
#define max 100
string to_string(int n)
{
	if (n == 0)
	{
		return "0";
	}
	int m = n;
	int i = 0, j = 0;
	char s[max];
	char ss[max];
	while (m > 0)
	{
		s[i++] = m % 10 + '0';
		m /= 10;
	}
	s[i] = '\0';
	i = i - 1;
	while (i >= 0)
	{
		ss[j++] = s[i--];
	}
	ss[j] = '\0';
	return ss;
}
int six(string s)
{
	long long ans = 0;
	int n = s.size() - 1;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
			ans += 10 * pow(16, n--);
		else if (s[i] == 'B')
			ans += 11 * pow(16, n--);
		else if (s[i] == 'C')
			ans += 12 * pow(16, n--);
		else if (s[i] == 'D')
			ans += 13 * pow(16, n--);
		else if (s[i] == 'E')
			ans += 14 * pow(16, n--);
		else if (s[i] == 'F')
			ans += 15 * pow(16, n--);
		else
			ans += (s[i] - '0') * pow(16, n--);
	}
	return ans;
}
void ten_to_eight(int n)
{
	string ans = "";
	if (n == 0)
		cout << 0;
	while (n)
	{
		int temp1 = n % 8;
		ans += to_string(temp1);
		n /= 8;
	}
	reverse(ans.begin(),ans.end());
	cout << ans << endl;;
}
int main()
{
	int n;
	cin >> n;
	vector<string> ret(n);
	for (int i = 0; i < n; i++)
	{
		cin >> ret[i];
	}
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		arr[i] = six(ret[i]);
		ten_to_eight(arr[i]);
	}
	return 0;
}