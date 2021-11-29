#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//void test(char* c)
//{
//	printf("%c\n", *c);
//}
//void print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	
//	char ch = 'w';
//	//一级指针传参
//	test(&ch);
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* pa = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}



//void print1(int** arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (**arr)+i);
//	}
//}
//void print2(char ** s)
//{
//	printf("%c", **s);
//}
//int main()
//{
//	
//	//二级指针传参
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *pa = arr;
//	int* *paa = &pa;
//	print1(paa,sz);
//
//	char s = 'n';
//	char* ps =&s;
//	print2(&ps);
//
//	int* arr[10];
//	//print3(char **)
//	//print3(arr); //可以
//	return 0;
//}



//函数指针
//int test(int x ,int y )
//{
//	return x + y;
//}
//int main()
//{
//	//如果还是数组指针的表示形式：
//	int(*a)[10]; // 
//
//	//函数指针如何表示？：
//	int (*pt)(int,int) = &test; // pt是一个指针，指向一个函数（函数有两个参数是int型），函数返回值是int
//	printf("%p \n", pt);
//
//	//函数名 == &函数名
//	printf("%p == %p\n", test, &test); // 它们的含义是一模一样的
//
//	int ret1= (*pt)(10, 20);
//	int ret2 = pt(10, 20); // pt == *pt
//	int ret3 = test(10, 20);
//	printf("%d ", ret1);
//	printf("%d ", ret2);
//	printf("%d ", ret3);
//	//*pt和pt是一样的，这里的*只是摆设，为了便于理解可以加上*
//
//	//阅读分析下面的代码：
//	//代码1
//	(*(void(*)())0)();  
//	//函数无参，返回类型是void，对0进行强制类型转换，被解释为一个函数地址
//	//对0进行解引用，调用0地址的函数
//	//代码2
//	void(*signal(int, void(*)(int)))(int);
//	
//
//	return 0;
//}




//int  Add(int x,int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	//函数指针数组
//	//函数指针数组 - 存放函数指针的数组
//	//如何表示： 
//	int(*pa[2])(int, int) = {Add,sub}; // 如何拆分: pa[2]先结合，是数组，出掉它们就是类型，函数指针数组
//	//pa就是函数指针数组
//	int ret1 = pa[0](10, 20);
//	int ret2 = pa[1](30,20);
//	return 0;
//}





//函数指针数组的使用
//void menu()
//{
//	printf("******  1.add    2.Sub  *********\n");
//	printf("******  3.Mul    4.Div  *********\n");
//	printf("*********   0.exit   ************\n");
//	printf("*********************************\n");
//
//}
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	//计算器：计算整形变量的加减乘除
//	do{
//		int x = 0;
//		int y = 0;
//		
//		int ret = 0;
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 0:
//			printf("退出程序\n");
//			break;
//		case 1:
//			printf("请选择两个操作数>:\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x,y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请选择两个操作数>:\n");
//			scanf("%d %d", &x, &y);
//			 ret = Sub(x,y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请选择两个操作数>:\n");
//			scanf("%d %d", &x, &y);
//			 ret = Mul(x,y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请选择两个操作数>:\n");
//			scanf("%d %d", &x, &y);
//			 ret = Div(x,y);
//			printf("%d\n", ret);
//			break;
//		default: 
//			printf("输入有效数字\n");
//			break;
//		}
//	} while (input);
//	//以上代码冗余过多，需要改进（使用函数指针数据：）
//	return 0;
//}




////函数指针数组改进计算器
//void menu()
//{
//	printf("******  1.add    2.Sub  *********\n");
//	printf("******  3.Mul    4.Div  *********\n");
//	printf("*********   0.exit   ************\n");
//	printf("*********************************\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do {
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			printf("请选择两个操作数:>\n");
//			scanf("%d %d", &x, &y);
//			int(*pcalc[5])(int,int) = { NULL,Add, Sub, Mul,Div };// 数组小标是0开始的，但是这里的0是退出游戏，给第一个为空指针
//			int ret = (pcalc[input])(x, y);  // 通过下标找到一个元素，这个元素恰好是一个函数的地址，然后去调用这个地址对应的函数。好像是一个跳板的作用，这样的数组经常被称为转移表（这个概念在《C和指针》中有提到）
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		 else
//		{
//			 printf("请选择合理的数字\n");
//		}
//	} while (input);
//	return 0;
//}


//void text()
//{
//	
//}
//int main()
//{
//	//函数指针数组的指针
//	text();
//	void (*pt)() = &text; //函数指针
//	void(*pta[1])();// 函数指针数组
//	void (*(*patp)[])() = &pta; // 指向函数指针数组的指针
//
//	return 0;
//}

void menu()
{
	printf("******  1.add    2.Sub  *********\n");
	printf("******  3.Mul    4.Div  *********\n");
	printf("*********   0.exit   ************\n");
	printf("*********************************\n");

}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x*y;
}
int Div(int x, int y)
{
	return x / y;
}
int calc(int (*pf)(int,int))
{
	int x = 0;
	int y = 0;
	printf("请选择两个操作数>:\n");
	scanf("%d %d", &x, &y);
	return (pf)(x, y); // 传入不同的函数指针调用不同的函数
}
int main()
{
	//回调函数
	//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一
	//个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该
	//函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或
	//条件进行响应。

	//通过把函数指针作为参数传入一个函数里，在这个函数调用传过来的地址(也就是调用函数) -回调函数
	int input = 0;
	//计算器：计算整形变量的加减乘除
	do{

		int ret = 0;
		menu();
		printf("请选择>:");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("退出程序\n");
			break;
		case 1:
			ret = calc(Add); // 传入函数名就是传入地址
			printf("%d\n", ret);
			break;
		case 2:
			ret = calc(Sub);
			printf("%d\n", ret);
			break;
		case 3:
			ret = calc(Mul);
			printf("%d\n", ret);
			break;
		case 4:
			ret = calc(Div);
			printf("%d\n", ret);
			break;
		default:
			printf("输入有效数字\n");
			break;
		}
	} while (input);
	return 0;
}





