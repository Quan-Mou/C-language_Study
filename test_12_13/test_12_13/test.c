#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
#include<string.h>

//int main()
//{
//	// ����һ��FILE���͵�ָ��
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


//�ڴ溯�� memcpy  memmove memcmp
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
////	�����κ����͵����� ��λ���ֽ� 
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};  
//// 					12123458910 ��������� 
//	int arr2[10] = {0};
////	memcpy(arr1,arr2,20);
//	
////	ģ��ʵ��memcpy
////	my_memcpy(arr1,arr2,20); 
////	����������������л��ص��ˣ�������ص��ģ�C���Ի�������һ�ֺ���memmove() 
////	my_memcpy(arr1+2,arr1,20); //12123458910 ��������� 
////	memmove(arr1+2,arr1,20);
//	memcpy(arr1+2,arr1,20);// �������Ҳ����ʵ�֣� 
//	return 0;
//}


//ģ��mommove() ����
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


//�Զ������ͣ��ṹ�����͡�ö�١�����

//struct S {
//	char name[20];
//	int age;
//}s1;
//
//
////struct S ��һ���ṹ�����ͣ�s1������ṹ��ı���
//int main()
//{
//	struct S s2; // ���ֺ������s1Ч����һ���ģ�Ψһ��ͬ���ǣ�s1��ȫ�ֱ�����s2�Ǿֲ�����
//	return 0;
//}


//�ṹ�岻��ȫ����
//struct  {
//	char i;
//}a;
//
//struct {
//	char name[20];
//	char a;
//}*p;  
//
////������������ʱ��ʡ���˽ṹ���ǩ
//
//int main()
//{
//	p = &a; // ���ַ�����ȡ��?
//	//���棺����������������������������ȫ��ͬ���������ͣ������ǷǷ��ġ�
//
//	
//	return 0;
//}


//�ṹ���ʼ��
//struct b {
//	char id[10];
//	int age;
//};
//struct s{
//	char name[20];
//	int age;
//	char sex[4];
//	struct b b1;
//}stu3 = {"curry",32, '��'}; // �ṹ�������ʼ��
//
//int main()
//{	
//	struct s stu1; // ����ṹ�����
//	struct s stu2 = { "Ȩĳ��", 17, "��", {"C����",190} }; //�����������ʼ�� 
//	//����ͨ��.��-> ���ʳ�Ա
//
//	printf("%s %d %s %s %d", stu2.name, stu2.age, stu2.sex, stu2.b1.id, stu2.b1.age);
//	struct b b1 = { 0 }; //����һ��Ԫ�ظ�ֵ0 ����Ĭ�ϸ�0
//	return 0;
//}



//�ṹ���������
//struct s {
//	char a;
//	//struct s s1;// ����!!!!
//	struct s *s1;
//};
////typedef struct b1 {
////	int age;
////	node* next;
////}node; // ���д��󣡣�����
//
//
////��ȷ������
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



//�ṹ���ڴ���뷽ʽ��
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
