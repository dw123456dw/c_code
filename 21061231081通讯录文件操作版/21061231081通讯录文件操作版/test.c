#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void menu()
{
	printf("***************************************************\n");
	printf("**********   1.add         2.del     **************\n");
	printf("**********   3.search      4.modify  **************\n");
	printf("**********   5.show        6.sort    **************\n");
	printf("**********   7.save        0.exit    **************\n");
	printf("***************************************************\n");
}
int main()
{
	int input = 0;
	struct contact con;//con是通讯录包含data指针，size，capacit
	initcontact(&con);
	do
	{
		menu();
		printf("请选择:");
		scanf("%d",&input);
		switch(input)
		{
		case add:
			addcontact(&con);
			break;
		case del:
			delcontact(&con);
			break;
		case search:
			searchcontact(&con);
			break;
		case modify:
			modifycontact(&con);
			break;
		case show:
			showcontact(&con);
			break;
		case sort:
			break;
		case save:
			savecontact(&con);
			break;
		case 0:
			//销毁通讯录
			savecontact(&con);
			destorycontact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误: \n");
			break;
		}
	} while (input);
	return 0;
}