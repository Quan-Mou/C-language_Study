#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
	//��ά����
	//int a[3][4] = { 0 };
	//0 0 0 0 
	//0 0 0 0
	//0 0 0 0
	//arr[0][i] ��ʾ��һ����i��Ԫ��
	//arr[1][i] ��ʾ�ڶ�����i��Ԫ��
	//arr[2][i] ��ʾ��������i��Ԫ��
	//printf("%d\n", sizeof(a)); // 48 3*4*4
	//printf("%d\n", sizeof(a[0][0]));//4 ��һ�е�һ����Ԫ�ء�
	//printf("%d\n", sizeof(a[0])); //16  ��ʾ��һ�У��������ĸ�Ԫ��
	//printf("%d\n", sizeof(a[0] + 1)); //4 a[0]��ʾ��һ�У�û�е����ŵ�sizeof����������ʾ��Ԫ�ص�ַ��a[0]���ǵ�һ�е���Ԫ�ص�ַ��+1������һ�����ε���Ԫ�صڶ�����ַ
	//printf("%d\n", sizeof(*(a[0] + 1))); // 4
	//printf("%d\n", sizeof(a + 1)); // 4/8 a������Ԫ�صĵ�ַ��û��ȡ��ַ��������һ�о������ĵ�ַ��+1��������һ�С��������ǵ�ַ����ַ����4/8���ֽ�
	//printf("%d\n", sizeof(*(a + 1))); //16 �����ڶ���
	//printf("%d\n", sizeof(&a[0] + 1)); // 4/8
	//printf("%d\n", sizeof(*(&a[0] + 1))); //16 ��һ�еĵ�ַ��+1�����ڶ���
	//printf("%d\n", sizeof(*a)); // 16
	//printf("%d\n", sizeof(a[3])); // 16
	//return 0;
//}




//ָ������⣺
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}




//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}



//������3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}



//������4
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) }; // ע�������Ǵ����������Ƕ��ű��ʽ
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}


//������5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a; // a��Ԫ�ص�ַ
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}


//������6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);//	ȡ��ַ��+1��������������
//	int *ptr2 = (int *)(*(aa + 1)); // aaû�е�������sizeof���棬arr������Ԫ�ص�ַ����ά���飬��Ԫ�ص�ַ�����ĵ�һ�С�
//									//��һ�м�1�������ڶ��С�6�ĵ�ַ�������þ���6��������Ǹ����Ρ�������ǿ��ת��Ϊint* ���Ի���Ϊ
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}



//������7
//#include <stdio.h>
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}



//������8
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


