#include <iostream>
#include "SpeechManager.h"



int main()
{
	SpeechManager s;
	

	//for (map<int,Speaker>::iterator it=s.m_Speaker.begin();it!=s.m_Speaker.end();it++)
	//{
	//	cout << "����:" << it->second.m_Name << "  ���:" << it->first << "  ����:" << it->second.m_Score[0] << endl;
	//}

	int choise = 0;

	while (true)
	{
		s.Show_Menu();

		cout << "����������ѡ��:  " << endl;
		cin >> choise;

		switch (choise)
		{
		case 0:
			cout << "��ӭ�´�ʹ��!" << endl;
			exit(0);
			break;
		case 1:
			s.StartSpeech();
			break;
		case 2:
			s.SpeechLoad();
			s.ShowRecore();
			break;
		case 3:

			break;
		default:
			system("cls");
			break;
		}
	}
	return 0;
}