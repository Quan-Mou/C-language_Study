#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	printf("%s\n", __FILE__); // ��ǰ�ļ�Դ�ļ���·��
//	printf("%d\n", __LINE__); // �ļ��к�
//	printf("%s\n", __DATE__); // �ļ������������
//	printf("%s\n", __TIME__); // �ļ��������ʱ��
//	//printf("%d\n", __STDC__); // �����������ѭANSI C����ֵΪ1������δ����
//	return 0;
//}

////1.
//#define DATA 100
////2. 
//#define reg register // reg����register �൱�ڴ���һ������
////3.
//#define for_ever for(;;)
////4. ������������̫����Ҫ���У���ôÿ�е���󣨳������һ�У���Ӧ�ü���һ����б�ܣ����з���
//#define DEBUG_PRINT printf("hh,\
//							haha, \
//							heihei")
//
//
//int main()
//{
//	reg int a = 10;
//	//for_ever; // ��ѭ��
//
//	return 0;
//}

//#define TEST 2;
//int main()
//{
//	int a = 10;
//	if (a)
//		a = TEST;
//	else
//		a = 0;
//	return 0;
//}


//#define MAX(x) x*x
//#define MIN(y) y*y  // 8+1*8+1  
//#define MIN(y) (y)*(y) 
//
//int main()
//{
//	//�����б�������ű�����name���ڡ��������֮�����κοհ״��ڣ������б�ͻᱻ����Ϊstuff��һ���֡�
//	printf("%d\n", MAX(5));
//	//ע�⣺
//	printf("%d\n", MIN(8+1)); // ���8+1����������������㣬�����滻��Ȼ��������ȼ��������㣬ֻҪ���#define�ı�����ô����Ͳ���
//	printf("%d\n", MIN(8 + 1)); // ��Ҫ��������
//	return 0;
//}


//#define PRINT(a) printf("the value of "#a" is %d\n",a)
//int main()
//{	
//	//���磺the value of xx is %d  �����xx�ǽ��յĲ����ַ��� %d�����������ӡ����
//	//�����the value of a is 10
//	//ʹ��#�Ѳ��������ַ���
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	PRINT(a);
//	PRINT(b);
//	PRINT(c);
//	return 0;
//}

//##

//#define PRINTF(x,y) x##y 
//int  main()
//{
//
//	int vai00 = 13;
//	printf("%d", PRINTF(vai, 00));
//	return 0;
//}


//#define MAX 100
//int main()
//{
//
//	printf("%d\n", MAX);
//	#undef MAX
//	printf("%d\n", MAX); // ���ﱨ����Ϊ�����Ƴ���MAX�����MAXδ����
//	return 0;
//}


//��������
#define __DEBUG__ 

#define MIN  0
#define REMOVE 1
int main()
{
	//1.
	#ifdef __DEBUG__
	printf("ֻҪ������ __DEBUG__ ���ܱ����������\n");
	#endif

	//2.�����֧����������
	
	//��������������ǳ������ʽ
#	if MIN
	printf("���\n");
	#elif  REMOVE
	printf("�Һ�\n");
	#else
	printf("����\n");
	#endif

	//Ƕ��ָ��...
	return 0;
}