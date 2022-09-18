#pragma once
#include <iostream>
using namespace std;
#include "Work.h"
#include "Boss.h"
#include "Employee.h"
#include "Manager.h"
#include <fstream>


class WorkManager
{
public:
	//����
	WorkManager();
	//�˵�
	void Show_Menu();
	//ְ������
	int EmpNum;
	//����˵�����
	Worker** m_EmpArray;
	//�����
	void AddEmp();
	//д���ļ�
	void save();
	//�ж��ļ��Ƿ�Ϊ��
	bool IsEmpty;
	//��ȡ����
	int getnum();
	//��ʼ��
	void InitEmp();
	//��ʾְ��
	void m_show();
	//ɾ��ְ��
	void Del_Emp();
	//�ж�ְ���Ƿ����
	int IsExist(int ID);
	//�޸�ְ��
	void Mod_Emp();
	//����
	void Find_Emp();
	//����
	void Sort_Emp();
	//���
	void Clean_Emp();
	//����
	~WorkManager();
};
