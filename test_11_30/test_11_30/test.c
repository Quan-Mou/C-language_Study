#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ð������
//int main()
//{
//
//	int arr[] = { 2, 5, 1, 9, 10, 3, 11, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//���ѭ��
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
////void * -��ָ�룬��һ������Ͱʲô���͵Ķ�����������š����ܽ������㣬Ҳ����ֱ�ӽ��н�����
//
//// ��һ����������Ҫ�����Ԫ�ص���ʼ��ַ
////�ڶ���������Ԫ�ظ���
////������������Ԫ�ش�С��λ�ֽ�
////���ĸ�������һ������ָ�룬��ʲô��ʽ�����������Ҫ�Լ�ʵ�֣�
//
//
//
//int sort_int(void *e1,void *e2)
//{
//	return *(int *)e1 - *(int *)e2;  //��Ϊ��ָ�벻��ֱ�ӽ��н����ã�������Ҫ����ǿ��ת��
//}
//
////��ӡ��������
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void text1()// ����ŵ��������������麯��
//{
//	//ʹ��qsort������������
//	int arr[] = { 3, 5, 1, 10, 0, 2, 8, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), sort_int);
//	print_arr(arr, sz);
//} 
//
//
//
////ʹ��qsort����ṹ������
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
//	return strcmp(((struct s*)e1)->name, ((struct s*)e2)->name);//�����ַ����Ƚϲ�����><,Ҫ��strcmp()��������strcmp�����ķ���ֵ����������ķ���ֵ��һ���ģ�
//}
//
//struct s stu[] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 17 } };
//
//
//void text2()
//{
//	//ʹ��qsort����ṹ������
//	//struct s stu[] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 17 } };
//	int sz = sizeof(stu) / sizeof(stu[0]);
//	//qsort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), stru_by__age); // ���ṹ����������
//	qsort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), stru_by_name); // ���ṹ��������������
//}
//
//
////ģ��ʵ��qsort����
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
//			//��һ��Ԫ�غ͵ڶ���Ԫ��
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0) // ����
//			{
//				//����
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width); // һ���ֽ�һ���ֽڽ���
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
//	bubble_sort(arr, sz, sizeof(arr[0]), sort_int); // ��������
//	bubble_sort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), stru_by_name); // ����ṹ��
//
//}
//
//int main()
//{
//	text1(); // ʹ��qsrot����������������
//
//	//text2(); // ʹ��qsort��������ṹ��
//
//	text3();// ģ��qsrot����������������/�ṹ��
//	return 0;
//}



int main()
{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a)); // 16
	//printf("%d\n", sizeof(a+0));// 4/8 // 32λ��4,64λ��8
 //	printf("%d\n", sizeof(*a));// 4
	//printf("%d\n", sizeof(a + 1)); //4/8 a���ǵ�������sizeof�������Դ�����Ԫ�ص�ַ����Ԫ�ص�ַ+1����һ��Ԫ�أ�ָ��ڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(a[1])); //4


	//printf("%d\n", sizeof(&a));//4
	//printf("%d\n", sizeof(*&a));//16
	//printf("%d\n", sizeof(&a + 1)); // ȡ��ַaȡ����������ĵ�ַ��+1�����������飬�����¸��������Ԫ�ص�ַ
	//printf("%d\n", sizeof(&a[0]));//4
	//printf("%d\n", sizeof(&a[0] + 1));//4



	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	////printf("%d\n", sizeof(arr)); //6
	////printf("%d\n", sizeof(arr + 0));//arr���ǵ�������sizeof��arr�ʹ���������Ԫ�ص�ַ��ע�⣺��ַ��4/8����С
	////printf("%d\n", sizeof(*arr));//��Ԫ�ص�ַ�����ã�1
	////printf("%d\n", sizeof(arr[1]));//arr�ڶ���Ԫ�ص����ݣ�1
	////printf("%d\n", sizeof(&arr));//4/8
	////printf("%d\n", sizeof(&arr + 1));//4/8
	////printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//printf("%d\n", strlen(arr)); // ���ֵ
	//printf("%d\n", strlen(arr + 0)); // ���ֵ
	//printf("%d\n", strlen(*arr));// err��ע��strlen��Ƶ�ʱ�����һ��cha* ָ�롣����arr��Ԫ�ؽ����ã��õ�a�� ������
	//printf("%d\n", strlen(arr[1]));//err��������һ�����ף�arr[1]�õ�b
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr + 1)); //����һ�����飬���ֵ-6
	//printf("%d\n", strlen(&arr[0] + 1));//��arr��0��Ԫ��+1������arr[1],ȡarr[1]�ĵ�ַ���������ֵ-1



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
	//printf("%d\n", strlen(&arr + 1));//���ֵ
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
	//printf("%d\n", strlen(*p));//err ,strlenҪ�����ַ
	//printf("%d\n", strlen(p[0]));//err,������һ��
	//printf("%d\n", strlen(&p));// ���ֵ
	printf("%d\n", strlen(&p + 1));// ���ֵ
	printf("%d\n", strlen(&p[0] + 1)); // 5
	
	return 0;
}












