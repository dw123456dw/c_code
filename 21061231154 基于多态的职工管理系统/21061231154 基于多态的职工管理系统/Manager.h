#pragma once
#include "Work.h"


class Manager :public Worker
{
public:
	//���캯��
	Manager(int ID, string Name, int dId);
	//��ʾְ����Ϣ
	virtual void ShowInfo();
	//��ȡ��������
	virtual string GetDeptName();
};
