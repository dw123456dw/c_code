#include "workerManager.h"

WorkManager::WorkManager()
{
	ifstream ifs;
	ifs.open("account.txt",ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;

		this->EmpNum = 0;
		this->m_EmpArray = NULL;
		this->IsEmpty= true;
		return;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "����Ϊ��" << endl;

		this->EmpNum = 0;
		this->m_EmpArray = NULL;
		this->IsEmpty = true;
		ifs.close();
		return;
	}
	int num = this->getnum();
	//cout << "ְ������Ϊ" << num << endl;
	this->EmpNum = num;
	//��������
	this->m_EmpArray = new Worker*[this->EmpNum];
	//���ļ����ݴ浽������
	this->InitEmp();
}
void WorkManager::m_show()
{
	if (this->IsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
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
	cout << "������Ҫ��ӵ�����" << endl;
	int addemp;
	cin >> addemp;

	if (addemp>0)
	{
		//���
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

			cout << "�������" << i + 1 << "����ְ�����: " << endl;
			cin >> ID;
			cout << "�������" << i + 1 << "����ְ������: " << endl;
			cin >> Name;
			cout << "��ѡ��ְ����λ: " << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
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
		cout << "�ɹ����" << addemp << "����ְ��" << endl;
		this->save();
	}
	else
	{
		cout << "�������" << endl;
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
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "������ɾ����ְ�����" << endl;

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
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ��ְ��������" << endl;
		}
	}
	system("pause");
	system("cls");
}
void WorkManager::Mod_Emp()
{
	if (this->IsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "�������޸�ְ�����" << endl;

		int ID;
		cin >> ID;
		int index = this->IsExist(ID);

		if (index!=-1)
		{
			delete this->m_EmpArray[index];

			int newID = 0;
			string newName="";
			int newdId = 0;

			cout << "�鵽" << ID << "��Ա��,��������ְ����:  " << endl;
			cin >> newID;
			cout << "������������: " << endl;
			cin >> newName;
			cout << "��ѡ���λ: " << endl;
			cout << "1.ְ�� " << endl;
			cout << "2.���� " << endl;
			cout << "3.�ϰ� " << endl;
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
			cout << "�޸ĳɹ�" << endl;
		}
		else
		{
			cout << "���޴���" << endl;
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
		cout << "�ļ�Ϊ�ջ��¼������" << endl;
	}
	else
	{
		cout << "���������ְ�����" << endl;
		int ID;
		cin >> ID;

		int index = IsExist(ID);
		if (index!=-1)
		{
			cout << "���ҳɹ�" << endl;
			this->m_EmpArray[index]->ShowInfo();
		}
		else
		{
			cout << "���޴���" << endl;
		}
	}
	system("pause");
	system("cls");
}
void WorkManager::Sort_Emp()
{
	if (this->IsEmpty)
	{
		cout << "�ļ�Ϊ�ջ��¼������" << endl;
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
		cout << "����ɹ�,���Ϊ" << endl;
		this->save();
		this->m_show();
	}
}
void WorkManager::Clean_Emp()
{
	cout << "ȷ�����?" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.�˳�" << endl;

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
		cout << "��ճɹ�" << endl;
	}

	system("pause");
	system("cls");

}

void WorkManager::Show_Menu()
{
	cout << "********  ��ӭʹ��ְ������ϵͳ  ********" << endl;
	cout << "*******     0.�˳�����ϵͳ      ********" << endl;
	cout << "*******     1.����ְ����Ϣ      ********" << endl;
	cout << "*******     2.��ʾְ����Ϣ      ********" << endl;
	cout << "*******     3.ɾ��ְ����Ϣ      ********" << endl;
	cout << "*******     4.�޸�ְ����Ϣ      ********" << endl;
	cout << "*******     5.����ְ����Ϣ      ********" << endl;
	cout << "*******     6.���ձ������      ********" << endl;
	cout << "*******     7.��������ĵ�      ********" << endl;
	cout << "**********��ӭʹ��ְ������ϵͳ**********" << endl;
	cout << endl;
}