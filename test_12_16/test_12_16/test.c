#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//联合体
//int main()
//{
//	//联合体也是一种特殊的自定义类型，特征是这些成员共用一块空间，所以也叫共用体
//
//	union u {
//		char c;
//		int i;
//	};
//	//union u 是一个联合体类型
//	union u u1; // 联合变量的定义
//	printf("%d", sizeof(u1));
//}



//联合的特点
//int main()
//{
//	union u {
//		char c;
//		int i;
//	};
//	union u u1 = {1};
//	printf("%p\n", &(u1.c)); //
//	printf("%p\n", &(u1.i)); // 
//	printf("%p\n", &u1); // 这三个地址是一样的
//
//	printf("%d\n", sizeof(u1.c));
//	printf("%d\n", sizeof(u1.i));
//	printf("%d\n", sizeof(u1)); // 4 共用体的大小怎么计算？
//	return 0;
//}



//联合大小的计算
//int main()
//{               
//
//	union u1 {
//		char c[6]; // 7
//		int i; // 4
//		//c是这个数组，有6个元素，是这个联合最大的成员，i是这个联合的最大对齐数，这个最大成员7不是最大对齐的整倍数，就要对齐到这个最大对齐数的整倍数，8
//		//当最大成员大小不是最大对齐数的整倍数的时候，就要对齐到最大对齐数的整倍数
//	};
//	union u2 {
//		short c[7]; // 总大小14，一个占两个字节，有7个。
//		int i; // 4  最大对齐数，最大成员不是最大对齐数的整倍数，要对齐到最大对齐数的整倍数，16
//	};
//	printf("%d ", sizeof(union u1));
//	printf("%d", sizeof(union u2));
//	return 0;
//}


//动态内存开辟

//int main()
//{
//	int model = 10; // 在栈区开辟4个字节
//	int render[10] = { 0 }; // 在栈区开辟10个int字节的连续空间
//
//	//但是上述的开辟空间的方式有两个特点：
//	//1.空间开辟的大小是固定的
//	//2.数组在声明的时候，必须指定数组长度，它所需要的内存在编译时分配
//	//但是对于空间的需求，不仅仅是上述的情况。有时候我们需要的空间大小在程序运行的时候才能知道，那数组的编译时开辟空间的方式就不能满足了。
//	//这时候就只能试试动态存开辟了。
//
//	int* p = malloc(10*sizeof(int)); // 动态开辟十个整型，因为它的返回值是void* 有的编译需要手动转换
//	
//	if (p == NULL)
//	{
//		//malloc 申请失败的情况
//		perror("malloc");
//		return 0;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//
//	free(p); // 释放
//	p = NULL;  // 置空
//	return 0;
//}


//2.calloc
//int main()
//{
//	int len = 10;
//	int *p = (int*)calloc(len, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 0;
//	}
//	//它这里已经帮我全部初始化为0？
//	//看看：
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//3.realloc
int main()
{
	int *p = malloc(10*sizeof(int));
	if (p == NULL)
	{
		perror("malloc");
	}
	int ptmp = NULL;
	ptmp = realloc(p, 10 * sizeof(int));
	//确保空间增量没有问题
	if (ptmp != NULL)
	{
		p = ptmp;
	}
	
	return 0;
}






