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
	//构造
	WorkManager();
	//菜单
	void Show_Menu();
	//职工人数
	int EmpNum;
	//添加人的数组
	Worker** m_EmpArray;
	//添加人
	void AddEmp();
	//写入文件
	void save();
	//判断文件是否为空
	bool IsEmpty;
	//获取人数
	int getnum();
	//初始化
	void InitEmp();
	//显示职工
	void m_show();
	//删除职工
	void Del_Emp();
	//判断职工是否存在
	int IsExist(int ID);
	//修改职工
	void Mod_Emp();
	//查找
	void Find_Emp();
	//排序
	void Sort_Emp();
	//清空
	void Clean_Emp();
	//析构
	~WorkManager();
};
