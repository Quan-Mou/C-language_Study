#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* destination, const char*  src)
{
	assert(src);
	while (*src)
	{
		*destination++ = *src++;
	}
	*destination++ = *src++;
	return destination;

	//while (*destination++ = *src++)
	//{
	//	;
	//}
	//return destination;

}

//int my_strlen(const char * str)
//{
//	str = NULL;
//	assert(str != NULL);
//	//条件：碰到\0就结束
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

int main()
{
	//什么是bug？

	//int arr[10] = {99,33,44,323,44};
	//int i = 0;	for (i = 0; i < 10; i++)
	//{
	//	arr[i] = i;
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]); 
	//}


	//int i = 0;
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//for (i = 0; i <= 12; i++)
	//{
	//	arr[i] = 0;
	//	printf("haha\n");
	//}
	//研究程序死循环的原因
	//i和arr是局部变量，而局部变量是存放在在内存栈中的，栈区的习惯是地址从高到地，而arr数组随着下标的增长内存从低到高。



	//模拟实现my_strlen函数  (多种写法)
	//1.const
	//2.assert
	//char str[] = { "abcdefd" };
	//int len = my_strlen(str);
	//printf("%d", len);

	//char str1[] = "nihaoshijie";
	//char str2[] = "haha";
	//strcpy(str1, str2);
	//printf("%s", str1);

	//模拟实现strcpy库函数
	char destination[] = "tomorrow";
	char src[] = "hhhhhh";
	my_strcpy(destination, src);
	printf("%s\n", destination);


	int a = 10;
	int b = 100;
	//const: 修饰常变量，让它的值不可以改变，但是本质上还是变量
	//如果const在指针类型左边，修饰的是*p，表示这个指针的值不可以改变，但是这个指针变量可以被改变
	//如果const在指针类型右边，修饰的是p，表示这个指针变量不能改变，但是指针的内容（值）可以改变
	//int const * const p = &a;
	//const int*  p = &a;
	//int* const p = &a; 
	//*p = 20;
	//p = &b;

	return 0;
}