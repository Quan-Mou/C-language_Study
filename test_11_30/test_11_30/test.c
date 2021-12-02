#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//冒泡排序
//int main()
//{
//
//	int arr[] = { 2, 5, 1, 9, 10, 3, 11, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//里层循环
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	return 0;
//}





//void qsort(void *base, int num, int size, int(*cmp)(int* el, int* e2));
////void * -空指针，像一个垃圾桶什么类型的都可以往里面放。不能进行运算，也不能直接进行解引用
//
//// 第一个参数传需要排序的元素的起始地址
////第二个参数传元素个数
////第三个函数传元素大小单位字节
////第四个函数传一个函数指针，用什么方式排序（这个函数要自己实现）
//
//
//
//int sort_int(void *e1,void *e2)
//{
//	return *(int *)e1 - *(int *)e2;  //因为空指针不能直接进行解引用，所以需要进行强制转换
//}
//
////打印数组内容
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void text1()// 这里放的是排序整型数组函数
//{
//	//使用qsort排序整型类型
//	int arr[] = { 3, 5, 1, 10, 0, 2, 8, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), sort_int);
//	print_arr(arr, sz);
//} 
//
//
//
////使用qsort排序结构体类型
//struct s {
//	char name[20];
//	int age;
//};
//
//int stru_by__age(void *e1,void *e2)
//{
//	return ((struct s*)e1)->age - ((struct s*)e2)->age;
//}  
//int stru_by_name(void *e1, void *e2)
//{
//	return strcmp(((struct s*)e1)->name, ((struct s*)e2)->name);//两个字符串比较不能用><,要用strcmp()函数（而strcmp函数的返回值与这个函数的返回值是一样的）
//}
//
//struct s stu[] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 17 } };
//
//
//void text2()
//{
//	//使用qsort排序结构体类型
//	//struct s stu[] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 17 } };
//	int sz = sizeof(stu) / sizeof(stu[0]);
//	//qsort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), stru_by__age); // 按结构体年龄排序
//	qsort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), stru_by_name); // 按结构体年龄姓名排序
//}
//
//
////模拟实现qsort函数
//void Swap(char* e1,char* e2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}
//void bubble_sort(void *base,int sz,int width,int (*cmp)(void *el,void *e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{ 
//			//第一个元素和第二个元素
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0) // 升序
//			{
//				//交换
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width); // 一个字节一个字节交换
//			}
//		}
//	}
//}
//
//
//void text3()
//{
//	int arr[] = { 3, 1, 10, 6, 4, 8, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), sort_int); // 排序整型
//	bubble_sort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), stru_by_name); // 排序结构体
//
//}
//
//int main()
//{
//	text1(); // 使用qsrot函数排序整型数组
//
//	//text2(); // 使用qsort函数排序结构体
//
//	text3();// 模拟qsrot函数排序整型数组/结构体
//	return 0;
//}



int main()
{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a)); // 16
	//printf("%d\n", sizeof(a+0));// 4/8 // 32位是4,64位是8
 //	printf("%d\n", sizeof(*a));// 4
	//printf("%d\n", sizeof(a + 1)); //4/8 a不是单独放在sizeof里面所以代表首元素地址，首元素地址+1跳过一个元素，指向第二个元素的地址
	//printf("%d\n", sizeof(a[1])); //4


	//printf("%d\n", sizeof(&a));//4
	//printf("%d\n", sizeof(*&a));//16
	//printf("%d\n", sizeof(&a + 1)); // 取地址a取到整个数组的地址，+1跳过整个数组，就是下个数组的首元素地址
	//printf("%d\n", sizeof(&a[0]));//4
	//printf("%d\n", sizeof(&a[0] + 1));//4



	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	////printf("%d\n", sizeof(arr)); //6
	////printf("%d\n", sizeof(arr + 0));//arr不是单独放在sizeof，arr就代表数组首元素地址，注意：地址是4/8个大小
	////printf("%d\n", sizeof(*arr));//首元素地址解引用，1
	////printf("%d\n", sizeof(arr[1]));//arr第二个元素的内容，1
	////printf("%d\n", sizeof(&arr));//4/8
	////printf("%d\n", sizeof(&arr + 1));//4/8
	////printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//printf("%d\n", strlen(arr)); // 随机值
	//printf("%d\n", strlen(arr + 0)); // 随机值
	//printf("%d\n", strlen(*arr));// err，注意strlen设计的时候接收一个cha* 指针。这里arr首元素解引用，得到a的 。不行
	//printf("%d\n", strlen(arr[1]));//err，跟上面一个到底，arr[1]得到b
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1)); //跳过一个数组，随机值-6
	//printf("%d\n", strlen(&arr[0] + 1));//先arr第0个元素+1，就是arr[1],取arr[1]的地址。就是随机值-1



	//char arr[] = "abcdef";

	//printf("%d\n", sizeof(arr)); //  7
	//printf("%d\n", sizeof(arr + 0));// 4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr)); //4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//printf("%d\n", strlen(arr));// 6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5


	char *p = "abcdef";
	//printf("%d\n", sizeof(p)); //4/8
	//printf("%d\n", sizeof(p + 1)); //4/8
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));// p[0] == *(p+0)
	//printf("%d\n", sizeof(&p));// 4/8
	//printf("%d\n", sizeof(&p + 1));// 4/8
	//printf("%d\n", sizeof(&p[0] + 1)); // 4/8

	printf("%d\n", strlen(p)); // 6
	printf("%d\n", strlen(p + 1)); // 5
	//printf("%d\n", strlen(*p));//err ,strlen要传入地址
	//printf("%d\n", strlen(p[0]));//err,跟上面一样
	//printf("%d\n", strlen(&p));// 随机值
	printf("%d\n", strlen(&p + 1));// 随机值
	printf("%d\n", strlen(&p[0] + 1)); // 5
	
	return 0;
}












