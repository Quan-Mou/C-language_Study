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
//			//printf("%d %d\n",x,y); // ����Ŀ��Ҫ�����������ӱ�Ķ���
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
//	//���Ͼ���  �ж�һ�����Ƿ��ھ��� ��
//	//һ�����ϵ��£����������ε����ľ���
//	//1 2 3
//	//4 5 7
//	//7 8 9  
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 4;
//	int x = 3;
//	int y = 3;
//	//���һ������������ҵ��˾ͷ���1��û�ҵ�����0
//	
//	//int ret1 = find_num1(arr,3,3,k);
//	//if (ret == 1)
//	//{
//	//	printf("�ҵ���\n");
//	//}
//	//else 
//	//{
//	//	printf("û�ҵ�\n");
//	//}
//
//
//	int ret2 = find_num2(arr,&x,&y,k);
//	if (ret2 == 1)
//	{
//		printf("�ҵ��� �±꣺%d %d\n",x,y);
//
//	}
//	else 
//	{
//		printf("û�ҵ�\n");
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
//	//�ַ�������ת��
//	//���� ABCDEF ���������ַ� CDEFAB
//	char str[] = { "ABCDEF" };
//	int k = 5;
//	string_rotate(str,k);
//	printf("%s", str);
//	return 0;
//}





//����һ�ַ���
//����ABCDEF Ҫ����2���ַ�
//1.��תAB BA
//2.�ٷ�ת CDEF  FEDC   BAFEDC
//3.��������巭ת CDEFAB

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


//дһ�������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
//�������s1 = AABCD��BCDAA������1
//����s1=abcd��s2=ACBD������2
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
		printf("�ǵ�\n");
	}
	else 
	{
		printf("����\n");
		
	}
	return 0;
}

int is_string_rotate(char* str1, char* str2)
{
	int len = strlen(str1);
	//	strcat() ���������Լ����Լ�׷���ַ��� 
	strncat(str1, str1, len);
	char* ret = strstr(str1, str2);
	return ret != NULL;// ���������NULL��ʾ�淵��1�����򷵻�0 
	//	�������һ����ָ�룬˵����һ����ַ���ҵ��ˡ� 
	//	if(ret!= NULL)
	//	{	
	//		return 1; 
	//	} else 
	//	{
	//		return 0;
	//	}
}


//����һ�ְ취��
//int main()
//{
//	//	�ж�һ���ַ��Ƿ�����һ���ַ��������������� 
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
//		printf("��\n");
//	}
//	else {
//		printf("����\n");
//	}
//	return 0;
//}














