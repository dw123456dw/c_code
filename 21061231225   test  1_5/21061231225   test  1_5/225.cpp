//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//vector<int> ans(3000,-1);
//
//int main()
//{
//	int n;
//	cin >> n;
//	ans[0] = 1;
//	if (n==1)
//	{
//		cout << 1;
//		return 0;
//	}
//	int pos = 0,carry=0;
//	for (int i = 2; i <= n; i++)
//	{
//		while (ans[pos] != -1) //统计位数
//		{
//			pos++;
//		}
//		for (int j=0;j<pos;j++)
//		{
//			ans[j] =(ans[j] * i)+carry;
//			if (ans[j]>=10)
//			{
//				carry = ans[j] / 10;
//				ans[j] %= 10;
//				if (ans[j+1]==-1)//控制最高位进位
//				{
//					int x = j + 1;
//					while (carry)//处理最高位大于两位情况
//					{
//						ans[x++] = carry % 10;
//						carry /= 10;
//					}
//				}
//			}
//			else
//			{
//				carry = 0;
//			}			
//		}
//		pos = 0;
//		carry = 0;
//	}
//	reverse(ans.begin(),ans.end());
//	for (int i=0;i<3000;i++)
//	{
//		if(ans[i]!=-1)
//		{
//			cout << ans[i];
//		}
//	}
//	return 0;
//}


#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
vector <int> huff;

int main()
{
	//int n;
	//cin >> n;

	//for (int i=0;i<n;i++)
	//{
	//	int a = 0;
	//	cin >> a;
	//	huff.push_back(a);
	//}
	//sort(huff.begin(),huff.end());
	//int pay = 0;

	//while (huff.size()>1)
	//{
	//	int pos = huff.size() - 1;
	//	int temp = huff[0] + huff[1];
	//	pay += (huff[0]+huff[1]);
	//	swap(huff[0],huff[pos--]);
	//	huff.pop_back();
	//	if (huff.size()>=2)
	//	{
	//		swap(huff[1], huff[pos]);
	//		huff.pop_back();
	//		huff.push_back(temp);
	//	}
	//	sort(huff.begin(), huff.end());
	//}

	//cout << pay;
	string s = "";
	s.push_back('1');
	cout << s;
	return 0;
}