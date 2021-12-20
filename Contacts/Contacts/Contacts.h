#include<stdio.h>
#include<string.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_PHONE 12
#define MAX_ADDER 20
//定义通讯录
//通讯录
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


//初始化通讯录
void InitContacts(contacts * con);

//添加联系人  
void addContact(contacts * con);

//打印联系人
void print(contacts * con);

//删除联系人
void delContact(contacts * con);

//查找联系人

void searchContact(contacts * con);

//修改联系人
void modifyContact(contacts * con);

