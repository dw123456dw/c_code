#include "SpeechManager.h"


SpeechManager::SpeechManager()
{
	this->Init();
	this->CreatSpeaker();
}

void SpeechManager::Show_Menu()
{
	cout << "*****��ӭʹ���ݽ�����ϵͳ*****" << endl;
	cout << "*****  1.��ʼ�ݽ�����    *****" << endl;
	cout << "*****  2.�鿴�����¼    *****" << endl;
	cout << "*****  3.ɾ�������¼    *****" << endl;
	cout << "*****  0.�˳���������    *****" << endl;
}

void SpeechManager::Init()
{
	this->m_Index = 1;
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
}

void SpeechManager::CreatSpeaker()
{
	string nameseed = "ABCDEFGHIJKL";

	for (int i=0;i<nameseed.size();i++)
	{
		string name = "ѡ��";
		name += nameseed[i];

		Speaker sp;
		sp.m_Name = name;
		for (int j=0;j<2;j++)
		{
			sp.m_Score[j] = 0;
		}

		this->v1.push_back(i+1001);


		this->m_Speaker.insert(make_pair(i+1001,sp));
	}
}
void SpeechManager::SpeechContest()
{
	cout << "-------��" << this->m_Index << "�ֱ������ڽ���-------" << endl;

	multimap<double, int, greater<double>> groupscore;

	int num = 0;
	vector<int> v_src;

	if (this->m_Index==1)
	{
		v_src = v1;
	}
	else
	{
		v_src = v2;
	}

	for (vector<int>::iterator it=v_src.begin();it!=v_src.end();it++)
	{
		num++;

		//��ί���
		deque<double> d;

		for (int i=0;i<10;i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			d.push_back(score);
		}
		//�����ȥ����߷ֺ���ͷ�
		sort(d.begin(),d.end());
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(),d.end(),0.0f);
		double avg = sum / (double)d.size();

		//ÿ����ƽ����
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

		//ÿ6����һ�飬���浽��ʱ����
		groupscore.insert(make_pair(avg,*it));
		if (num%6==0)
		{
			cout << "��" << num / 6 << "С���������" << endl;
			for (multimap<double,int,greater<double>>::iterator it=groupscore.begin();it!=groupscore.end();it++)
			{
				cout << "���" << it->second << "����" << this->m_Speaker[it->second].m_Name << "�ɼ�" << it->first << endl;
			}

			//ȡǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupscore.begin(); count < 3 && it != groupscore.end(); it++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vVictory.push_back((*it).second);
				}
			}

			groupscore.clear();
			cout << endl;
		}
	}
	cout << "-------��" << this->m_Index << "�ֱ������-------" << endl;
	system("pause");
}

void SpeechManager::SpeechShow()
{
	cout << "��" << this->m_Index << "����ѡ����Ϣ����" << endl;

	vector<int> temp;

	if (this->m_Index==1)
	{
		temp = v2;
	}
	else
	{
		temp = vVictory;
	}

	for (vector<int>::iterator it=temp.begin();it!=temp.end();it++)
	{
		cout << "ѡ�ֱ��: " << *it << "ѡ������: " << this->m_Speaker[*it].m_Name << "ѡ�ֵ÷�: " << this->m_Speaker[*it].m_Score[this->m_Index-1] << endl;
	}
	cout << endl;
	system("pause");
}

void SpeechManager::StartSpeech()
{
	//��һ��
	//1.��ǩ
	this->SpeechDraw();

	//2.����
	this->SpeechContest();
	//3.����������
	this->SpeechShow();

	this->m_Index++;
	//�ڶ���
	//1.��ǩ
	this->SpeechDraw();


	//2.����
	this->SpeechContest();

	//3.�������ս��
	this->SpeechShow();
	//���浽�ļ�
	this->SpeechSave();

	cout << "�����������" << endl;
	system("pause");
	system("cls");
}

void SpeechManager::SpeechLoad()
{
	ifstream ifs("speech.csv",ios::in);

		
	if (!ifs.is_open())
	{
		this->Fileisempty = true;
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�������" << endl;
		this->Fileisempty = true;
		ifs.close();
		return;
	}

	//�ߵ��ⲽ��ʾ�ļ���Ϊ��
	this->Fileisempty = false;
	ifs.putback(ch);  //��һ��ʼ�����ļ���β�Ż�ȥ


	string data;
	int index = 0;

	while (ifs>>data)
	{
		vector<string> v;
		int pos = -1;
		int start = 0;

		while (true)
		{
			data.find(",", start);

			if (pos == -1)
			{
				break;
			}
			string temp = data.substr(start, pos - start);
			v.push_back(temp); 

			start = pos + 1;
		}
		this->m_Recore.insert(make_pair(index++,v));
	}
	ifs.close();
}


void SpeechManager::ShowRecore()
{
	for (int i=0;i<this->m_Recore.size();i++)
	{
		cout << "��" << i + 1 << "��" <<
			"�ھ����" << this->m_Recore[i][0] << " �÷�: " << this->m_Recore[i][1] << " "
			<< "�Ǿ����" << this->m_Recore[i][2] << "�÷�: " << this->m_Recore[i][3] << " "
			<< "�������" << this->m_Recore[i][4] << "�÷�: " << this->m_Recore[i][5] << endl;
	}
	system("pause");
	system("cls");	
}


void SpeechManager::SpeechSave()
{
	ofstream ofs("speech.csv",ios::out|ios::app);

	for (vector<int>::iterator it=vVictory.begin();it!=vVictory.end();it++)
	{
		ofs << *it << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;
	ofs.close();
	cout << "��¼�������" << endl;
}


void SpeechManager::SpeechDraw()
{
	cout << "�� <<" << this->m_Index << ">>�ֱ������ڳ�ǩ" << endl;
	cout << "��ǩ�������......" << endl;
	cout << "-------------------------" << endl;
	if (this->m_Index==1)
	{
		random_shuffle(v1.begin(),v1.end());

		for (vector<int>::iterator it=v1.begin();it!=v1.end();it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		random_shuffle(v2.begin(), v2.end());

		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "-------------------------" << endl;
	system("pause");
}

SpeechManager::~SpeechManager()
{


}