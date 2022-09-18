#include "workerManager.h"

WorkManager::WorkManager()
{
	ifstream ifs;
	ifs.open("account.txt",ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;

		this->EmpNum = 0;
		this->m_EmpArray = NULL;
		this->IsEmpty= true;
		return;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "数据为空" << endl;

		this->EmpNum = 0;
		this->m_EmpArray = NULL;
		this->IsEmpty = true;
		ifs.close();
		return;
	}
	int num = this->getnum();
	//cout << "职工人数为" << num << endl;
	this->EmpNum = num;
	//开辟数组
	this->m_EmpArray = new Worker*[this->EmpNum];
	//将文件数据存到数组中
	this->InitEmp();
}
void WorkManager::m_show()
{
	if (this->IsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}

	for (int i=0;i<this->EmpNum;i++)
	{
		this->m_EmpArray[i]->ShowInfo();
	}
	system("pause");
	system("cls");
}
int WorkManager::getnum()
{
	ifstream ifs;
	ifs.open("account.txt",ios::in);

	int ID;
	string Name;
	int dId;
	int num = 0;

	while (ifs>>ID && ifs>>Name && ifs>>dId)
	{
		num++;
	}
	ifs.close();
	return num;
}

WorkManager::~WorkManager()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		delete[]this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
void WorkManager::AddEmp()
{
	cout << "请输入要添加的人数" << endl;
	int addemp;
	cin >> addemp;

	if (addemp>0)
	{
		//添加
		int newsize = this->EmpNum + addemp;

		Worker** newspace = new Worker * [newsize];

		if (this->m_EmpArray!=NULL)
		{
			for (int i=0;i<this->EmpNum;i++)
			{
				newspace[i] = this->m_EmpArray[i];
			}
		}
		for (int i=0;i<addemp;i++)
		{
			int ID;
			string Name;
			int select;

			cout << "请输入第" << i + 1 << "个新职工编号: " << endl;
			cin >> ID;
			cout << "请输入第" << i + 1 << "个新职工姓名: " << endl;
			cin >> Name;
			cout << "请选择职工岗位: " << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> select;
			Worker* worker = NULL;

			switch (select)
			{
			case 1:
				worker = new Employee(ID,Name,1);
			case 2:
				worker = new Manager(ID, Name, 1);
			case 3:
				worker = new Boss(ID, Name, 1);
			default:
				break;
			}
			newspace[this->EmpNum + i] = worker;
		}
		delete []this->m_EmpArray;
		this->m_EmpArray = newspace;
		this->EmpNum = newsize;
		cout << "成功添加" << addemp << "个新职工" << endl;
		this->save();
	}
	else
	{
		cout << "输入错误" << endl;
	}
	system("pause");
	system("cls");
}

void WorkManager::save()
{
	ofstream ofs;
	ofs.open("account.txt",ios::out);

	for (int i=0;i<this->EmpNum;i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}
void WorkManager::InitEmp()
{
	ifstream ifs;
	ifs.open("account.txt",ios::in);

	int ID;
	string Name;
	int dId;
	int index=0;

	while (ifs>>ID && ifs>>Name && ifs>>dId)
	{
		Worker* worker = NULL;
		if (dId==1)
		{
			worker = new Employee(ID,Name,dId);
		}
		if (dId==2)
		{
			worker = new Manager(ID,Name,dId);
		}
		if (dId==3)
		{
			worker = new Boss(ID,Name,dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}
void WorkManager::Del_Emp()
{
	if (this->IsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入删除的职工编号" << endl;

		int ID;
		cin >> ID;

		int index = this->IsExist(ID);
		if (index!=-1)
		{
			for(int i=index;i<this->EmpNum-1;i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->EmpNum--;
			this->save();
			cout << "删除成功" << endl;
		}
		else
		{
			cout << "删除失败职工不存在" << endl;
		}
	}
	system("pause");
	system("cls");
}
void WorkManager::Mod_Emp()
{
	if (this->IsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入修改职工编号" << endl;

		int ID;
		cin >> ID;
		int index = this->IsExist(ID);

		if (index!=-1)
		{
			delete this->m_EmpArray[index];

			int newID = 0;
			string newName="";
			int newdId = 0;

			cout << "查到" << ID << "号员工,请输入新职工号:  " << endl;
			cin >> newID;
			cout << "请输入新名字: " << endl;
			cin >> newName;
			cout << "请选择岗位: " << endl;
			cout << "1.职工 " << endl;
			cout << "2.经理 " << endl;
			cout << "3.老板 " << endl;
			cin >> newdId;

			Worker* worker = NULL;
			switch (newdId)
			{
			case 1:
				worker = new Employee(newID,newName,newdId);
				break;
			case 2:
				worker = new Manager(newID, newName, newdId);
				break;
			case 3:
				worker = new Boss(newID, newName, newdId);
				break;
			default:
				break;
			}
			this->m_EmpArray[index] = worker;
			this->save();
			cout << "修改成功" << endl;
		}
		else
		{
			cout << "查无此人" << endl;
		}
	}
	system("pause");
	system("cls");
}

int WorkManager::IsExist(int ID)
{
	int index = -1;

	for (int i=0;i<this->EmpNum;i++)
	{
		if (this->m_EmpArray[i]->m_Id==ID)
		{
			index = i;
			break;
		}
	}
	return index;
}
void WorkManager::Find_Emp()
{
	if (this->IsEmpty)
	{
		cout << "文件为空或记录不存在" << endl;
	}
	else
	{
		cout << "请输入查找职工编号" << endl;
		int ID;
		cin >> ID;

		int index = IsExist(ID);
		if (index!=-1)
		{
			cout << "查找成功" << endl;
			this->m_EmpArray[index]->ShowInfo();
		}
		else
		{
			cout << "查无此人" << endl;
		}
	}
	system("pause");
	system("cls");
}
void WorkManager::Sort_Emp()
{
	if (this->IsEmpty)
	{
		cout << "文件为空或记录不存在" << endl;
	}
	else
	{
		for (int i=0;i<this->EmpNum;i++)
		{
			int max = i;
			for (int j=i+1;j<this->EmpNum;j++)
			{
				if (this->m_EmpArray[max]->m_Id>this->m_EmpArray[j]->m_Id)
				{
					max = j;
				}
			}
			if (i!=max)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[max];
				this->m_EmpArray[max] = temp;
			}
		}
		cout << "排序成功,结果为" << endl;
		this->save();
		this->m_show();
	}
}
void WorkManager::Clean_Emp()
{
	cout << "确认清空?" << endl;
	cout << "1.确认" << endl;
	cout << "2.退出" << endl;

	int select;
	cin >> select;

	if (select==1)
	{
		ofstream ofs("account.txt",ios::trunc);

		ofs.close();

		if (this->m_EmpArray!=NULL)
		{
			for (int i=0;i<this->EmpNum;i++)
			{
				if (this->m_EmpArray[i]!=NULL)
				{
					delete this->m_EmpArray[i];

				}

			}
			this->EmpNum = 0;
			delete[]this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->IsEmpty = true;
		}
		cout << "清空成功" << endl;
	}

	system("pause");
	system("cls");

}

void WorkManager::Show_Menu()
{
	cout << "********  欢迎使用职工管理系统  ********" << endl;
	cout << "*******     0.退出管理系统      ********" << endl;
	cout << "*******     1.增加职工信息      ********" << endl;
	cout << "*******     2.显示职工信息      ********" << endl;
	cout << "*******     3.删除职工信息      ********" << endl;
	cout << "*******     4.修改职工信息      ********" << endl;
	cout << "*******     5.查找职工信息      ********" << endl;
	cout << "*******     6.按照编号排序      ********" << endl;
	cout << "*******     7.清空所有文档      ********" << endl;
	cout << "**********欢迎使用职工管理系统**********" << endl;
	cout << endl;
}