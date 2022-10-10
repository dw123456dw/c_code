#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>
//int main()
//{
//	srand(0);
//	constexpr int sz = 30;
//	int score[sz];
//	int mean = 0;
//	for (auto &i:score)
//	{
//		i = 50 + rand() % 51;
//		mean += i;
//	}
//	mean /= sz;
//	double dev = 0;
//	for (int i=0;i<sz;i++)
//	{
//		dev += pow(score[i]-mean,2);
//	}
//	dev = sqrt(dev/sz);
//	cout << "平均成绩: " << mean << "  标准差: " << dev << endl;
//	return 0;
//}


//int main()
//{
//	srand(time(0));
//	constexpr int sz = 8;
//	char map[sz][sz];
//	for (auto &row:map)
//	{
//		for (auto &col:row)
//		{
//			int num = rand() % 100;
//			if (num<=40)
//			{
//				col = '*';
//			}
//			else
//			{
//				col = '0';
//			}
//		}
//	}
//	for (int i=0;i<sz;i++)
//	{
//		for (int j=0;j<sz;j++)
//		{
//			if (map[i][j]!='*')
//			{
//				continue;
//			}
//			if (i+1<sz && map[i+1][j]!='*')
//			{
//				map[i + 1][j] += 1;
//			}
//			if (i-1>=0 && map[i-1][j]!='*')
//			{
//				map[i - 1][j] += 1;
//			}
//			if (j+1<sz && map[i][j+1]!='*')
//			{
//				map[i][j + 1] += 1;
//			}
//			if (j-1>=0 && map[i][j-1]!='*')
//			{
//				map[i][j - 1] += 1;
//			}
//		}
//	}
//
//	for (int i=0;i<sz;i++)
//	{
//		for (int j=0;j<sz;j++)
//		{
//			cout << map[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//void stringcat(string &s1,string &s2)
//{
//	s1 += s2;
//}
//
//
//
//int main()
//{
//	string str1;
//	string str2;
//	cin >> str1;
//	cin >> str2;
//	stringcat(str1,str2);
//	cout << "合并后str1为" << str1 << endl;
//}



//int main()
//{
//	int count = 0,zero=0;
//	string str1;
//	cout << "请输入一段文本包括空格和换行符" << endl;
//	getline(cin,str1);
//
//	while (str1[count]!='\0')
//	{
//		if (str1[count]==' ')
//		{
//			zero++;
//			for (int i=count;i<str1.size()-1;i++)
//			{
//				str1[i] = str1[i + 1];
//			}
//		}
//		count++;
//	}
//
//	for (int i=0;i<str1.size()-zero;i++)
//	{
//		cout << str1[i];
//	}
//	return 0;
//}



void test()
{
	string s;
	cout << "请输入一段文本" << endl;
	getline(cin,s);
	string temp;
	int pos = 0;
	for (int i=0;i<s.size();i++)
	{
		if (s[i]>=65 && s[i]<=90)
		{
			temp+= s[i];
		}
	}
	pos = 0;
	sort(temp.begin(),temp.end());

	for (int i=0;i<s.size();i++)
	{
		if (s[i]>=65 && s[i]<=90)
		{
			char a = s[i];
			s[i] = temp[pos++];
		}
	}
	cout << "排序后的结果是" << endl;
	cout << s << endl;
}

int main()
{
	//int prev = 0, cur = 1;
	//string str;
	//getline(cin, str);

	//
	//cout << str << endl;
	test();
	return 0;
}








