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
//	//结构体内存的对齐
//	//如何计算结构体的大小？
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
////结构体嵌套
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


//修改默认对齐数  通过#pargam 这个预处理指令就可以改变我们的默认对齐数
//#pragma pack(2) // 设置默认对齐数
//struct S1
//{
//	char c1;
//	int i;
//	char c2;  
//};
//#pragma pack()// 取消设置默认对齐数。
//int main()
//{
//	printf("%d ",  sizeof(struct S1)); // 8
//	return 0;
//}


//结构体传参
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
//	print1(a1); // 传结构体
//	print2(&a1); //  传地址
//	//上面那种更好？ 
//	//答案是传地址更好
//	//因为说传结构体，形参就相当于实参的一份临时拷贝，实参传data里面有1000个元素，加起来就4000字节，相当于在内存开辟了两份
//	//函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
//	//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
//
//	return 0;
//}


//位段
//什么是位段 位段的声明和结构体是类似的，位段依附于结构体，有两个不同。1.位段的成员必须是 Int 、unsigned int、signed int、char也是因为本质上也是int
//struct A {
//	// int 型分配四个字节 32个bit位
//	int _a : 5;  // 5个bit位还剩27个bit位
//	int _b : 2; // 用上面剩余的bit位，27-2 = 剩25
//	int _c : 30; // 占用30个bit位，之前剩余的不够,重新开辟一个int型 32bit位   32 -30 =2
//	// 上面还剩2bit位,下面_d占用20bit位不够，在开辟一个int
//	int _d : 20;
//	// 上面一共开辟了三次int型，12个字节
//	//有效的节省了空间
//};
////A 就是一个位段
////后面的数字是代表bit位
//
//int main()
//{
//	printf("%d", sizeof(struct A));	// 这个位段的大小是多少？  12
//	return 0;
//}


//枚举类型
//int main()
//{
//	//比如定义成员为一个星期的可能
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
//	//三原色
//	enum RGB {
//		RED,
//		GREEN,
//		BLUE
//	};
//
//	//性别
//	enum Sex {
//		MALE,
//		FEMALE,
//		SECRET
//	};
//	//上面的 enum day， enum RGB，enum Sex 都是枚举类型
//	//{} 里面的内容是枚举的可能取值，也叫做枚举常量 注意是常量
//	//这些值如果没有初始值，默认是从0开始，依次递增+1。
//	return 0;
//}



//int main()
//{
//	enum Color {
//		Orange, // 0
//		Pink = 4,  // 这里赋值了后面的值就根据这个值依次递增+1
//		Black // 5
//	};
//	color = 3 不行！！
//	enum Color color = Pink;  // 枚举变量的值，只能拿枚举常量给枚举变量赋值才不会出现类型的差异
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
		//默认是0 依次递增+1
	};
	int input = 0;
	do {
		menu();
		printf("请输入：>");
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

