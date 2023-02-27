#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i= 10000; i < 1000000; ++i)
	{
		int sa = i;
		if (i < 100000) {
			//得到万位数
			int a = sa / 10000;
			//除去万位数
			sa %= 10000;
			//得到千位数
			int b = sa / 1000;
			//除去千位数
			sa %= 1000;
			//得到百位数
			int c = sa / 100;
			//除去百位数
			sa %= 100;
			//得到十位数
			int d = sa / 10;
			//除去十位数
			sa %= 10;
			//得到个位数
			int e = sa;
			if (n == a + b + c + d + e && a == e && b == d) {
				cout << i << endl;
			}

		}
		else
		{	//得到十万位数
			int a = sa / 100000;
			//除取十万位数
			sa %= 100000;
			//得到万位数
			int b = sa / 10000;
			//除去万位数
			sa %= 10000;
			//得到千位数
			int c = sa / 1000;
			//除去千位数
			sa %= 1000;
			//得到百位数
			int d = sa / 100;
			//除去百位数
			sa %= 100;
			//得到十位数
			int e = sa / 10;
			//除去十位数
			sa %= 10;
			//得到个位数
			int f = sa;
			if (n == a + b + c + d + e + f && a == f && b == e && c == d)
				cout << i << endl;
		}
	}
	return 0;
}