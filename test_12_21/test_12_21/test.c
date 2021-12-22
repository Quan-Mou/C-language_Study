#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//
////#### 常见的动态内存错误
////
////	1. 对NULL指针的解引用
////		2. 对动态开辟的空间越界访问
////		3. 对非动态使用的空间free释放
////		- 这时候程序会崩溃
////		4. 使用free释放动态开辟内存的一部分
////		5. 对同一块动态开辟的内存多次释放
////		6. 动态内存空间忘记释放（内存泄漏）
//	int *p = (int *)malloc(100);
//	int a = 10;
//	int *pa = &a;
//	
//	//free(p);
//	//free(pa); // 非动态内存开辟的空间不能free
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	p++;
//	//}
//	//free(p); // 这时候p往后移动了10个元素，不在代表首元素地址，释放一部分程序也会崩溃的
//
//	//free(p);
//	//free(p); // 对同一块动态内存多次释放，程序崩溃
//	//p = NULL; // 在释放内存内存空间后，记得把它置为NULL
//
//	return 0;
//}


//四个经典的笔试题

//题目1.

//错误代码：
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL; 
//	GetMemory(str); 
//	strcpy(str, "hello world");
//	printf(str);
//	// 问题1.这里传入的是变量不是地址，只有数组名才代表首元素地址，既然不是地址，上面是一份临时拷贝，改变了		上面并不会影响str
//	// 问题2.使用了动态开辟的内存没有释放
//}

//改：1
//char*  GetMemory(char **p)
//{
//	return *p = (char *)malloc(100); // 二级指针解引用=str
//	//函数里面的变量作用域是出了函数就销毁 ，但是这里是动态开辟的空间，是存放在堆区的，需要由程序员手动释放
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(&str); // 这里传地址，形参就要用二级来接收
//	strcpy(str, "hello world");
//	printf(str);  // 这种输出方式 和 printf("hello world") 本质上是一样的;
//	free(str);
//	str = NULL;
//}

//改：2
//void  GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//	
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str); 
//	strcpy(str, "hello world");
//	printf(str); 
//	free(str);
//	str = NULL;
//
//}
//int main()
//{
//	Test();
//	return 0;
//}



////题目2：
//char *GetMemory(void)
//{
//	//局部变量 - 存在栈区 有自己的作用域，出了函数就销毁了。
//	char p[] = "hello world";
//	return p; 
//}
//void Test(void)
//{
//	char *str = NULL;
//	// 没能放到str里面，str就可能是野指针，或是一些随机数
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//题目3：
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//基本没什么问题： 因为是动态开辟的最后需要释放一下
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//题目4
//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str); // 这里就释放了
//	//找不到str，str是一个野指针
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

//柔性数组
//也许你从来没有听说过柔性数组（flexible array）这个概念，但是它确实是存在的。
//C99 中，结构中的最后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员。

//struct s {
//	int i;
//	int arr[0]; // 柔性数组成员
//};

//有些编译器会报错无法编译可以改成
//struct s {
//	int i;
//	int arr[]; // 柔性数组成员
//};
//int main()
//{
//	printf("%d", sizeof(struct s));
//}

//柔性数组的特点：
//结构中的柔性数组成员前面必须至少一个其他成员。
//sizeof 返回的这种结构大小不包括柔性数组的内存。
//包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小。

//使用柔性数组
//typedef struct s
//{
//	int i;
//	int arr[]; 
//}type_a;
//int main()
//{
//	type_a * p = (type_a *)malloc(sizeof(struct s)+100*sizeof(int));
//	p->i = 100;
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		p->arr[i] = i;
//	}
//	//arr获得了100个连续存放整型的空间
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//}


//柔性数组的优势
//上面的代码还可以设计为：
typedef struct s
{
	int i;
	int *p;
}type_a;

int main()
{
	
	type_a * p = (type_a *)malloc(sizeof(type_a));
	p->i = 100;
	p->p = (int *)malloc(p->i*sizeof(int));

	//业务处理
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		p->p[i] = i;
	}
	
	//释放
	free(p->p);
	p->p = NULL;
	free(p);
	p = NULL;
	return 0;
}


