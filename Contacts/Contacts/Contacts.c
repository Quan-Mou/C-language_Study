#define _CRT_SECURE_NO_WARNINGS 
#include "Contacts.h"

//��ʼ��ͨѶ¼
void InitContacts(contacts * con)
{
	memset(con, 0, sizeof(contacts));
}


//�����ϵ��
void addContact(contacts * con)
{
	//printf("����  ����  �Ա�  �绰  ��ַ\n"); 
	printf("����>:");
	scanf("%s", con->data[con->sz].name);
	
	printf("����>:");
	scanf("%d", &(con->data[con->sz].age));
	printf("�Ա�>:");
	scanf("%s", con->data[con->sz].sex);
	printf("�绰>:");
	scanf("%s", con->data[con->sz].phone);
	printf("��ַ>:");
	scanf("%s", con->data[con->sz].addr);
	con->sz++;
	printf("��ӳɹ�\n");
}

//��ӡ��ϵ��
void print(contacts * con)
{
	int i = 0;
	//��ӡ��ʽ
	printf("%-15s\t %-15s\t %-10s\t %-10s\t %-15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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


//�������ֺ���
int findByName(contacts * con,char name[])
{
	//���Һ���
	//�������������־ͷ��������±꣬���û���ҵ��ͷ���-1
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

//ɾ����ϵ��
void delContact(contacts * con)
{
	char name[20] = { 0 };
	int i = 0;
	printf("������Ҫɾ��������:>");
	scanf("%s",name);
	//���ɾ����1.��������ɾ��
	//�Ȳ�����ϵ���б���û��������֣��ٽ�����ɾ��������������
	int ret = findByName(con,name);
	//ɾ��
	if (ret != -1)
	{
		for (i = ret; i < con->sz; i++)
		{
			//ǰ��ĸ���Ҫɾ����Ԫ��
			con->data[i] = con->data[i + 1];
		}
		con->sz--;
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("û�������ϵ��\n");
	}
}


//������ϵ��
void searchContact(contacts * con)
{
	char name[20] = { 0 };
	printf("������Ҫ���ҵ�����:>");
	scanf("%s", name);
	int ret = findByName(con, name);
	if (ret != -1)
	{
		int i = 0;
		printf("%-15s\t %-15s\t %-10s\t %-10s\t %-15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("û���ҵ������ϵ��\n");
	}
}

//�޸���ϵ��
void modifyContact(contacts * con)
{
	char name[20] = { 0 };
	printf("������Ҫ�޸ĵ�����:>");
	scanf("%s", name);
	int ret = findByName(con, name);
	if (ret != -1)
	{
		//�򵥵ģ�������Ҫ�޸ĵ��±꣬�����޸Ļ�¼������±����������
		//����������ֺ�����Ƶķǳ���������˶��
		printf("����>:");
		scanf("%s", con->data[ret].name);
		printf("����>:");
		scanf("%d", &(con->data[ret].age));
		printf("�Ա�>:");
		scanf("%s", con->data[ret].sex);
		printf("�绰>:");
		scanf("%s", con->data[ret].phone);
		printf("��ַ>:");
		scanf("%s", con->data[ret].addr);
		printf("�޸ĳɹ���\n");
	}
	else
	{
		printf("û���ҵ������ϵ��\n");
	}
}