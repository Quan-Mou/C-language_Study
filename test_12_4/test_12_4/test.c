#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int find_num1(int arr[3][3],int r,int c,int k)
//{
//	int x = 0;
//	int y = c - 1;
//	
//	while (x <= r && y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			//printf("%d %d\n",x,y); // 函数目标要清晰，不掺杂别的东西
//			return 1;
//		}
//	}
//	return 0;
//}


//int find_num2(int arr[3][3], int * px, int * py,int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x <= *py  && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//
//	return 0;
//}
//int main() 
//{
//	//杨氏矩阵  判断一个数是否在矩阵 中
//	//一个由上到下，由左到右依次递增的矩阵
//	//1 2 3
//	//4 5 7
//	//7 8 9  
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 4;
//	int x = 3;
//	int y = 3;
//	//设计一个函数，如果找到了就返回1，没找到返回0
//	
//	//int ret1 = find_num1(arr,3,3,k);
//	//if (ret == 1)
//	//{
//	//	printf("找到了\n");
//	//}
//	//else 
//	//{
//	//	printf("没找到\n");
//	//}
//
//
//	int ret2 = find_num2(arr,&x,&y,k);
//	if (ret2 == 1)
//	{
//		printf("找到了 下标：%d %d\n",x,y);
//
//	}
//	else 
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}



//void string_rotate(char * str,int k)
//{
//
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[len - 1] = tmp;
//	}
//}
//int main()
//{
//	//字符串坐旋转，
//	//比如 ABCDEF 左旋两个字符 CDEFAB
//	char str[] = { "ABCDEF" };
//	int k = 5;
//	string_rotate(str,k);
//	printf("%s", str);
//	return 0;
//}





//还有一种方法
//比如ABCDEF 要左旋2个字符
//1.翻转AB BA
//2.再翻转 CDEF  FEDC   BAFEDC
//3.最后在整体翻转 CDEFAB

//void reverse(char* left,char * right)
//{
//	while (left<=right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void rotate_reverse(char * str,int k)
//{
//	assert(str);
//	int len = strlen(str);
//	reverse(str, str + (k - 1)); //1
//	reverse(str + k, str + (len - 1)); // 2
//	reverse(str, str + (len - 1)); // 3
//}
//int main()
//{
//	char str[] = "ABCDEF";
//	int k = 3;
//	rotate_reverse(str,k);
//	printf("%s", str);
//	return 0;
//}


//写一个函数判断一个字符串是否为另一个字符串旋转之后的字符串
//例如给定s1 = AABCD和BCDAA，返回1
//给定s1=abcd和s2=ACBD，返回2
int is_string_rotate(char* str1,int k,char * str2)
{

	int len = strlen(str1);
	
	int j = 0;
	for (j = 0; j < k; j++)
	{
		char tmp = *str1;
		int i = 0;
		for (i = 0; i < len - 1; i++)
		{
			*(str1 + i) = *(str1 + i + 1);
		}
		*(str1 + len - 1) = tmp;

		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char str1[] = { "AABCD" };
	int k = 3;
	char str2[] = {"CDAAB"};
	int ret = is_string_rotate(str1, k, str2);
	if (ret == 1)
	{
		printf("是的\n");
	}
	else 
	{
		printf("不是\n");
		
	}
	return 0;
}

int is_string_rotate(char* str1, char* str2)
{
	int len = strlen(str1);
	//	strcat() 它不可以自己给自己追加字符串 
	strncat(str1, str1, len);
	char* ret = strstr(str1, str2);
	return ret != NULL;// 如果不等于NULL表示真返回1，否则返回0 
	//	如果不是一个空指针，说明是一个地址，找到了。 
	//	if(ret!= NULL)
	//	{	
	//		return 1; 
	//	} else 
	//	{
	//		return 0;
	//	}
}


//另外一种办法：
//int main()
//{
//	//	判断一个字符是否是另一个字符的左旋下下下雨 
//	//ABCDEFABCDEF 
//	//BCDEFABCDEFA
//	//CDEFABCDEFAB
//	//DEFABCDEFABC
//	//EFABCDEFABCD
//	//BCDEFABCDEFA
//	//ABCDEFABCDEF
//	char str1[20] = { "ABCDEFABCDEF" };
//	//    char str2[] = {"ABCDEFABCDEF"};
//	char str2[] = { "1" };
//	int ret = is_string_rotate(str1, str2);
//	if (ret == 1)
//	{
//		printf("是\n");
//	}
//	else {
//		printf("不是\n");
//	}
//	return 0;
//}














