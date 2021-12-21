#define _CRT_SECURE_NO_WARNINGS

#include "Contacts.h"
void menu()
{
	printf("********************************************************************\n");
	printf("******************    1.add       2.del       **********************\n");
	printf("******************    3.search    4.modify    **********************\n");
	printf("******************    5.sort      6.print     **********************\n");
	printf("******************           0.exit           **********************\n");
	printf("********************************************************************\n");
}
int main()
{
	enum Options {
		EXIT,
		ADD,
		DEL,
		SEARCH,
		MODIFY,
		SORT,
		PRINT
	};

	//通讯录
	contacts con;

	int input = 0;
	//初始化通讯录
	InitContacts(&con);
	do {
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addContact(&con);
			break;
		case DEL:
			delContact(&con);
			break;
		case SEARCH:
			searchContact(&con);
			break;
		case MODIFY:
			modifyContact(&con);
			break;
		case SORT:
			break;
		case PRINT:
			print(&con);
			break;
		case EXIT:
			//销毁通讯录
			//后面再实现，如何退出程序，保存添加了的信息
			destroyContact(&con);
			printf("退出程序\n");
			break;
		default:                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
			break;
		}
	} while (input);
}