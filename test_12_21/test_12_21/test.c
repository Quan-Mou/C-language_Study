#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//
////#### �����Ķ�̬�ڴ����
////
////	1. ��NULLָ��Ľ�����
////		2. �Զ�̬���ٵĿռ�Խ�����
////		3. �ԷǶ�̬ʹ�õĿռ�free�ͷ�
////		- ��ʱ���������
////		4. ʹ��free�ͷŶ�̬�����ڴ��һ����
////		5. ��ͬһ�鶯̬���ٵ��ڴ����ͷ�
////		6. ��̬�ڴ�ռ������ͷţ��ڴ�й©��
//	int *p = (int *)malloc(100);
//	int a = 10;
//	int *pa = &a;
//	
//	//free(p);
//	//free(pa); // �Ƕ�̬�ڴ濪�ٵĿռ䲻��free
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	p++;
//	//}
//	//free(p); // ��ʱ��p�����ƶ���10��Ԫ�أ����ڴ�����Ԫ�ص�ַ���ͷ�һ���ֳ���Ҳ�������
//
//	//free(p);
//	//free(p); // ��ͬһ�鶯̬�ڴ����ͷţ��������
//	//p = NULL; // ���ͷ��ڴ��ڴ�ռ�󣬼ǵð�����ΪNULL
//
//	return 0;
//}


//�ĸ�����ı�����

//��Ŀ1.

//������룺
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL; 
//	GetMemory(str); 
//	strcpy(str, "hello world");
//	printf(str);
//	// ����1.���ﴫ����Ǳ������ǵ�ַ��ֻ���������Ŵ�����Ԫ�ص�ַ����Ȼ���ǵ�ַ��������һ����ʱ�������ı���		���沢����Ӱ��str
//	// ����2.ʹ���˶�̬���ٵ��ڴ�û���ͷ�
//}

//�ģ�1
//char*  GetMemory(char **p)
//{
//	return *p = (char *)malloc(100); // ����ָ�������=str
//	//��������ı����������ǳ��˺��������� �����������Ƕ�̬���ٵĿռ䣬�Ǵ���ڶ����ģ���Ҫ�ɳ���Ա�ֶ��ͷ�
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(&str); // ���ﴫ��ַ���βξ�Ҫ�ö���������
//	strcpy(str, "hello world");
//	printf(str);  // ���������ʽ �� printf("hello world") ��������һ����;
//	free(str);
//	str = NULL;
//}

//�ģ�2
//void  GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//	
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str); 
//	strcpy(str, "hello world");
//	printf(str); 
//	free(str);
//	str = NULL;
//
//}
//int main()
//{
//	Test();
//	return 0;
//}



////��Ŀ2��
//char *GetMemory(void)
//{
//	//�ֲ����� - ����ջ�� ���Լ��������򣬳��˺����������ˡ�
//	char p[] = "hello world";
//	return p; 
//}
//void Test(void)
//{
//	char *str = NULL;
//	// û�ܷŵ�str���棬str�Ϳ�����Ұָ�룬����һЩ�����
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//��Ŀ3��
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//����ûʲô���⣺ ��Ϊ�Ƕ�̬���ٵ������Ҫ�ͷ�һ��
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��Ŀ4
//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str); // ������ͷ���
//	//�Ҳ���str��str��һ��Ұָ��
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��������
//Ҳ�������û����˵���������飨flexible array��������������ȷʵ�Ǵ��ڵġ�
//C99 �У��ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������须��Ա��

//struct s {
//	int i;
//	int arr[0]; // ���������Ա
//};

//��Щ�������ᱨ���޷�������Ըĳ�
//struct s {
//	int i;
//	int arr[]; // ���������Ա
//};
//int main()
//{
//	printf("%d", sizeof(struct s));
//}

//����������ص㣺
//�ṹ�е����������Աǰ���������һ��������Ա��
//sizeof ���ص����ֽṹ��С����������������ڴ档
//�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С��

//ʹ����������
//typedef struct s
//{
//	int i;
//	int arr[]; 
//}type_a;
//int main()
//{
//	type_a * p = (type_a *)malloc(sizeof(struct s)+100*sizeof(int));
//	p->i = 100;
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		p->arr[i] = i;
//	}
//	//arr�����100������������͵Ŀռ�
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//}


//�������������
//����Ĵ��뻹�������Ϊ��
typedef struct s
{
	int i;
	int *p;
}type_a;

int main()
{
	
	type_a * p = (type_a *)malloc(sizeof(type_a));
	p->i = 100;
	p->p = (int *)malloc(p->i*sizeof(int));

	//ҵ����
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		p->p[i] = i;
	}
	
	//�ͷ�
	free(p->p);
	p->p = NULL;
	free(p);
	p = NULL;
	return 0;
}


