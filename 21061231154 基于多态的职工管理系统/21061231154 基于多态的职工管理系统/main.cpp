#include "workerManager.h"
#include "Boss.h"
#include "Employee.h"
#include "Manager.h"
//void test()
//{
//	Worker* Worker = NULL;
//	Worker = new Employee(1, "张三",1);
//	Worker->ShowInfo();
//
//	delete Worker;
//	Worker = new Manager(2,"李四",2);
//	Worker->ShowInfo();
//	delete Worker;
//	
//	Worker = new Boss(3,"丁伟",3);
//	Worker->ShowInfo();
//	delete Worker;
//}
int main()
{
	//test();
	WorkManager w;
	w.Show_Menu();
	int chose=1;
	while (chose)
	{
		cout << "请选择" << endl;
		cin >> chose;
		switch (chose)
		{
		case 0:
			cout << "退出系统成功" << endl;
			break;
		case 1:
			w.AddEmp();
			break;
		case 2:
			w.m_show();
			break;
		case 3:
			w.Del_Emp();
			break;
		case 4:
			w.Mod_Emp();
			break;
		case 5:
			w.Find_Emp();
			break;
		case 6:
			w.Sort_Emp();
			break;
		case 7:
			w.Clean_Emp();
			break;
		default:
			cout << "输入错误" << endl;
			break;
		}
	}

	return 0;
}

