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

	//ͨѶ¼
	contacts con;

	int input = 0;
	//��ʼ��ͨѶ¼
	InitContacts(&con);
	do {
		menu();
		printf("��ѡ��>:");
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
			//����ͨѶ¼
			//������ʵ�֣�����˳����򣬱�������˵���Ϣ
			destroyContact(&con);
			printf("�˳�����\n");
			break;
		default:                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
			break;
		}
	} while (input);
}