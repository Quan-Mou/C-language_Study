#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//
//	char arr[20] = "ABCD";
//	strcat(arr, arr); // 不可以自己追加自己
//	//strncat(arr, arr, 4);
//	printf("%s", arr);
//	return 0;
//}


//int main()
//{
//	char str[] = "abcd";
//	int len = strlen(str);
//	printf("%d", len);
//	return 0;
//}


//char* My_strcpy(char* des,char* src)
//{
//	char* start = des;
//	
//	while (*des++ = *src++)
//	{
//		;
//	}
//	
//	return start;
//}
//int main()
//{
//	char str1[20] = "Hello";
//	char str2[] = "World NNNN";
//	char* ret = My_strcpy(str1,str2);
//	
//	return 0;
//}



//int main()
//{
//	char destination[20] = "Hello ";
//	char str1[] = "NiHao";
//	strcat(destination, str1);
//	printf("%s", destination);
//	return 0;
//}


//模拟实现strcat函数
//char* my_strcat(char* str1,char* str2)
//{
//	//1.
//	//char* des = str1;
//	//while (*str1)
//	//{
//	//	str1++;
//	//}
//	//while (*str2)
//	//{
//	//	*str1 = *str2;
//	//	str2++;
//	//	str1++;
//	//}
//	//*str1 = *str2;	
//	//return des;
//
//	char* des = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return des;
//
//}
//int main()
//{
//	char destination[20] = "ABC ";
//	char source[] = "World";
	//最后一个\0也要追加进去
//	my_strcat(destination, source);//返回值是拼接完成的首字符地址
//	printf("%s", destination);
//	return 0;
//}



//strcmp
//int main()
//{
//	char str1[] = "ABCD";
//	char str2[] = "ABC";
//	int ret =  strcmp(str1, str2);
//	printf("%d", ret);
//	return 0;
//}

//模拟实现strcmp
//int my_strcmp(char* str1,char* str2)
//{
//	
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//		if (*str1 > *str2)
//		{
//			return 1;
//		}
//		else if (*str1 < *str2)
//		{
//			return -1;
//		}
//	}
//
//}
//int main()
//{
//	char str1[] = "ABCD";
//	char str2[] = "ABCD";
//	int ret = my_strcmp(str1,str2);
//	if (ret > 0)
//	{
//		printf("str1 > str2\n");
//	}
//	else if(ret < 0)
//	{
//		printf("str1 < str2\n");
//	}
//	else {
//		printf("str1 == str2\n");
//	}
//	return 0;
//}


//strncpy
//char* my_strncpy(char* dest, char* src,int k)
//{
//	char* des = dest;
//	while (k)
//	{
//		*dest = *src;
//		k--;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return des;
//
//
//}
//int main()
//{
//	char dest[20] = "ABC";
//	char src[] = "nihao";
//	my_strncpy(dest,src,5);
//	printf("%s", dest);
//	return 0;
//}



//strstr
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cde";
//	char* ret = strstr(arr1, arr2);
//
//	printf("%s", ret);
//	return 0;
//}

//模拟实现strstr
//char* my_strstr(str1,str2)
//{
//	//abccdef
//	//cde
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cp = str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//	
//}
//int main()
//{
//	//分析：
//	//1.返回值：找到了就返回找到的首元素地址，没找到返回一个空指针
//	//起始两个字符串的首个字符相比，如果他们相等，就同时+1。反之第一个参数+1
//	char str1[] = "abccdef";
//	char str2[] = "cde";
//	char* ret =  my_strstr(str1,str2);
//	printf("%s", ret);
//	return 0;
//}



//int main()
//{
//	// 192.168.3.155 - 以.分隔
//	char  str1[] = "192.168.3.155";
//	char* sep = ".";
//	// 返回找到的第一个标签，用\0 结尾，返回一个指向这个标记的指针
//	//char* ret = strtok(str1, sep);
//	char* ret = 0;
//	
//	for (ret = strtok(str1, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//strerror
int main()
{
	//这个函数是文件函数，第一个参数是文件名，第二个参数是做什么操作，r是打开这个文件
	FILE* fs = fopen("text.txt", "r");
	if (fs == NULL)
	{
		//打开失败
		//要使用errno需要引入对应的头文件
		printf("%s", strerror(errno));
	}
	return 0;
}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                