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
//	cout << "������1~100���ڵ���" << endl;
//
//	do
//	{
//		cin >> guess;
//		if (guess<target)
//		{
//			cout << "��С��" << endl;
//		}
//		else if (guess>target)
//		{
//			cout << "�´���" << endl;
//		}
//		else
//		{
//			cout << "�¶���" << endl;
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
//			cout << "���!ʯͷ=0,����=1,��=2";
//			computer = rand() % 3;
//			cout << "�����: ";
//			cin >> you;
//			switch (you-computer)
//			{
//			case 0:
//				cout << "ƽ��" << endl;
//				break;
//			case 1:case -2:
//				cout << "������!" << endl;
//				break;
//			case -1:case 2:
//				cout << "��Ӯ��!" << endl;
//				break;
//			default:
//				cout << "�������" << endl;
//			}
//
//		} while (computer == you);
//		cout << "��Ҫ����?Y/N:";
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
//	cout << "����" << count << "�����" << endl;
//}




int main()
{
	int x = 1;
	double y=atan(x);
	cout << 4*y << endl;

	return 0;
}