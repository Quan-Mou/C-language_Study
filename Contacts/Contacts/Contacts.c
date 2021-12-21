#define _CRT_SECURE_NO_WARNINGS 
#include "Contacts.h"

//初始化通讯录  静态版本
//void InitContacts(contacts * con)
//{
//	//memset(con, 0, sizeof(contacts));
//	memset(con->data, 0, sizeof(con->data));
//	con->sz = 0;
//}

//初始化通讯录  动态版本
void InitContacts(contacts * con)
{
	//默认可以存放三个联系人
	con->data = (PersonInfo *)malloc(DEF_Person*sizeof(PersonInfo));
	if (con->data == NULL)
	{
		perror("InitContacts");
		return;
	}
	con->capacity = DEF_Person;
	con->sz = 0;
}


//添加联系人  静态版本
//void addContact(contacts * con)
//{
//	//printf("姓名  年龄  性别  电话  地址\n"); 
//	printf("姓名>:");
//	scanf("%s", con->data[con->sz].name);
//	
//	printf("年龄>:");
//	scanf("%d", &(con->data[con->sz].age));
//	printf("性别>:");
//	scanf("%s", con->data[con->sz].sex);
//	printf("电话>:");
//	scanf("%s", con->data[con->sz].phone);
//	printf("地址>:");
//	scanf("%s", con->data[con->sz].addr);
//	con->sz++;
//	printf("添加成功\n");
//}

//添加联系人 动态版本
void addContact(contacts * con)
{
	//容量满了要增容
	if (con->sz == con->capacity)
	{
		PersonInfo *ptr = (PersonInfo *)realloc(con->data, (con->capacity + INCREASE)* sizeof(PersonInfo));
		if (ptr != NULL)
		{
			con->data = ptr;
			con->capacity += INCREASE;
			printf("增容成功\n");
		}
		else
		{
			perror("addContact");
			printf("增容失败\n");
			return;
		}
	}
	printf("姓名>:");
	scanf("%s", con->data[con->sz].name);

	printf("年龄>:");
	scanf("%d", &(con->data[con->sz].age));
	printf("性别>:");
	scanf("%s", con->data[con->sz].sex);
	printf("电话>:");
	scanf("%s", con->data[con->sz].phone);
	printf("地址>:");
	scanf("%s", con->data[con->sz].addr);
	con->sz++;
	printf("添加成功\n");
}

//打印联系人
void print(contacts * con)
{
	int i = 0;
	//打印格式
	printf("%-15s\t %-15s\t %-10s\t %-10s\t %-15s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < con->sz; i++)
	{
		printf("%-15s\t %-15d\t %-10s\t %-10s\t %-15s\n",
			con->data[i].name,
			con->data[i].age,
			con->data[i].sex,
			con->data[i].phone,
			con->data[i].addr
			);
	}
}


//查找名字函数
int findByName(contacts * con,char name[])
{
	//查找函数
	//如果找了这个名字就返回它的下标，如果没有找到就返回-1
	int i = 0;
	//1 2 3
	//0 1 2

	//0 < 2
	//1 < 2
	//2 <= 2
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(con->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//删除联系人
void delContact(contacts * con)
{
	char name[20] = { 0 };
	int i = 0;
	printf("请输入要删除的姓名:>");
	scanf("%s",name);
	//如何删除？1.根据名字删除
	//先查找联系人列表有没有这个名字，再进行是删除还是其他操作
	int ret = findByName(con,name);
	//删除
	if (ret != -1)
	{
		for (i = ret; i < con->sz; i++)
		{
			//前面的覆盖要删除的元素
			con->data[i] = con->data[i + 1];
		}
		con->sz--;
		printf("删除成功\n");
	}
	else
	{
		printf("没有这个联系人\n");
	}
}


//查找联系人
void searchContact(contacts * con)
{
	char name[20] = { 0 };
	printf("请输入要查找的姓名:>");
	scanf("%s", name);
	int ret = findByName(con, name);
	if (ret != -1)
	{
		int i = 0;
		printf("%-15s\t %-15s\t %-10s\t %-10s\t %-15s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = ret; i < con->sz; i++)
		{
			printf("%-15s\t %-15d\t %-10s\t %-10s\t %-15s\n",
				con->data[i].name,
				con->data[i].age,
				con->data[i].sex,
				con->data[i].phone,
				con->data[i].addr
				);
		}
	}
	else
	{
		printf("没有找到这个联系人\n");
	}
}

//修改联系人
void modifyContact(contacts * con)
{
	char name[20] = { 0 };
	printf("请输入要修改的姓名:>");
	scanf("%s", name);
	int ret = findByName(con, name);
	if (ret != -1)
	{
		//简单的，返回了要修改的下标，重新修改或录入这个下标里面的内容
		//这个查找名字函数设计的非常巧妙，复用了多次
		printf("姓名>:");
		scanf("%s", con->data[ret].name);
		printf("年龄>:");
		scanf("%d", &(con->data[ret].age));
		printf("性别>:");
		scanf("%s", con->data[ret].sex);
		printf("电话>:");
		scanf("%s", con->data[ret].phone);
		printf("地址>:");
		scanf("%s", con->data[ret].addr);
		printf("修改成功！\n");
	}
	else
	{
		printf("没有找到这个联系人\n");
	}
}

//销毁通讯录
void destroyContact(contacts * con)
{
	free(con->data);// 释放这个动态开辟的内容
	con->data = NULL;
	con->sz = 0;
	con->capacity = 0;
}