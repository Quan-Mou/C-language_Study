#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//void test(char* c)
//{
//	printf("%c\n", *c);
//}
//void print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	
//	char ch = 'w';
//	//һ��ָ�봫��
//	test(&ch);
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* pa = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}



//void print1(int** arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (**arr)+i);
//	}
//}
//void print2(char ** s)
//{
//	printf("%c", **s);
//}
//int main()
//{
//	
//	//����ָ�봫��
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *pa = arr;
//	int* *paa = &pa;
//	print1(paa,sz);
//
//	char s = 'n';
//	char* ps =&s;
//	print2(&ps);
//
//	int* arr[10];
//	//print3(char **)
//	//print3(arr); //����
//	return 0;
//}



//����ָ��
//int test(int x ,int y )
//{
//	return x + y;
//}
//int main()
//{
//	//�����������ָ��ı�ʾ��ʽ��
//	int(*a)[10]; // 
//
//	//����ָ����α�ʾ����
//	int (*pt)(int,int) = &test; // pt��һ��ָ�룬ָ��һ������������������������int�ͣ�����������ֵ��int
//	printf("%p \n", pt);
//
//	//������ == &������
//	printf("%p == %p\n", test, &test); // ���ǵĺ�����һģһ����
//
//	int ret1= (*pt)(10, 20);
//	int ret2 = pt(10, 20); // pt == *pt
//	int ret3 = test(10, 20);
//	printf("%d ", ret1);
//	printf("%d ", ret2);
//	printf("%d ", ret3);
//	//*pt��pt��һ���ģ������*ֻ�ǰ��裬Ϊ�˱��������Լ���*
//
//	//�Ķ���������Ĵ��룺
//	//����1
//	(*(void(*)())0)();  
//	//�����޲Σ�����������void����0����ǿ������ת����������Ϊһ��������ַ
//	//��0���н����ã�����0��ַ�ĺ���
//	//����2
//	void(*signal(int, void(*)(int)))(int);
//	
//
//	return 0;
//}




//int  Add(int x,int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	//����ָ������
//	//����ָ������ - ��ź���ָ�������
//	//��α�ʾ�� 
//	int(*pa[2])(int, int) = {Add,sub}; // ��β��: pa[2]�Ƚ�ϣ������飬�������Ǿ������ͣ�����ָ������
//	//pa���Ǻ���ָ������
//	int ret1 = pa[0](10, 20);
//	int ret2 = pa[1](30,20);
//	return 0;
//}





//����ָ�������ʹ��
//void menu()
//{
//	printf("******  1.add    2.Sub  *********\n");
//	printf("******  3.Mul    4.Div  *********\n");
//	printf("*********   0.exit   ************\n");
//	printf("*********************************\n");
//
//}
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	//���������������α����ļӼ��˳�
//	do{
//		int x = 0;
//		int y = 0;
//		
//		int ret = 0;
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 0:
//			printf("�˳�����\n");
//			break;
//		case 1:
//			printf("��ѡ������������>:\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x,y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("��ѡ������������>:\n");
//			scanf("%d %d", &x, &y);
//			 ret = Sub(x,y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("��ѡ������������>:\n");
//			scanf("%d %d", &x, &y);
//			 ret = Mul(x,y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("��ѡ������������>:\n");
//			scanf("%d %d", &x, &y);
//			 ret = Div(x,y);
//			printf("%d\n", ret);
//			break;
//		default: 
//			printf("������Ч����\n");
//			break;
//		}
//	} while (input);
//	//���ϴ���������࣬��Ҫ�Ľ���ʹ�ú���ָ�����ݣ���
//	return 0;
//}




////����ָ������Ľ�������
//void menu()
//{
//	printf("******  1.add    2.Sub  *********\n");
//	printf("******  3.Mul    4.Div  *********\n");
//	printf("*********   0.exit   ************\n");
//	printf("*********************************\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do {
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			printf("��ѡ������������:>\n");
//			scanf("%d %d", &x, &y);
//			int(*pcalc[5])(int,int) = { NULL,Add, Sub, Mul,Div };// ����С����0��ʼ�ģ����������0���˳���Ϸ������һ��Ϊ��ָ��
//			int ret = (pcalc[input])(x, y);  // ͨ���±��ҵ�һ��Ԫ�أ����Ԫ��ǡ����һ�������ĵ�ַ��Ȼ��ȥ���������ַ��Ӧ�ĺ�����������һ����������ã����������龭������Ϊת�Ʊ���������ڡ�C��ָ�롷�����ᵽ��
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		 else
//		{
//			 printf("��ѡ����������\n");
//		}
//	} while (input);
//	return 0;
//}


//void text()
//{
//	
//}
//int main()
//{
//	//����ָ�������ָ��
//	text();
//	void (*pt)() = &text; //����ָ��
//	void(*pta[1])();// ����ָ������
//	void (*(*patp)[])() = &pta; // ָ����ָ�������ָ��
//
//	return 0;
//}

void menu()
{
	printf("******  1.add    2.Sub  *********\n");
	printf("******  3.Mul    4.Div  *********\n");
	printf("*********   0.exit   ************\n");
	printf("*********************************\n");

}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x*y;
}
int Div(int x, int y)
{
	return x / y;
}
int calc(int (*pf)(int,int))
{
	int x = 0;
	int y = 0;
	printf("��ѡ������������>:\n");
	scanf("%d %d", &x, &y);
	return (pf)(x, y); // ���벻ͬ�ĺ���ָ����ò�ͬ�ĺ���
}
int main()
{
	//�ص�����
	//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ
	//�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸ�
	//������ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���
	//����������Ӧ��

	//ͨ���Ѻ���ָ����Ϊ��������һ�������������������ô������ĵ�ַ(Ҳ���ǵ��ú���) -�ص�����
	int input = 0;
	//���������������α����ļӼ��˳�
	do{

		int ret = 0;
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("�˳�����\n");
			break;
		case 1:
			ret = calc(Add); // ���뺯�������Ǵ����ַ
			printf("%d\n", ret);
			break;
		case 2:
			ret = calc(Sub);
			printf("%d\n", ret);
			break;
		case 3:
			ret = calc(Mul);
			printf("%d\n", ret);
			break;
		case 4:
			ret = calc(Div);
			printf("%d\n", ret);
			break;
		default:
			printf("������Ч����\n");
			break;
		}
	} while (input);
	return 0;
}





