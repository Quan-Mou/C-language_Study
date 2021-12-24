#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	char ch[10];
	int a;
	float b;
	
};
int main()
{
	//### 为什么使用文件
	//
	//	在前面写了一个通讯录案例，当我们运行通讯录的时候，添加，删除数据等操作时， 此时数据是存放在内存中的，当程序退出是，内存被回收，通讯录中的数据自然也就不存在，等下次运行通讯录，数据又得重新录入。
	//
	//		那如何在退出程序时，里面的数据如何保持持久化，只有当我们删除数据的时候，数据才不存在。这就涉及到了数据持久化的问题，一般数据持久化的方法有：1.把数据存放在磁盘中、2.存放数据在数据库中等方式。
	//
	//### 什么是文件
	//
	//		磁盘中的文件是文件。电脑在重启后文件依然在。
	//
	//		但在程序设计中，一般谈的文件有两种：1.程序文件、2.数据文件（从文件功能的角度来分类）
	//
	//		1. 程序文件：包括源程序（后缀为.c） 目标文件（windows环境下后缀为obj），可执行程序（windows环境下 为.exe）。
	//		2. 数据文件：文件的内容不一定是程序，而是程序运行时读或写入的数据，将数据显示到显示器上。
	//
	//		其实有时候我们会把信息输出到磁盘上，当需要的时候再从磁盘上把数据读取到内存中使用，这里处理
	//		的就是磁盘上文件。
	//
	//### 文件名
	//
	//		一个文件要有唯一的标识性，以便用户识别和引用，文件名包含三部分：1.文件路径2.文件标识名3.文件后缀
	//
	//		例如：`E:\WEB_programs_C_programs\C_programs\code\text.c`
	//
	//		为了方便起见，文件标识常被称为**文件名**
	//
	//### 文件的关闭和打开
	//
	//##### 文件指针
	//
	//		缓冲文件系统中，关键的概念是“文件类型指针”，简称“文件指针”
	//
	//		每个被使用的文件都在内存区开辟了一个相应的文件信息区，用来存放文件的相关信息（如文件名，文件状态和文件当前的位置等）。这些信息是保存在一个结构体变量中的。该结构体变是由系统声明的，取名 **FILE**（大概说系统声明了一个结构体，类型重定义为 FILE）。
	//
	//		~~~c
	//	struct _iobuf {
	//		char *_ptr;
	//		int  _cnt;
	//		char *_base;
	//		int  _flag;
	//		int  _file;
	//		int  _charbuf;
	//		int  _bufsiz;
	//		char *_tmpfname;
	//	};
	//	typedef struct _iobuf FILE;
	//	~~~
	//
	//		不同的C编译器的FILE类型包含的内容不完全相同，但是大同小异。
	//
	//		每当打开一个文件，系统都会根据这个文件的情况自动创建一个FILE结构的变量，并填充其中的信息，使用者不必关心细节。
	//
	//		一般都是通过FILE的指针来维护这个FILE结构的变量，这样使用起来更加方便。
	//
	//		创建一个FILE* 的指针变量

	//FILE* pf; // 文件指针变量 

	//文件的打开和关闭
	//ANSIC 规定使用fopen函数来打开文件，fclose来关闭文件
	//FILE* pf = fopen("test.txt","r");
	// //FILE* pf = fopen("E:\\WEB_programs_C_programs\\C_programs\\code\\test_12_22\\test.txt","r"); 文件名也可以以路径的方式
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	////关闭文件
	//fclose(pf);
	//pf = NULL;


	//写文件
	//FILE* pf = fopen("test.dat", "w");  // 如果没有test.dat这个文件它会自动创建一个
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	//printf("write FIle success!");
	////关闭文件
	//fclose(pf);
	//pf = NULL;


	//FILE * pFile;
	////打开文件
	//pFile = fopen("test.dat", "w");
	////文件操作
	//if (pFile != NULL)
	//{
	//	//写入 pFile这个文件流
	//	fputc("z", pFile);
	//	fputc("q", pFile);
	//	fputc("h", pFile);
	//	//关闭文件
	//	fclose(pFile);
	//}


	//一行读
	//FILE * pf = fopen("test.dat", "r");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	//int ret = ret = fputs("nihaoa\n", stdout);


	//一行写
	//FILE * pf = fopen("test.dat", "w");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	//fputs("hhhhh\n", pf); // 打开test.dat 会发现写入了hhhhh
	//fputs("wwwwww", pf); // 如果写入的文件需要换行加 \0

	//fscanf&&fprintf
//struct S s = { "welcome", 10, 3.333333 };
	struct S s = {0};
	FILE * pf = fopen("test.dat", "r");
	//FILE * pf = fopen("test.dat", "w");

	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//写入数据
	//fprintf(pf, "%s %d %f", s.ch, &(s.a), &(s.b));

	//读数据
	//fscanf(pf, "%s %d %f", s.ch, &(s.a), &(s.b));


	fscanf(pf, "%s %d %f", s.ch, &(s.a), &(s.b));
	fprintf(stdout, "%s %d %f", s.ch, &(s.a), &(s.b));
	return 0;
}

