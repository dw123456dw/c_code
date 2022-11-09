#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <string>
#include <algorithm>
#include <deque>
#include <numeric>
#include <fstream>

class SpeechManager
{
public:

	SpeechManager();

	void Show_Menu();

	~SpeechManager();

	//初始化
	void Init();

	//创建12名选手
	void CreatSpeaker();

	//开始比赛
	void StartSpeech();

	//抽签
	void SpeechDraw();

	//比赛
	void SpeechContest();

	//显示得分
	void SpeechShow();

	//保存到文件
	void SpeechSave();

	//读取文件
	void SpeechLoad();

	//往届信息
	map<int, vector<string>> m_Recore;

	//显示往届记录
	void ShowRecore();

	bool Fileisempty;

	//选手编号
	vector<int> v1;

	//晋级选手编号
	vector<int> v2;

	//前三名
	vector<int> vVictory;

	//用map是因为选手编号不能相同
	map<int, Speaker> m_Speaker;

	//记录比赛轮数
	int m_Index;
};
