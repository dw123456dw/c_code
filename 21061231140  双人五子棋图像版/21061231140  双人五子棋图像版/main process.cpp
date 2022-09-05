#include "head.h"

int Game_Over1(int chees[N][N],int chess_symbol)  //--������
{
	int i, j, k, l, r;
	for (i=0;i<N;i++)
	{
		for (k=0;k<N-4;k++)
		{
			l = r = 0;
			for (j=k;j<k+5;j++)
			{
				if (chees[i][j]==chess_symbol)
				{
					l++;
				}
				if (chees[j][i]==chess_symbol)
				{
					r++;
				}
				if (l==5 || r==5)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


int Game_Over2(int chees[N][N],int chess_symbol)        //   | ������
{
	int i, j, k, m, LeftDown, RightUp;

	for (m=0;m<N-4;m++)
	{
		for (k=0;k-N-m;k++)
		{
			RightUp = LeftDown = 0;
			for (i=k,j=k+m;i<k+5;i++,j++)
			{
				if (chees[i][j]==chess_symbol)
				{
					RightUp++;
				}
				if (chees[j][i]==chess_symbol)
				{
					LeftDown++;
				}
			}
			if (RightUp==5||LeftDown==5)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Game_Over3(int chees[N][N],int chess_symbol)     //     �Խ�������
{
	int i, j, k, m, LeftUp, RightDown;
	for (m=N-1;m>=4;m--)
	{
		for (k=0;k<m+1-4;k++)
		{
			RightDown = LeftUp = 0;
			for (i=k,j=m-k;i<k+5;i++,j--)
			{
				if(chees[i][j]==chess_symbol)
				{
					LeftUp++;
				}
				if (chees[j][i]==chess_symbol)
				{
					RightDown++;
				}
			}
			if (LeftUp==5 || RightDown==5)
			{
				return 1;
			}
		}
	}
	return 0;
}


void MainProcess(int chees[N][N],int n)
{
	MOUSEMSG m;
	int a, b;
	int x, y;
	int count1 = 0, count2 = 0;
	while (true)
	{
		m = GetMouseMsg();
		for (int i=1;i<10;i++)
		{
			for (int j=1;j<10;j++)
			{
				if (abs(m.x-i*50)<25 && abs(m.y-j*50)<25)
				{
					x = i * 50;
					y = j * 50;
					a = i;
					b = j;
				}
			}
		}

		if (m.uMsg == WM_LBUTTONDOWN)
		{
			if (chees[a][b]!=0)   //��ֹͬһ�ط�������
			{
				continue;
			}

			if (n==1)       //�ж�˭����
			{
            	setfillcolor(WHITE);
				solidcircle(x, y, 10);
				chees[a][b] = 1;

				if (Game_Over1(chees,1)==1||Game_Over2(chees,1)==1||Game_Over3(chees,1)==1)
				{
					setcolor(BLACK);
					outtextxy(200,200,"��ְ���ʤ");
					count1++;
					if (count1==3)
					{
						outtextxy(200, 300, "3�ְ���ʤ");
						printf("�׷���ʤ3�֣�����");
						break;
					}
					outtextxy(250, 250, "�Ƿ��������? Y���� N: ��");
					char ch = _getch();
					if (ch=='N')
					{
						break;
					}
					else
					{
						for (int i=0;i<N;i++)
						{
							for (int j=0;j<N;j++)
							{
								chees[i][j] = 0;
							}
						}
						setbkcolor(LIGHTGRAY);
						cleardevice();
						setcolor(RED);
						for (int i = 0; i <= 500; i += 50)
						{
							line(i, 0, i, 500);
							line(0, i, 500, i);
						}
					}
				}
				n = 2;
			}
			else if (n == 2)
			{
				setfillcolor(BLACK);
				solidcircle(x, y, 10);
				chees[a][b] = 2;
				if (Game_Over1(chees, 2) == 1 || Game_Over2(chees, 2) == 1 || Game_Over3(chees, 2) == 1)
				{
					setcolor(BLACK);
					outtextxy(200, 200, "��ֺ���ʤ");
					count2++;
					if (count2 == 3)
					{
						outtextxy(200, 300, "3�ֺ���ʤ");
						printf("�ڷ���ʤ3�֣�����");
						break;
					}
					outtextxy(250, 250, "�Ƿ��������? Y���� N: ��");
					char ch = _getch();
					if (ch == 'N')
					{
						break;
					}
					else
					{
						for (int i = 0; i < N; i++)
						{
							for (int j = 0; j < N; j++)
							{
								chees[i][j] = 0;
							}
						}
						setbkcolor(LIGHTGRAY);
						cleardevice();
						setcolor(RED);
						for (int i = 0; i <= 500; i += 50)
						{
							line(i, 0, i, 500);
							line(0, i, 500, i);
						}
					}
				}
				n = 1;
			}
		}
	}
}