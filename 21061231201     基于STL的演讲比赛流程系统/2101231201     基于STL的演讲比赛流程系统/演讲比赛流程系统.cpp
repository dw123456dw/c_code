#include <iostream>
#include "SpeechManager.h"



int main()
{
	SpeechManager s;
	

	//for (map<int,Speaker>::iterator it=s.m_Speaker.begin();it!=s.m_Speaker.end();it++)
	//{
	//	cout << "姓名:" << it->second.m_Name << "  编号:" << it->first << "  分数:" << it->second.m_Score[0] << endl;
	//}

	int choise = 0;

	while (true)
	{
		s.Show_Menu();

		cout << "请输入您的选择:  " << endl;
		cin >> choise;

		switch (choise)
		{
		case 0:
			cout << "欢迎下次使用!" << endl;
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