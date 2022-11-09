#include "SpeechManager.h"


SpeechManager::SpeechManager()
{
	this->Init();
	this->CreatSpeaker();
}

void SpeechManager::Show_Menu()
{
	cout << "*****欢迎使用演讲比赛系统*****" << endl;
	cout << "*****  1.开始演讲比赛    *****" << endl;
	cout << "*****  2.查看往届记录    *****" << endl;
	cout << "*****  3.删除往届记录    *****" << endl;
	cout << "*****  0.退出比赛程序    *****" << endl;
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
		string name = "选手";
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
	cout << "-------第" << this->m_Index << "轮比赛正在进行-------" << endl;

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

		//评委打分
		deque<double> d;

		for (int i=0;i<10;i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			d.push_back(score);
		}
		//排序后去除最高分和最低分
		sort(d.begin(),d.end());
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(),d.end(),0.0f);
		double avg = sum / (double)d.size();

		//每个人平均分
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

		//每6个人一组，保存到临时容器
		groupscore.insert(make_pair(avg,*it));
		if (num%6==0)
		{
			cout << "第" << num / 6 << "小组比赛名次" << endl;
			for (multimap<double,int,greater<double>>::iterator it=groupscore.begin();it!=groupscore.end();it++)
			{
				cout << "编号" << it->second << "姓名" << this->m_Speaker[it->second].m_Name << "成绩" << it->first << endl;
			}

			//取前三名
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
	cout << "-------第" << this->m_Index << "轮比赛完毕-------" << endl;
	system("pause");
}

void SpeechManager::SpeechShow()
{
	cout << "第" << this->m_Index << "晋级选手信息如下" << endl;

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
		cout << "选手编号: " << *it << "选手姓名: " << this->m_Speaker[*it].m_Name << "选手得分: " << this->m_Speaker[*it].m_Score[this->m_Index-1] << endl;
	}
	cout << endl;
	system("pause");
}

void SpeechManager::StartSpeech()
{
	//第一轮
	//1.抽签
	this->SpeechDraw();

	//2.比赛
	this->SpeechContest();
	//3.保存晋级结果
	this->SpeechShow();

	this->m_Index++;
	//第二轮
	//1.抽签
	this->SpeechDraw();


	//2.比赛
	this->SpeechContest();

	//3.保存最终结果
	this->SpeechShow();
	//保存到文件
	this->SpeechSave();

	cout << "本届比赛结束" << endl;
	system("pause");
	system("cls");
}

void SpeechManager::SpeechLoad()
{
	ifstream ifs("speech.csv",ios::in);

		
	if (!ifs.is_open())
	{
		this->Fileisempty = true;
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件不存在" << endl;
		this->Fileisempty = true;
		ifs.close();
		return;
	}

	//走到这步表示文件不为空
	this->Fileisempty = false;
	ifs.putback(ch);  //把一开始读的文件结尾放回去


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
		cout << "第" << i + 1 << "届" <<
			"冠军编号" << this->m_Recore[i][0] << " 得分: " << this->m_Recore[i][1] << " "
			<< "亚军编号" << this->m_Recore[i][2] << "得分: " << this->m_Recore[i][3] << " "
			<< "季军编号" << this->m_Recore[i][4] << "得分: " << this->m_Recore[i][5] << endl;
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
	cout << "记录保存完毕" << endl;
}


void SpeechManager::SpeechDraw()
{
	cout << "第 <<" << this->m_Index << ">>轮比赛正在抽签" << endl;
	cout << "抽签结果如下......" << endl;
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