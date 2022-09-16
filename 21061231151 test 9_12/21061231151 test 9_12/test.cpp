#include <iostream>
using namespace std;
#include <iomanip>
//int main()
//{
//	int n;
//	cout << "请输入一个整数n:";
//	cin >> n;
//
//	if (n>0 && n%3==0)
//	{
//		cout << "yes" << endl;
//	}
//	else
//	{
//		cout << "no" << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	unsigned score;
//	cout << "请输入一个分数";
//	cin >> score;
//	if (score < 60)
//	{
//		cout << "F" << endl;
//	}
//	else if (score<70)
//	{
//		cout << "D" << endl;
//	}
//	else if (score <80 )
//	{
//		cout << "C" << endl;
//	}
//	else if (score < 90)
//	{
//		cout << "B" << endl;
//	}
//	else
//	{
//		cout << "A" << endl;
//	}
//	return 0;
//}


//int main()
//{
//	double sum = 0, x = 1;
//	int i = 1;
//	while (x>1.0E-10)
//	{
//		sum += x;
//		++i;
//		x *= (i - 1.) / (2 * i - 1);
//	}
//
//	cout << "pi=" << fixed << setprecision(10) << 2 * sum << endl;
//	return 0;
//}

//int main()
//{
//	int cnt = 0;
//	char x;
//
//	do
//	{
//		x = cin.get();
//		if (x>='0'&& x<='9')
//		{
//			++cnt;
//		}
//
//	} while (x != EOF);
//
//	cout << "数字字符个数为:" << cnt << endl;
//
//	return 0;
//}


//int main()
//{
//	float x, y;
//	cout << "请输入:" << endl;
//	cin >> x;
//
//	if (x<1)
//	{
//		cout << "y=x" << endl;
//	}
//	else if (x<10)
//	{
//		y = x * 2 - 1;
//	}
//	else if (x>=10)
//	{
//		y = 3 * x - 11;
//	}
//	cout << "y=" << y << endl;
//
//
//	return 0;
//}



//int get(int a,int b)
//{
//	int i = 0;
//	while (b!=0)
//	{
//		i = a % b;
//		a = b;
//		b = i;
//	}
//	return a;
//}
//
//
//int main()
//{
//	int a, b;
//	cout << "请输入两个数" << endl;
//	cin >> a >> b;
//	cout << "最大公约数为:" << get(a,b) << endl;
//
//	return 0;
//}

int main()
{
	int i, j, k;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4 - i; j++)
		{
			cout << "    ";
		}
		for (k = 1; k <= 2 * i - 1; k++)
		{
			cout << "*   ";
		}
		cout << endl;
	}
	for (int i=0;i<3;i++)
	{
		for (int j=1;j<3;j++)
		{
			cout << "    ";
		}
		for (int k=0;k<3;k++)
		{
			cout << "*   ";
		}
		cout << endl;
	}
	return 0;
}