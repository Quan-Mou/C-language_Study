#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//������
//int main()
//{
//	//������Ҳ��һ��������Զ������ͣ���������Щ��Ա����һ��ռ䣬����Ҳ�й�����
//
//	union u {
//		char c;
//		int i;
//	};
//	//union u ��һ������������
//	union u u1; // ���ϱ����Ķ���
//	printf("%d", sizeof(u1));
//}



//���ϵ��ص�
//int main()
//{
//	union u {
//		char c;
//		int i;
//	};
//	union u u1 = {1};
//	printf("%p\n", &(u1.c)); //
//	printf("%p\n", &(u1.i)); // 
//	printf("%p\n", &u1); // ��������ַ��һ����
//
//	printf("%d\n", sizeof(u1.c));
//	printf("%d\n", sizeof(u1.i));
//	printf("%d\n", sizeof(u1)); // 4 ������Ĵ�С��ô���㣿
//	return 0;
//}



//���ϴ�С�ļ���
//int main()
//{               
//
//	union u1 {
//		char c[6]; // 7
//		int i; // 4
//		//c��������飬��6��Ԫ�أ�������������ĳ�Ա��i��������ϵ������������������Ա7���������������������Ҫ���뵽���������������������8
//		//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽����������������
//	};
//	union u2 {
//		short c[7]; // �ܴ�С14��һ��ռ�����ֽڣ���7����
//		int i; // 4  ��������������Ա����������������������Ҫ���뵽������������������16
//	};
//	printf("%d ", sizeof(union u1));
//	printf("%d", sizeof(union u2));
//	return 0;
//}


//��̬�ڴ濪��

//int main()
//{
//	int model = 10; // ��ջ������4���ֽ�
//	int render[10] = { 0 }; // ��ջ������10��int�ֽڵ������ռ�
//
//	//���������Ŀ��ٿռ�ķ�ʽ�������ص㣺
//	//1.�ռ俪�ٵĴ�С�ǹ̶���
//	//2.������������ʱ�򣬱���ָ�����鳤�ȣ�������Ҫ���ڴ��ڱ���ʱ����
//	//���Ƕ��ڿռ�����󣬲��������������������ʱ��������Ҫ�Ŀռ��С�ڳ������е�ʱ�����֪����������ı���ʱ���ٿռ�ķ�ʽ�Ͳ��������ˡ�
//	//��ʱ���ֻ�����Զ�̬�濪���ˡ�
//
//	int* p = malloc(10*sizeof(int)); // ��̬����ʮ�����ͣ���Ϊ���ķ���ֵ��void* �еı�����Ҫ�ֶ�ת��
//	
//	if (p == NULL)
//	{
//		//malloc ����ʧ�ܵ����
//		perror("malloc");
//		return 0;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//
//	free(p); // �ͷ�
//	p = NULL;  // �ÿ�
//	return 0;
//}


//2.calloc
//int main()
//{
//	int len = 10;
//	int *p = (int*)calloc(len, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 0;
//	}
//	//�������Ѿ�����ȫ����ʼ��Ϊ0��
//	//������
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//3.realloc
int main()
{
	int *p = malloc(10*sizeof(int));
	if (p == NULL)
	{
		perror("malloc");
	}
	int ptmp = NULL;
	ptmp = realloc(p, 10 * sizeof(int));
	//ȷ���ռ�����û������
	if (ptmp != NULL)
	{
		p = ptmp;
	}
	
	return 0;
}






