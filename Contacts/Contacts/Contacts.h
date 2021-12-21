#include<stdio.h>
#include<string.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_PHONE 12
#define MAX_ADDER 20
#define DEF_Person 3 // Ĭ���ܴ�������ϵ��
#define INCREASE 2 //ÿ������2����ϵ��
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

//��̬�汾
//typedef struct Contacts {
//	PersonInfo data[MAX];
//	int sz;
//}contacts;

//��̬�汾
typedef struct Contacts {
	PersonInfo* data;
	int sz; 
	int capacity; // ����
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

//����ͨѶ¼
void destroyContact(contacts * con);