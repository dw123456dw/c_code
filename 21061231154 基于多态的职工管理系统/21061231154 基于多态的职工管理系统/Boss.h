#pragma once
#include "Work.h"

class Boss :public Worker
{
public:
	//���캯��
	Boss(int ID, string Name, int dId);
	//��ʾְ����Ϣ
	virtual void ShowInfo();
	//��ȡ��������
	virtual string GetDeptName();
};
