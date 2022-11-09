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

	//��ʼ��
	void Init();

	//����12��ѡ��
	void CreatSpeaker();

	//��ʼ����
	void StartSpeech();

	//��ǩ
	void SpeechDraw();

	//����
	void SpeechContest();

	//��ʾ�÷�
	void SpeechShow();

	//���浽�ļ�
	void SpeechSave();

	//��ȡ�ļ�
	void SpeechLoad();

	//������Ϣ
	map<int, vector<string>> m_Recore;

	//��ʾ�����¼
	void ShowRecore();

	bool Fileisempty;

	//ѡ�ֱ��
	vector<int> v1;

	//����ѡ�ֱ��
	vector<int> v2;

	//ǰ����
	vector<int> vVictory;

	//��map����Ϊѡ�ֱ�Ų�����ͬ
	map<int, Speaker> m_Speaker;

	//��¼��������
	int m_Index;
};
