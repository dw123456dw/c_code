#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
#include <cmath>

//int main()
//{
//	srand(time(0));
//	int target = rand() % 100;
//	int guess;
//	cout << "请输入1~100以内的数" << endl;
//
//	do
//	{
//		cin >> guess;
//		if (guess<target)
//		{
//			cout << "猜小了" << endl;
//		}
//		else if (guess>target)
//		{
//			cout << "猜大了" << endl;
//		}
//		else
//		{
//			cout << "猜对了" << endl;
//		}
//	} while (guess!=target);
//	return 0;
//}


//int main()
//{
//	double step = 0.2;
//	double x = 0;
//	while (x<6.28)
//	{
//		int val = 30 * (sin(x) + 1);
//		for (int i=0;i<val;i++)
//		{
//			cout << " " ;
//		}
//		cout << "*" << endl;
//		x += step;
//	}
//	return 0;
//}


//int main()
//{
//	srand(time(0));
//	while (1)
//	{
//		int computer(0), you(0);
//		do
//		{
//			cout << "你好!石头=0,剪刀=1,布=2";
//			computer = rand() % 3;
//			cout << "请出手: ";
//			cin >> you;
//			switch (you-computer)
//			{
//			case 0:
//				cout << "平手" << endl;
//				break;
//			case 1:case -2:
//				cout << "你输了!" << endl;
//				break;
//			case -1:case 2:
//				cout << "你赢了!" << endl;
//				break;
//			default:
//				cout << "你出错了" << endl;
//			}
//
//		} while (computer == you);
//		cout << "还要玩吗?Y/N:";
//		char play;
//		cin >> play;
//		if (play=='N'||play=='Y')
//		{
//			break;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int x ;
//	int y ;
//	int j ;
//	int count = 0;
//	for (x=0;x<10;x++)
//	{
//		for (y=0;y<20;y++)
//		{
//			for (j=0;j<100;j++)
//			{
//				if (x*10+y*5+j==100)
//				{
//					cout <<"x=  "<< x<<"y=  " << y << "j=  " << j << endl;
//					count++;
//				}
//			}
//		}
//	}
//
//	cout << "共有" << count << "种组合" << endl;
//}




int main()
{
	int x = 1;
	double y=atan(x);
	cout << 4*y << endl;

	return 0;
}