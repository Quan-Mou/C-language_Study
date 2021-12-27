#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	printf("%s\n", __FILE__); // 当前文件源文件的路径
//	printf("%d\n", __LINE__); // 文件行号
//	printf("%s\n", __DATE__); // 文件被编译的日期
//	printf("%s\n", __TIME__); // 文件被编译的时间
//	//printf("%d\n", __STDC__); // 如果编译器遵循ANSI C，其值为1，否则未定义
//	return 0;
//}

////1.
//#define DATA 100
////2. 
//#define reg register // reg就是register 相当于创建一个别名
////3.
//#define for_ever for(;;)
////4. 如果定义的内容太对需要换行，那么每行的最后（除了最后一行）都应该加上一个反斜杠（续行符）
//#define DEBUG_PRINT printf("hh,\
//							haha, \
//							heihei")
//
//
//int main()
//{
//	reg int a = 10;
//	//for_ever; // 死循环
//
//	return 0;
//}

//#define TEST 2;
//int main()
//{
//	int a = 10;
//	if (a)
//		a = TEST;
//	else
//		a = 0;
//	return 0;
//}


//#define MAX(x) x*x
//#define MIN(y) y*y  // 8+1*8+1  
//#define MIN(y) (y)*(y) 
//
//int main()
//{
//	//参数列表的左括号必须与name紧邻。如果两者之间有任何空白存在，参数列表就会被解释为stuff的一部分。
//	printf("%d\n", MAX(5));
//	//注意：
//	printf("%d\n", MIN(8+1)); // 这把8+1传入它不会进行运算，进行替换，然后根据优先级进行运算，只要理解#define的本质那么问题就不大
//	printf("%d\n", MIN(8 + 1)); // 不要吝啬括号
//	return 0;
//}


//#define PRINT(a) printf("the value of "#a" is %d\n",a)
//int main()
//{	
//	//例如：the value of xx is %d  这里的xx是接收的参数字符， %d是这个参数打印类型
//	//输出：the value of a is 10
//	//使用#把参数插入字符串
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	PRINT(a);
//	PRINT(b);
//	PRINT(c);
//	return 0;
//}

//##

//#define PRINTF(x,y) x##y 
//int  main()
//{
//
//	int vai00 = 13;
//	printf("%d", PRINTF(vai, 00));
//	return 0;
//}


//#define MAX 100
//int main()
//{
//
//	printf("%d\n", MAX);
//	#undef MAX
//	printf("%d\n", MAX); // 这里报错，因为上面移除了MAX，因此MAX未定义
//	return 0;
//}


//条件编译
#define __DEBUG__ 

#define MIN  0
#define REMOVE 1
int main()
{
	//1.
	#ifdef __DEBUG__
	printf("只要定义了 __DEBUG__ 就能编译这条语句\n");
	#endif

	//2.多个分支的条件编译
	
	//下面的条件必须是常量表达式
#	if MIN
	printf("你好\n");
	#elif  REMOVE
	printf("我好\n");
	#else
	printf("他好\n");
	#endif

	//嵌套指令...
	return 0;
}