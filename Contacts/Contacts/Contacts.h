#include<stdio.h>
#include<string.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_PHONE 12
#define MAX_ADDER 20
//����ͨѶ¼
//ͨѶ¼
typedef struct PersonInfo{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char phone[MAX_PHONE];
	char addr[MAX_ADDER];
	int sz;
}PersonInfo;

typedef struct Contacts {
	PersonInfo data[MAX];
	int sz;
}contacts;


//��ʼ��ͨѶ¼
void InitContacts(contacts * con);

//�����ϵ��  
void addContact(contacts * con);

//��ӡ��ϵ��
void print(contacts * con);

//ɾ����ϵ��
void delContact(contacts * con);

//������ϵ��

void searchContact(contacts * con);

//�޸���ϵ��
void modifyContact(contacts * con);

