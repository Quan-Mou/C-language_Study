#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//
//	char arr[20] = "ABCD";
//	strcat(arr, arr); // �������Լ�׷���Լ�
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


//ģ��ʵ��strcat����
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
	//���һ��\0ҲҪ׷�ӽ�ȥ
//	my_strcat(destination, source);//����ֵ��ƴ����ɵ����ַ���ַ
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

//ģ��ʵ��strcmp
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

//ģ��ʵ��strstr
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
//	//������
//	//1.����ֵ���ҵ��˾ͷ����ҵ�����Ԫ�ص�ַ��û�ҵ�����һ����ָ��
//	//��ʼ�����ַ������׸��ַ���ȣ����������ȣ���ͬʱ+1����֮��һ������+1
//	char str1[] = "abccdef";
//	char str2[] = "cde";
//	char* ret =  my_strstr(str1,str2);
//	printf("%s", ret);
//	return 0;
//}



//int main()
//{
//	// 192.168.3.155 - ��.�ָ�
//	char  str1[] = "192.168.3.155";
//	char* sep = ".";
//	// �����ҵ��ĵ�һ����ǩ����\0 ��β������һ��ָ�������ǵ�ָ��
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
	//����������ļ���������һ���������ļ������ڶ�����������ʲô������r�Ǵ�����ļ�
	FILE* fs = fopen("text.txt", "r");
	if (fs == NULL)
	{
		//��ʧ��
		//Ҫʹ��errno��Ҫ�����Ӧ��ͷ�ļ�
		printf("%s", strerror(errno));
	}
	return 0;
}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                