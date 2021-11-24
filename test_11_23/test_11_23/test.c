#define _CRT_SECURE_NO_WARNINGS

void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*arr)[5],int r,int c)
{
	//*arr是首元素的地址，也就是第一行的首元素的地址
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{

		for (j = 0; j < c; j++)
		{
			//*arr+1 跳过一行
			//*(*arr) // 第一行的首元素地址解引用，得到第一行的首元素

			printf("%d ", *(*(arr + i) + j )); 
		}
		printf("\n");
	}
}
int main()
{
	//指针的进阶
	//字符指针
	char ch = 'a';
	char* pch = &ch;

	*pch = 'b';
	printf("%c\n", *pch);
	
	char* c = "Hello"; // 放的 不是这个字符串，本质上放的是这个字符串的首字符。指针字符常量，它的值不可以改具体看编译器

	//题：

	//char str1[] = "hello bit.";
	//char str2[] = "hello bit.";
	//char *str3 = "hello bit.";
	//char *str4 = "hello bit.";
	//if (str1 == str2) // 数组的首元素地址，两个不同的空间首元素地址不相同
	//	printf("str1 and str2 are same\n");
	//else
	//	printf("str1 and str2 are not same\n");

	//if (str3 == str4) // 这两个字符串指针相同的内容，因为是常量，它内部不会创建两个一模一样的数据，而是把str3和str4都指向了同一个地址
	//	printf("str3 and str4 are same\n");
	//else
	//	printf("str3 and str4 are not same\n");

	//指针数组
	//指针数组存的是指针
	//int* arr1[10]; // arr数组有10个指针类型是整型
	//char *arr2[4]; // 一级字符指针的数组
	//char **arr3[5]; // 二级字符指针的数组


	//数组指针
	//int * a 是能够指向整型的指针
	//那数组就是指向数组的指针（如何表示）
	int arr[5] = { 1, 2, 3, 4, 5 };
	int(*pa)[5] = &arr; // pd是个指针，指向一个数组，里面有5个元素，类型是int
	//&arr取出的是整个数组
	//arr是数组的首元素地址

	double* d[5]; 
	double* (*pd)[5] = &d; //数组指针：pa是一个指针指向一个数组里面有5个元素，每个元素的类型是double* 


	//&数组名vs数组名
	int a[] = { 1, 2, 3, 4, 5 };
	printf("%p\n", &a);
	printf("%p\n", a); // 虽然它们的值是一样的，但是它们的意义是不一样的
	printf("&arr+1和arr+1的区别：\n");
	printf("%p\n", &a + 1);// 跳过整个数组，20个字节
	printf("%p\n", a + 1); // 跳过4个字节

	//数组指针如何使用？
	int a1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int (*pa1)[10] = &a1;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", *((*pa1) + i));//*pa1是数组的首元素地址
	}
	printf("\n");
	//一般不像上面那样使用，数组指针一般常用于二维，及二维数据以上
	//1.常用写法：
	int a2[3][5] = { { 1, 2, 3, 4, 5, }, { 6, 7, 8, 9, 10 } };
	print1(a2,3,5);
	printf("指针写法：\n");
	//2.指针写法：
	print2(a2,3,5);
	//数组名是数组首元素地址，但是二维数组的首元素地址是它的第一行，这里相当于第一行地址，是一维数组

	

	//看下面代码的意思：
	int arr[5];  // 整形数组里面有5个元素
	int *parr1[10]; // 一个数组里面有10个元素，每个元素的类型是int指针
	int(*parr2)[10]; // 数组指针：指针parr2指向一个数组，里面有10个元素，每个元素的类型是int  
	int(*parr3[10])[5]; // 数组指针：parr3指针数组，该数组能够存放10个数组指针，每个数组指针指向一个数组，里面能存5个元素，每个元素是int型

	return 0;
}