#pragma once
#include "Work.h"




class Employee :public Worker
{
public:
	//���캯��
	Employee(int ID,string Name,int dId);
	//��ʾְ����Ϣ
	virtual void ShowInfo();
	//��ȡ��������
	virtual string GetDeptName();

};