#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
	//二维数组
	//int a[3][4] = { 0 };
	//0 0 0 0 
	//0 0 0 0
	//0 0 0 0
	//arr[0][i] 表示第一行有i个元素
	//arr[1][i] 表示第二行有i个元素
	//arr[2][i] 表示第三行有i个元素
	//printf("%d\n", sizeof(a)); // 48 3*4*4
	//printf("%d\n", sizeof(a[0][0]));//4 第一行第一个的元素。
	//printf("%d\n", sizeof(a[0])); //16  表示第一行，里面有四个元素
	//printf("%d\n", sizeof(a[0] + 1)); //4 a[0]表示第一行，没有单独放到sizeof，数组名表示首元素地址，a[0]就是第一行的首元素地址，+1，跳过一个整形到首元素第二个地址
	//printf("%d\n", sizeof(*(a[0] + 1))); // 4
	//printf("%d\n", sizeof(a + 1)); // 4/8 a代表首元素的地址，没有取地址，整个第一行就是它的地址，+1，跳到下一行。但它还是地址，地址就是4/8个字节
	//printf("%d\n", sizeof(*(a + 1))); //16 整个第二行
	//printf("%d\n", sizeof(&a[0] + 1)); // 4/8
	//printf("%d\n", sizeof(*(&a[0] + 1))); //16 第一行的地址，+1跳到第二行
	//printf("%d\n", sizeof(*a)); // 16
	//printf("%d\n", sizeof(a[3])); // 16
	//return 0;
//}




//指针笔试题：
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}




//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}



//笔试题3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}



//笔试题4
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) }; // 注意这里是大括号里面是逗号表达式
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}


//笔试题5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a; // a首元素地址
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}


//笔试题6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);//	取地址，+1，跳过整个数组
//	int *ptr2 = (int *)(*(aa + 1)); // aa没有单独放在sizeof里面，arr代表首元素地址，二维数组，首元素地址是它的第一行。
//									//第一行加1，跳过第二行。6的地址。解引用就是6，本身就是个整形。这里再强制转换为int* 是迷惑行为
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}



//笔试题7
//#include <stdio.h>
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}



//笔试题8
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}


