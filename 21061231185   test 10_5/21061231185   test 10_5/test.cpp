using namespace std;
#include <iostream>

#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#include <iomanip>

void print(vector<string>&s)   //打印
{
	for (vector<string>::iterator it = s.begin(); it !=s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void setbrand(vector<string>&brand,string S)   //创建13种牌
{
	string name = "A23456789TJQK";
	for (int i = 0; i < 13; i++)
	{
		string temp = S;
		temp += name[i];
		brand.push_back(temp);
	}
}

void test()
{
	vector<string> brand;
	setbrand(brand,"S");      //创建4种花色13张牌
	setbrand(brand, "H");
	setbrand(brand, "D");
	setbrand(brand,"C");

	vector<string> a;      //四名玩家
	vector<string> b;
	vector<string> c;
	vector<string> d;

	random_shuffle(brand.begin(),brand.end());       //洗牌

	for (vector<string>::iterator it=brand.begin();it!=brand.end();it++)     //发牌
	{
		int pos = rand() % 4;
		if (pos==0 && a.size()<13)
		{
			a.push_back(*it);
		}
		else if (pos==1 && b.size()<13)
		{
			b.push_back(*it);
		}
		else if (pos==2 && c.size()<13)
		{
			c.push_back(*it);
		}
		else if (pos == 3 && d.size() < 13)
		{
			d.push_back(*it);
		}
		else                  //处理有人满牌了
		{
			if (a.size() < 13)
			{
				a.push_back(*it);
			}
			else if (b.size() < 13)
			{
				b.push_back(*it);
			}
			else if (c.size() < 13)
			{
				c.push_back(*it);
			}
			else
			{
				d.push_back(*it);
			}
		}
	}
	print(a);
	print(b);
	print(c);
	print(d);
}
void test2()
{
	srand(0);
	constexpr int sz = 8;
	char map[sz][sz];
	for (auto& row : map)
	{
		for (auto& col : row)
		{
			col = rand() % 100 < 50 ? '*' : '0';
		}
	}
	for (int i = 0; i < sz; ++i)
	{
		for (int j = 0; j < sz; ++j)
		{
			if (map[i][j] == '*')
			{
				cout << setw(3) << "*";
			}
			else
			{
				cout << setw(3) << i * sz + j;
			}
		}
		cout << endl;
	}
	int cell;
	cout << "请输入选择的方格编号[0-" << sz * sz - 1 << "]:";
	cin >> cell;
	if (map[cell / sz][cell % sz] == '*')
	{
		cout << "选择的是地雷" << endl;
	}
	else
	{
		vector<int>result, nobomb(1, cell);
		map[cell / sz][cell % sz] = '1';
		do
		{
			cell = nobomb.front();
			int neibor[] = { (cell / sz > 0) ? cell - sz : -1,(cell % sz > 0) ? cell - 1 : -1 ,(cell / sz < sz - 1) ? cell + sz : -1 ,(cell % sz < sz - 1) ? cell + 1 : -1 };
			for (auto& k : neibor)
			{
				if (k != -1 && map[k / sz][k % sz] == '0')
				{
					nobomb.push_back(k);
					map[k / sz][k % sz] = '1';
				}
			}
			result.push_back(cell);
			nobomb.erase(nobomb.begin());
		} while (!nobomb.empty());
		for (auto i : result)
		{
			cout << i << " ";
		}
	}
}


int main()
{
	srand((unsigned int)time(NULL));
	test();
	//test2();
	return 0;
}