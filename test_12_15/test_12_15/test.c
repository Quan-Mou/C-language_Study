#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct a  {
//	char c;
//	int b;
//	double d;
//	int a;
//};
//
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	//�ṹ���ڴ�Ķ���
//	//��μ���ṹ��Ĵ�С��
//	struct a a1;
//	printf("%d", sizeof(a1));
//	printf("%d\n", sizeof(struct s1));
//	return 0;
//}



//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
////�ṹ��Ƕ��
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//main()
//{
//	printf("%d ", sizeof(struct S1));// 12
//	printf("%d ", sizeof(struct S2));// 8
//	printf("%d ", sizeof(struct S3));// 16
//	printf("%d ", sizeof(struct S4));// 32 
//	return 0;
//}


//�޸�Ĭ�϶�����  ͨ��#pargam ���Ԥ����ָ��Ϳ��Ըı����ǵ�Ĭ�϶�����
//#pragma pack(2) // ����Ĭ�϶�����
//struct S1
//{
//	char c1;
//	int i;
//	char c2;  
//};
//#pragma pack()// ȡ������Ĭ�϶�������
//int main()
//{
//	printf("%d ",  sizeof(struct S1)); // 8
//	return 0;
//}


//�ṹ�崫��
//struct a {
//	int data[1000];
//	int num;
//};
//
//void print1(struct a A)
//{
//	printf("%d", A.num);
//}
//void print2(struct a* pA)
//{
//	printf("%d", pA->num);
//}
//int main()
//{
//	struct a a1 = { {1,2,3},100 };
//	print1(a1); // ���ṹ��
//	print2(&a1); //  ����ַ
//	//�������ָ��ã� 
//	//���Ǵ���ַ����
//	//��Ϊ˵���ṹ�壬�βξ��൱��ʵ�ε�һ����ʱ������ʵ�δ�data������1000��Ԫ�أ���������4000�ֽڣ��൱�����ڴ濪��������
//	//�������ε�ʱ�򣬲�������Ҫѹջ������ʱ��Ϳռ��ϵ�ϵͳ������
//	//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
//
//	return 0;
//}


//λ��
//ʲô��λ�� λ�ε������ͽṹ�������Ƶģ�λ�������ڽṹ�壬��������ͬ��1.λ�εĳ�Ա������ Int ��unsigned int��signed int��charҲ����Ϊ������Ҳ��int
//struct A {
//	// int �ͷ����ĸ��ֽ� 32��bitλ
//	int _a : 5;  // 5��bitλ��ʣ27��bitλ
//	int _b : 2; // ������ʣ���bitλ��27-2 = ʣ25
//	int _c : 30; // ռ��30��bitλ��֮ǰʣ��Ĳ���,���¿���һ��int�� 32bitλ   32 -30 =2
//	// ���滹ʣ2bitλ,����_dռ��20bitλ�������ڿ���һ��int
//	int _d : 20;
//	// ����һ������������int�ͣ�12���ֽ�
//	//��Ч�Ľ�ʡ�˿ռ�
//};
////A ����һ��λ��
////����������Ǵ���bitλ
//
//int main()
//{
//	printf("%d", sizeof(struct A));	// ���λ�εĴ�С�Ƕ��٣�  12
//	return 0;
//}


//ö������
//int main()
//{
//	//���綨���ԱΪһ�����ڵĿ���
//	enum day {
//		Mon,
//		Tuesday,
//		Wed,
//		Thurs,
//		Friday,
//		Saturday,
//		Sunday
//	};
//
//	//��ԭɫ
//	enum RGB {
//		RED,
//		GREEN,
//		BLUE
//	};
//
//	//�Ա�
//	enum Sex {
//		MALE,
//		FEMALE,
//		SECRET
//	};
//	//����� enum day�� enum RGB��enum Sex ����ö������
//	//{} �����������ö�ٵĿ���ȡֵ��Ҳ����ö�ٳ��� ע���ǳ���
//	//��Щֵ���û�г�ʼֵ��Ĭ���Ǵ�0��ʼ�����ε���+1��
//	return 0;
//}



//int main()
//{
//	enum Color {
//		Orange, // 0
//		Pink = 4,  // ���︳ֵ�˺����ֵ�͸������ֵ���ε���+1
//		Black // 5
//	};
//	color = 3 ���У���
//	enum Color color = Pink;  // ö�ٱ�����ֵ��ֻ����ö�ٳ�����ö�ٱ�����ֵ�Ų���������͵Ĳ���
//	return 0;
//}




void menu()
{
	printf("*****************************\n");
	printf("*****  1.Add    2.Sub  ******\n");
	printf("*****  3.Mul    4.Div  ******\n");
	printf("********   0.exit     *******\n");
}
int main()
{
	enum Select
	{
		EXIT, // 0
		Add, // 1
		Sub, // 2
		Mul, // 3
		Div  //4 
		//Ĭ����0 ���ε���+1
	};
	int input = 0;
	do {
		menu();
		printf("�����룺>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT :
			break;
		case Add :
			break;
		case Sub:
			break;
		case Mul :
			break;
		case Div :
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}

