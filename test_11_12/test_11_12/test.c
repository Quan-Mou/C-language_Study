#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Stu {
	char name[20]; // 
	int age;
	char sex[5];
	char id[20];
};
void print1(struct Stu s1)
{
	printf("%s %d %s %s\n", s1.name, s1.sex, s1.sex,s1.id);
};
void print2(struct Stu* s1)
{
	printf("%s %d %s %s\n", s1->name, s1->age, s1->sex, s1->id);
}
int main()
{
	//指针和数组
	//数组名是什么？数组名是数组首元素的地址
	//int arr[5] = { 1, 2, 3, 4, 5 };
	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr);


	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int* pa = arr;
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("&arr[%d] = %p <====> p+%d = %p\n",i,&arr[i],i,pa+i);
	//	//pa+i是计算数组下标为i的地址
	//}

	////通过指针来访问数组

	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d\n", *(pa+i));
	//}
	////arr[2]
	////[] 是一个操作数 arr 和 2 是操作数 ，a+b可不可以写成b+a呢？，有了这层理论，arr[2] 可不可以写成 2[arr] 呢？
	//printf("%d\n", 2[arr]);
	//printf("%d\n", arr[2]);

	//arr[2] ---> *(arr + 2)---> *(2 + arr)---> 2[arr]

	//arr[2] <===> *(arr+2) <===> *(p+2) <===> *(2+p) <===> *(2+arr) <===> 2[arr]
	//2[arr] <===> *(arr+2)



	//二级指针
	//指针变量也是变量 是变量就有地址，那指针变量的地址存在哪里？

	//int a = 10;
	//int* pa = &a;
	//int** ppa = &pa;
	////a的地址存放在 pa里面，而pa的地址存在ppa中，pa是一级指针，ppa就是二级指针

	////二级指针的运算
	////通过 *ppa中的地址进行解引用得到的是 pa，*ppa访问的就是pa
	////**ppa先解引用得到pa再对pa进行解引用找到a
	//printf("%p\n", pa);
	//printf("%p\n", *ppa);
	//printf("%d\n", **ppa);
	//**ppa = 20;
	//printf("%d", **ppa);

	//指针数组
	//对于数组有：整型数组 字符数组 ... 
	//那指针数组是数组还是指针？
	//是指针，存放指针的数组
	//int* arr[5]; // arr是一个数组，有5个元素，每个元素存放的是整型指针


	//结构体
	//结构体是一个集合，这些值被称为成员变量，结构的每个成员都可以是不同类型的变量
	
	//struct Stu struct关键字声明是一个结构体类型的 Stu是这个结构体的名字
	//描述一个学生：

	//结构体成员可以是：标量 数组 指针、甚至是其他结构体
	struct Stu s1 = { "张三", 17, "男", "2021_11_14" }; // 初始化 
	//printf("%s %d %s %s\n", s1.name, s1.age, s1.sex, s1.id);

	//struct Stu1 {
	//	char name[20]; // 
	//	int age;
	//	char sex[5];
	//	char id[20];
	//}s2 = {"李四",17,"男","2021"}; // 声明结构体类型的同时定义结构体变量、并且初始化
	//printf("%s %d %s %s\n", s2.name, s2.age, s2.sex, s2.id);
		
	//结构体成员访问：
	//结构体传参：
	print1(s1); // 传值方式
	print2(&s1); // 传址方式
	// 推荐使用传址的方式，原因：
	//函数传参的时候，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降
	return 0;
}