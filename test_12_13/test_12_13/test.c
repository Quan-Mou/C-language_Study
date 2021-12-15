#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
#include<string.h>

//int main()
//{
//	// 返回一个FILE类型的指针
//	FILE * fs = fopen("test.txt", "r");
//	if (fs == NULL)
//	{
//		perror("fopen");
//	}
//
//	fclose(fs);
//	fs = NULL;
//	return 0;
//}


//内存函数 memcpy  memmove memcmp
//void * my_memcpy(void* dest,void* src,int num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while(num--){
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
////	拷贝任何类型的数据 单位是字节 
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};  
//// 					12123458910 正常情况下 
//	int arr2[10] = {0};
////	memcpy(arr1,arr2,20);
//	
////	模拟实现memcpy
////	my_memcpy(arr1,arr2,20); 
////	如果是这样拷贝就有会重叠了，如果有重叠的，C语言还有另外一种函数memmove() 
////	my_memcpy(arr1+2,arr1,20); //12123458910 正常情况下 
////	memmove(arr1+2,arr1,20);
//	memcpy(arr1+2,arr1,20);// 这个函数也可以实现， 
//	return 0;
//}


//模拟mommove() 函数
//void* my_memmove(void* dest,void* src,size_t num)
//{
//	assert(dest && src);
//	void *ret = dest;
//	
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	my_memmove(arr + 2,arr,20);
//	return 0;
//}


//momcmp
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5,1 };
//	int arr2[] = { 2, 2, 6, 8, 10 ,1};
//	int ret = memcmp(arr2, arr1,24);
//	printf("%d", ret);
//	return 0;
//}

//memset
//int main()
//{
//	char str[] = "abc is change";
//	memset(str, '!', 3);
//	printf("%s", str);
//	return 0;  
//}


//自定义类型：结构体类型、枚举、联合

//struct S {
//	char name[20];
//	int age;
//}s1;
//
//
////struct S 是一个结构体类型，s1是这个结构体的变量
//int main()
//{
//	struct S s2; // 这种和上面的s1效果是一样的，唯一不同的是，s1是全局变量，s2是局部变量
//	return 0;
//}


//结构体不完全声明
//struct  {
//	char i;
//}a;
//
//struct {
//	char name[20];
//	char a;
//}*p;  
//
////上面在声明的时候省略了结构体标签
//
//int main()
//{
//	p = &a; // 这种方法可取吗?
//	//警告：编译器会把上面的两个声明当成完全不同的两个类型，所以是非法的。
//
//	
//	return 0;
//}


//结构体初始化
//struct b {
//	char id[10];
//	int age;
//};
//struct s{
//	char name[20];
//	int age;
//	char sex[4];
//	struct b b1;
//}stu3 = {"curry",32, '男'}; // 结构体变量初始化
//
//int main()
//{	
//	struct s stu1; // 定义结构体变量
//	struct s stu2 = { "权某人", 17, "男", {"C语言",190} }; //定义变量并初始化 
//	//可以通过.和-> 访问成员
//
//	printf("%s %d %s %s %d", stu2.name, stu2.age, stu2.sex, stu2.b1.id, stu2.b1.age);
//	struct b b1 = { 0 }; //给第一个元素赋值0 其他默认给0
//	return 0;
//}



//结构体的自引用
//struct s {
//	char a;
//	//struct s s1;// 错误!!!!
//	struct s *s1;
//};
////typedef struct b1 {
////	int age;
////	node* next;
////}node; // 不行错误！！！！
//
//
////正确做法：
//typedef struct b2 {
//	int age;
//	struct node* next;
//
//}node;
//
//int main()
//{
//	
//	return 0;
//}



//结构体内存对齐方式：
struct a {
	char c1;
	char c2;
	int i;
};

struct a1 {
	double d;
	char c;
	int i;
};
int main()
{
	struct a a1;
	struct a1 a2 = { 0 };
	printf("%d", sizeof(a1));
	printf("%d", sizeof(a2));
	return 0;
}
