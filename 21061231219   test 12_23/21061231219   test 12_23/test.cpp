//#include <iostream>
//using namespace std;
//#include <vector>
//int arr[210][210];
//vector<int> ret;
//int main()
//{
//    int m, n;
//    cin >> m >> n;
//
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> arr[i][j];
//        }
//    }
//    int up = 0, down = m - 1, left = 0, right = n - 1;
//    while (true)
//    {
//        for (int i = up; i <= down; i++)    //左边上到下
//        {
//            ret.push_back(arr[i][left]);
//        }
//        if (++left > right)   //跳过第一列
//            break;
//        for (int i = left; i <= right; i++)       //下边左到右
//        {
//            ret.push_back(arr[down][i]);
//        }
//        if (--down < up)   //跳过最下边一行
//            break;
//        for (int i = down; i >= up; i--)    //右边边下到上
//        {
//            ret.push_back(arr[i][right]);
//        }
//        if (--right < left)    //跳过最右边一列
//            break;
//        for (int i = right; i >= left; i--)       //上边右到左
//        {
//            ret.push_back(arr[up][i]);
//        }
//        if (++up > down)   //跳过最上边一行
//            break;
//    }
//    for (int i = 0; i < ret.size(); i++)
//    {
//        cout << ret[i] << " ";
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//
//	int v1, v2, t, s, l;
//	cin >> v1 >> v2 >> t >> s >> l;
//
//	int s1 = 0, s2 = 0, time = 0;
//	for (int i = 1; s1 < l && s2 < l; i++)
//	{
//
//		if (s1 - s2 >= t)
//		{
//			for (int j=s;j>0;j--)
//			{
//				s2 += v2;
//				time++;
//				if (s2>=l)
//				{
//					break;
//				}
//
//			}
//		}
//		else
//		{
//			s2 += v2;
//			s1 += v1;
//			time++;
//		}		
//	}
//	if (s1 > s2)
//	{
//		cout << "R" << endl;
//		cout << time << endl;
//	}
//	else if (s1 < s2)
//	{
//		cout << "T" << endl;
//		cout << time << endl;
//	}
//	else
//	{
//		cout << "D" << endl;
//		cout << time << endl;
//	}
//
//	return 0;
//}
//给定两个仅由大写字母或小写字母组成的字符串(长度介于1到10之间)，它们之间的关系是以下4中情况之一：
//1：两个字符串长度不等。比如 Beijing 和 Hebei
//2：两个字符串不仅长度相等，而且相应位置上的字符完全一致(区分大小写)，比如 Beijing 和 Beijing
//3：两个字符串长度相等，相应位置上的字符仅在不区分大小写的前提下才能达到完全一致（也就是说，它并不满足情况2）。比如 beijing 和 BEIjing
//4：两个字符串长度相等，但是即使是不区分大小写也不能使这两个字符串一致。比如 Beijing 和 Nanjing
//编程判断输入的两个字符串之间的关系属于这四类中的哪一类，给出所属的类的编号。
//#include <iostream>
//using namespace std;
//#include <string>
//#include <cmath>
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//
//	if (s1.size()!=s2.size())
//	{
//		cout << 1 << endl;
//		return 0;
//	}
//	if (s1==s2)
//	{
//		cout << 2 << endl;
//		return 0;
//	}
//	for (int i=0,j=0;i<s1.size();i++,j++)
//	{
//		if (fabs(s1[i]-s2[i])==32)
//		{
//			cout << 3 << endl;
//			return 0;
//		}
//	}
//	cout << 4 << endl;
//	return 0;
//}

//n!可能很大，而计算机能表示的整数范围有限，需要使用高精度计算的方法。使用一个数组A来表示一个大整数a，
// A[0]表示a的个位，A[1]表示a的十位，依次类推。
//将a乘以一个整数k变为将数组A的每一个元素都乘以k，请注意处理相应的进位。
//首先将a设为1，然后乘2，乘3，当乘到n时，即得到了n!的值。

//#include <iostream>
//using namespace std;
//#include <vector>
//vector<int> arr(1010);
//
//int main()
//{
//	int n;
//	cin >> n;
//	arr[0] = 1;
//	int flag = 0;
//
//	for (int i = 1; arr[i] != 0 && i <= n; i++)
//	{
//		arr[i] = arr[i] * i + flag;
//		if (arr[i] >= 10)
//		{
//			flag = arr[i] / 10;
//			arr[i] %= 10;
//		}
//	}
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//#include <algorithm>
//
//int main()
//{
//	vector<int> ret1(10, 1);
//	vector<int> ret2(10,2);
//	vector<int> ret3(20);
//	merge(ret1.begin(),ret1.end(),ret2.begin(),ret2.end(),ret3.begin());
//	return 0;
//}