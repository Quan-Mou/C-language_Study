sizeof 是一个操作符 计算一个数或者类型所占用内存空间的大小, sizeof()单位是byte（字节）。

strlen() 计算数组字符串的长度。

scanf() 接收从键盘输入的值。

Sleep() 参数是毫秒，表示休眠停顿多久 

system() 是 windows系统函数,里面可以放一些dos命名

system("cls") 清空屏幕

gets() 读取一行的字符串，当读取到换行符时，或者到达文件末尾时，它会停止

### 练习：编写代码，演示多个字符从两端移动，向中间汇聚

~~~c
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main() {
	//编写代码，演示多个字符从两端移动，向中间汇聚
	//welcome to bit...
	//#################
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;
	//条件是当它们当left还小于等于right的时候表示它们还没相交
	while (left<=right) {
		arr2[left] = arr1[left];
		left++;
		arr2[right] = arr1[right];
		right--;
		printf("%s\n", arr2);
		Sleep(1000); // 单位是毫秒，作用是停一秒 要引入头文件<windows.h>
		system("cls"); // 清空屏幕 
	}
	printf("%s\n", arr2);
	return 0;
}
~~~

### 练习：编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，退出程序）

~~~c
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，退出程序）
	char password[] = "abcd";
	char target[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("请输入密码:>\n");
		scanf("%s", target);
		if (strcmp(target, password) == 0) {
			printf("登录成功！\n");
			break;
		}
	}
	//printf("密码错误！");
	if (i == 3) {
		printf("三次密码错误！！退出程序\n");
	}
	return 0;
}
~~~

两个字符比较应该用strcmp函数来比较.

如果用两个字符比较它比的是字符的首字母内存地址

**strcmp()**函数接收两个参数，第一个是要比较的字符，第二个是被比较的字符。如果相等函数返回0，它内部比较的是每个字符的Ascll值。

### 练习：猜数字实现

//生成1-100的随机数
//1.有个菜单 两个选择 1开始游戏 0结束游戏
//如果选择0退出游戏 ，选择1 提示输入一个数，然后开始猜，猜大了就提示猜大了，小了提示猜小了，直到猜对了。
//猜对了不退出游戏，而是继续回到菜单选择

~~~c
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu() {
	printf("****************************\n");
	printf("********* 1.play ***********\n");
	printf("********* 0.exit ***********\n");
	printf("****************************\n");
}
void game() {
	//printf("请选中")
	int ret = rand() % 100 + 1;  //rand生成一个随机数 模100 + 1 生成0-100的随机数      rand之前调用下srand函数
	int  guess = 0;
	while (1)
	{
		printf("请猜数字\n");   //  90 > 80 
		scanf("%d", &guess);
		if (ret > guess) { 
			printf("猜小了\n");
		}
		else if (ret < guess) {
			printf("猜大了\n");
		}
		else {
			printf("猜对了\n");
			break;
		}
	}
}
int main() {
	//猜数字实现
	int input = 0;
	srand((unsigned int)time(NULL));  // 强制类型转换  （类型） 
	do{
		menu();
		printf("输入选项:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入合法的数字\n");
			break;
		}
	} while (input);
	return 0;
}
~~~

# 关于编程

写代码吃力正常吗？

太正常了

1. 大家现在就是在学习写代码，没人天生就会写代码
2. 要有信心，代码能力是练出来的！
3. 正因为不懂，才来学习的

那怎么做？

1. 每节课都认真上，下来总结
2. 代码要学会模仿，不断的思考，然后脱离别人的代码自己写
3. 学会调试代码，感受代码的执行

需要大量练习！！！！

**自信非常重要**，未来面试考察的是一个人的综合素质

不够自信的时候，也发挥不好

#### 代码调试

按f10进入调试，如果没反应按fn+f10。

进入调试后按f10是逐过程调试

f11是逐语句。

### 练习：将三个整数按大小输出

例如：

输入：2 3 1

输出：3 2 1

~~~c
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);
	//printf("%d %d %d \n", a, b, c);
	//输入从大到小
	//调整
	//保证 a 最大 其次是b、c
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c) {
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c) {
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);
 	return 0;
}
~~~



### 练习：打印 1-100之间所有3的倍数

~~~c
#include<stdio.h>
int main() {
	//打印 1-100之间所有3的倍数
	//首先要产生1-100的数
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}
~~~

### 练习：求两个数的最大公约数。

假设最大公约数就是两个数的较小值，能同时整除它们的就是最大公约数

### 练习：判断1000年---2000年之间的闰年

~~~c
#include<stdio.h>
int main() {
	//判断 1000年-2000年的闰年
	//1.能被4整除的就是闰年,不能被100整除就是闰年
	//2.能被400整除是闰年
	int y = 1000;
	int count = 0;
	for (y = 1000; y <= 2000; y++) {
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
			printf("%d ", y);
			count++;
		}
	}
	printf("\n闰年有:%d\n", count);
	return 0;
}
~~~

#### goto语句

goto语句可以跳转循环

C语言中提供了可以随意滥用的 goto语句和标记跳转的标号。

从理论上 goto语句是没有必要的，实践中没有goto语句也可以很容易的写出代码。但是某些场合下goto语句还是用得着的，最常见的用法就是终止程序在某些深度嵌套的结构的处理过程，例如一次跳出两层或多层循环。这种情况使用break是达不到目的的。它只能从最内层循环退出到上一层的循环。

**goto语句只能在一个函数范围内使用。**

~~~c
// goto语句的例子：
#include<stdio.h>
#include<stdlib.h>
int main() {
	//shutdown 
	char input[20] = { 0 };
	//system() 是 windows系统函数
	system("shutdown -s -t 120");
	again:
	printf("你的电脑将在2分钟内关机，请输入爸爸即可取消关机\n");
	printf("请输入:>");
	scanf("%s", input);
	if (strcmp(input, "爸爸") == 0) {
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}
~~~

试试如何将一个exe文件加入到windows的服务程序里面

## 函数

#### 库函数

- 库函数是什么？
  - 我们会频繁使用的函数比如打印信息。这些函数在放在头文件里，所以需要引入。
- 常用库函数
  - IO函数  （输入输出函数）printf() scanf() getchar() putchar()
  - 字符串操作函数 strcmp() strlen()
  - 字符操作函数 toupper()
  - 内存操作函数  memcpy() memcmp() memset()
  - 时间/日期函数 time()
  - 数学函数 sqrt() pow()
  - 其他库函数
- 如何学习库函数？
  -  www.cplusplus.com
  -  MSDN(Microsoft Developer Network)
  -  http://zh.cppreference.com

#### 自定义函数

我们自己写的函数。

~~~c
 #include<stdio.h>
	int	get_Max(int x, int y){
			int z = 0;
			z = x>y?x:y;
			return z; // 返回值 如果这个函数有 
	} 
int main() {
//	写一个函数 求最大值
	int a = 102;
	int b = 20;

	int max = get_Max(a,b); // 把函数的返回值给max 

	printf("最大值：%d",max);	 
	return 0;
}
//	一个函数组成：ret_type fun_name(params1,..); （函数类型 函数名字(函数参数) ） 
//	函数调用：函数名(); 括号里面传入参数，在函数定义接受传入的参数，在函数调用时传入的什么类型的参数，在函数定义时要定义什么接受什么类型的参数 。
//	函数的返回值：如果这个函数有函数值，那么应该根据这个函数返回值，在函数定义的时候也返回一个函数的返回值类型，它们类型要相对应；如果这个函数函数没有返回值，那么这个函数的返回为 (void) 
// 函数参数：函数传入的参数叫做实参，是真实传入的可以是变量，常量，表达式，函数等；函数定义接收的参数叫做形参（形式参数），因为形参只有在调用的时候才会实例化（分配内存单元）所以叫形式参数。形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效。

~~~

- 函数参数
  1. 实参（实际参数）
  2. 形参（形式参数）
- 形参在调用的时候，拥有自己的内存空间，同时拥有实参的一模一样的值，所以我们可以认为**形参实例化之后相当于实参的一份临时拷贝**。

- 函数调用：
  - 传值调用
    - 函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。
  - 传址调用
    - 把函数外部的要传入值的内存地址传给函数的一种调用方式
    - 这种传参方式让函数内部和函数外部建立起真正的联系，也就是在函数内部可以操作改变函数外部传入的变量。

###### 函数写交换两个变量的值

~~~c
void Swap(int* px,int* py){
		int z = 0;
		z = *px;
		*px = *py;
		*py = z;
	}
#include<stdio.h>
int main(){
//	写一个函数交换两个变量的值
	int a = 10;
	int b = 20;
	printf("交换前的值：a=%d b=%d\n",a,b);
	Swap(&a,&b); 
	printf("交换后的值：a=%d b=%d\n",a,b);
	return 0;
}
~~~

###### 函数写200-300的素数

~~~c
 #include<stdio.h>
int demo(int a) {
	//产生2->a-1
	int z = 0;
	for (z = 2; z < a; z++) {
		if (a %z == 0) {
			//如果能被整除说明不是素数
			return 0;
		}
	}
	return 1;
}
int main() {
	//写一个函数：求200-300的素数
	int a = 0;
		
	for (a = 200; a <= 300; a++) {
		if (demo(a) == 1) {
			
			printf("%d ", a);
		}
	}
	return 0;
}
~~~

###### 函数写1000-2000的闰年

~~~c
 #include<stdio.h>
//写一个函数判断1000-2000的闰年

	//设计一个函数 如果是闰年返回1,不是返回0
int demo(int a) {
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)){
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int count = 0;
	int a = 0;
	for (a = 1000; a <= 2000; a++) {
		if (demo(a) == 1) {
			count++;
			printf("%d ", a);
		}
	}
	printf("\n一共有闰年：%d\n", count);
	return 0;
}
~~~

###### 函数写二分查找

~~~c
 #include<stdio.h>
//函数写 整型有序数组的二分查找
	//设计一个函数 如果找到了就返回它的下标，没找到就返回-1
int demo(int arr[],int tar,int sz) {
	int left = 0;
	int right = sz -1;
	
	while (left <=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > tar) {  
			right = mid - 1;
		}
		else if (arr[mid] < tar) {
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
int main() {
	int arr[] = { 1, 2, 3, 4 ,5, 6, 7, 8, 9, 10 };
	int target = 1;
	int sz = sizeof(arr) / sizeof(arr[0]) ;
	int ret = demo(arr, target, sz);
	if (ret != -1)
	{
		printf("%d", ret);
	}
	else {
		printf("找不到\n");
	}
	return 0;
}
~~~

###### 写一个函数，每调用一次就会将num的值增加1

~~~c
 #include<stdio.h>
void Add(int* num) {
	//++*num; 或者下面这种
	(*num)++;
}
int main() {
	//写一个函数，每调用一次就会将num的值增加1
	int num = 0;
	Add(&num);
	printf("%d ", num);
	Add(&num);
	printf("%d ", num);
	Add(&num);
	Add(&num);
	Add(&num);
	Add(&num);
	Add(&num);
	Add(&num);
	Add(&num);
	Add(&num);
	printf("%d ", num);
	return 0;
}
~~~

#### 函数的嵌套调用和链式访问

函数和函数之间是平等，函数不可以嵌套定义，但是可以嵌套调用

~~~c
// 嵌套调用
void demo1() {
	printf("hahah\n");
}

void demo2() {
	int i = 0;
	for (i = 0; i < 3; i++) {
		demo1();
	}
}

int main() {
	demo2();
	return 0;
}
~~~

- 链式访问
  - 把一个函数的返回值作为另外一个函数的参数

~~~c
int main() {
	char str[] = { "abc" };
	int len = strlen(str);
	printf("%d\n", len);
	printf("%d\n", strlen(str));
	return 0;
}

-------------------
int main() {
	//这里要注意printf的返回值。它的返回值是打印在屏幕上的字符的个数
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}
~~~

#### 函数声明和定义

###### 函数声明

1. 告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，函数
   声明决定不了。
2. 函数的声明一般出现在函数的使用之前。要满足先声明后使用。
3. 函数的声明一般要放在头文件中的。

  - 比如我在一个sum.c文件，这个文件是放一个求和函数，我把这个函数定义放在个一个头文件中名为sum.h
  - sum.c是函数的定义（也就是是函数的实现），sum.h是这个函数的声明。
  - 我在test.c文件里要用这个函数的话需要引入它的头文件：`#include "sum.h"` 然后就可以使用这个函数了。

###### 函数的定义

函数的定义是指函数的具体实现。交代函数的功能实现

#### 递归

###### 递归的两个必要条件

1. 有一个终止条件。当满足这个条件就不在递归。否则它就是一个死递归（死循环）会造成**栈溢出**（Stack Overflow）
2. 每次调用自身，就里目标更近。

递归不适合太过复杂的问题

递归有了结果后层层往回反回去。

~~~c
#include<stdio.h>

void print(unsigned int num) {
// 123 > 9
//1234/10 = 123
//123/10 = 12
//12/10 = 1
//1>9
if (num > 9) {
print(num / 10);
}
printf("%d ",num % 10);
}

int main() {
// 递归的两个必要条件 ：
// 1. 存在限制条件，当满足这限制条件，便不再递归
// 2.每次调用递归，离那个限制条件就越近
// 输入一个数：1234 让它输出 1 2 3 4；
unsigned int num = 0;
scanf("%d",&num);
print(num);
return 0;
}
~~~

###### 模拟实现strlen函数

- 使用普通的函数：

~~~c
#include<stdio.h>
	// 实际上实参传入的是一个内存地址，所以要用指针变量来接收
int getStrLen(char* str) {
	int count = 0;
   // *str :解引用 得到str的第一个地址值 “a”
	while (*str != '\0') {
		count++;
		*str++;
	}
	return count;
	
}

//普通的函数写一个求字符串长度
int main() {
	char arr[] = { "abccdf" };
    // 传入的其实是数组的第一个内存地址
	printf("%d", getStrLen(arr));
	return 0;
}
~~~

- 使用递归函数：

~~~c
int strLen(char* str) {
	if (*str != '\0') {
		return 1 + strLen(str + 1);
	}
	else {
		return 0;
	}
}
//编写函数 不允许创建临时变量，求字符串的长度
int main() {
	char str[] = "abc";
	printf("%d", strLen(str));
	return 0;
}
~~~

###### 用递归求n的阶乘

~~~c
int demo(int n) {
	if (n >1) {
		return n*demo(n - 1);
	}
	else {
		return 1;
	}
}

//使用递归求n的阶乘
int main() {
	int num = 0;
	scanf("%d", &num);
	int ret= demo(num);
	printf("%d", ret);
	return 0;
}
~~~

###### 递归求n的斐波那契数

~~~c
//求第n个裴波那契数（不考虑溢出）
 
// 1 1 2 3 5 8 13 21 34 55 89 ...
int demo(int n) {
	if (n <= 2) {
		return 1;
	}
	else {
		return demo(n - 1) + demo(n - 2);
	}
}

int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d", demo(n));
	return 0;
}

// 迭代写法
int demo(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) {
		c = a + b;
		a = b;
		b = c;
		n--; //每次n-- 不加会死循环
	}
	return c;
}

int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d", demo(n));
	return 0;
}
~~~

使用递归求斐波那契数不好：**效率太低，重复大量的计算**

什么时候使用递归最好：

1. 如果这个功能使用递归来非常简单，写起来代码很容易理解，而且写完没有明显的缺陷。这个时候可以用递归。
2. 但如果用递归的方法去求解的时候发现写起来挺简单，但是有明显的缺陷，要么栈溢出了，要不效率底下，这个时候写非递归的方式，迭代的方式来写。

- 了解递归汉诺塔
- 了解青蛙跳台阶
- 斐波那契数列的问题

###### 写：接收一个整型值（无符号），按顺序打印它的每一位，例如：输入1234 输出 1 2 3 4

~~~c
void print(unsigned int num) {
	// 123 > 9
	//1234/10 = 123
	//123/10 = 12
	//12/10 = 1
	//1>9
	if (num > 9) {
		print(num / 10);
	}
	printf("%d ", num % 10);
}

int main() {
	// 递归的两个必要条件 ：
	// 1. 存在限制条件，当满足这限制条件，便不再递归
	// 2.每次调用递归，离那个限制条件就越近
	// 输入一个数：1234 让它输出 1 2 3 4；
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}
~~~



###### 写：编写程序数一下 1到100的所有整数中出现多少个数字9？

~~~c
int main() {
	//9 19 29 39 49 59 69 79 89 99 90 91 92 93 94 95 96 97 98 99
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++) {
		if (i / 9 == 10) {
			count++;
		}
		if (i % 10 == 9) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
~~~



###### 写：求10个整数中最大值?

~~~c
int main() {
	//char num[] = { -1, 2, 3, 4, 5, 20, 7, 8, 9, 10 };
	int num[] = { -1, -2, -3, -4, -5, -20, -7, -8, -9, -10 };
	int max = num[0];
	for (int i = 0; i < 10; i++) {
		if ( num[i] > max) {
			max = num[i];
		}
	}
	printf("%d", max);
	return 0;
}
~~~



###### 写：在屏幕上输入9*9乘法口诀表

~~~c
//1 * 1 = 2;
//2 * 1 = 2; 2 * 2 = 4;
//3 * 1 = 3; 3 * 2 = 6; 3 * 3 = 9;
//4 * 1 = 4; 4 * 2 = 8; 4 * 3 = 12; 4 * 4 = 16;
int main() {
	int i = 0;
    //外层有9
	for (i = 1; i <= 9; i++) {
        //int j = 1; // 注意这个j，每次内层循环后j又变为了1
		for (int j = 1; j <= i; j++) {
			//j*i  1x1 =1
			//j*2  2*1 =2; 2*2=4; ....
			printf("%d*%d=%d ", i, j, i*j);
		}
		printf("\n");	
	}
		
	return 0;
}
~~~

###### 分析下面递归函数的返回值是多少

~~~c
//根据下面的递归函数，调用Fun(2),返回值是多少？
int Fun(int n) {
	if (n == 5) {
		return 2;
	}
	else {
		return 2 * Fun(n + 1);
	}
}
int main() {
	Fun(2);
	return 0;
}
~~~

![](https://i.bmp.ovh/imgs/2021/10/d9146b0000cb01b3.png)

###### 编写函数实现字符串翻转

~~~c
#include<stdio.h>
void  remover_str() {

}
int main() {
    remover_str()
    return 0;
}
~~~







###### 递归计算每一个数的每位之和

~~~c
int DigitSum(int n) {
	if (n > 9) {
		return DigitSum(n  / 10) + n % 10;
	}
	else {
		return n;
	}
	
}
int main() {	
	//计算每一个数的每位之和
	//题目内容： 调动DigitSum(1)，则应该返回1+7+2+9，它的和是19
	//输入：1729，输出19
	/*int input = 0;
	scanf("%d", &input);*/


	int ret= DigitSum(1729); // 
	printf("%d", ret);
	return 0;
}
~~~

###### 编写一个函数实现n的k次方，使用递归实现

~~~c
int Pow(int n ,int k) {
	if (k == 0) {
		return 1;
	}
	else if (k > 0) {
		return n * Pow(n, k - 1);
	}
}
	
int main() {
	//编写一个函数实现n的k次方，使用递归实现
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	printf("%d", Pow(n, k));
	return 0;
}
~~~

## 数组

数组分为一维，二维，多维。

###### 一维数组：

~~~c
#define M 5
int main() {
	//数组：一组相同数据类型的结合
	//数组的定义：  type_t  arr_name [const_n]
	//[const_n] 里面是数组长度，只能是常量表达式来指定数组的大小
	//const 不可以当做常量给数组长度，const修饰的常量本质上是一个变量
//#define 宏定义可以当做数组长度
	int arr1[M] = { 1, 2, 3, 4, 5 };
	//数组的初始化：数组初始化就是在数组的定义时就给它赋好值
	int arr2[3] = { 1,2,3 }; // 完全初始化
	int arr3[5] = { 1, 2 }; // 不完全初始化  指定了数组长度是5，后面的都是0 
	int arr4[] = { 10, 20, 30, 40 }; // 这种没有指定数组长度的，它会根据它里面元素默认加上。效果跟arr1一样

	char str1[] = { 'a','b','c' }; //  内容就是 'a' 'b' 'c' 
	char str2[5] = { 'a', 'b', 'c' }; // 后面两个给 0 或者是 '\0' 填满，因为0的ASCll值是'\0'
	char str3[] = { "abc" }; // 默认后面会加上一个'\0' 它是字符串的结束标志
	char str4[5] = { "abc" }; // 长度未满用0 || '\0' 补满

	printf("%d\n", strlen(str1)); // 注意这个字符的长度是随机值，因为它不知道什么时候会碰到 '\0' ，碰到'\0' 才算结束
	printf("%d\n", strlen(str2)); // 这个我们长度给了5 ，里面的内容不足5个，用'\0' 补，它的第三个后就是 '\0'，所有是3
	printf("%d\n", strlen(str4));

	//如果拿到数组里面的数据：通过一个操作符：[] 下标引用操作符通过循环来拿到它里面的数据,小标从0 开始。其实它就是数组访问的操作，
	printf("%c\n", str1[0]); 
	//数组的大小可以通过计算得到：strlen(arr) / strlen(arr[0])

	//一维数据在内存中的储存
	int	demo[10] = { 1,2,3,4 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%p\n", &demo[i]);
		/*仔细观察输出的结果，我们知道，随着数组下标的增长，元素的地址，也在有规律的递增。
			由此可以得出结论：数组在内存中是连续存放的*/
	}
	//数组名是数组的首元素地址 我们知道了数组首元素地址就可以知道它后面的元素
	printf("%d\n", *demo); // 得到第一个元素的地址
	int* p = demo; //  既然数组名是数组的首元素地址，把首元素地址给p
	
	for (int i = 0; i < 10; i++) {
		printf("%d ", *p);
		p++; // p++ 指向后面的地址，我们就可以通过它的首元素地址，拿到整个数组元素
	}
	return 0;
}
~~~

**只有字符数组里面有'\0' 整型数组是没有'\0'的。**

###### 二维数组：

~~~c
int main() {
	//二维数组
	//二维数组的创建：
	//第一个[]里面存的是行，第二个[]里面存的是列，表示这是一个几行几列的数组
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };// 完全初始化
	int arr2[3][4] = { 1, 2, 3, 4,5,6,7,8 }; // 不完全初始化，没满数组个数用 0补
	int arr3[][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 行数可以省略，列数不可以!它会根据里面的元素，生成行
	int arr4[4][3] = { {1,2,},{4,5,6}, {7,8,9} };//一个{} 表示一个行数，里面的内容表示列的内容，同样的长度不够用 0 补
	//访问二维数组 用下标
	printf("%d\n", arr4[0][0]); // 行和列的第一个元素都是从0开始 
	printf("%d\n", arr4[1][0]);// 访问第二行的第一列的元素
	
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("arr4[%d][%d]=%d ", i,j,arr4[i][j]); // 知道arr4的元素内容
		}
		printf("\n");
	}

	//二维数组在内存中的存储
	//int a = 0;
	//int b = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("arr4[%d][%d]=%p ", i, j, &arr4[i][j]); // 二维数据在内存中的存储也是连续的
		}
		printf("\n");
	}
	
	int* p = arr4;
	int n = 0;
	for (n = 0; n < 12; n++) {
		printf("%d   ", *p); //既然二维的数组的内存存储也是连续的那么我们通过这种方式得到它的全部元素
		p++;
	}

	//数组作为函数参数
	printf("-------------------\n");
	int sortData[] = { 10,9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(sortData) / sizeof(sortData[0]) - 1;
	Sort(sortData,sz);
	
  	数组作为函数传参的时候，有两种形式：
    1.数组形式
    2.指针形式
    注意：它们的本质上传的都是指针
    
	//数组名是什么？ 
	//数组名是数组首元素地址
	//但是有两种例外：1.sizeof(arr) [在sizeof()里面的数组名不是数组元素首地址，而是整个数组，注意这里要单独放在sizeof里面] 2. &数组名，取出的是整个数组，这里的数组名表示的是整个数组
	int demo1[] = { 1, 2, 3 };
	printf("\n%p\n", demo1);
	printf("%p\n", &demo1);
	// 打印上面两个会发现地址是一样的。这里它们的意思不是一样的。
	printf("--------------\n");
	//demo1++;
	int* p1 = demo1;
	printf("%p\n", p1);
	p1++;
	printf("%p\n", p1);
	printf("%d\n", *p1);
	return 0;
}
~~~

## 操作符

操作符分类：

1. 算术操作符
2. 移位操作符
3. 位操作符
4. 赋值操作符
5. 单目操作符
6. 关系操作符
7. 逻辑操作符
8. 条件操作符
9. 逗号表达式
10. 下标引用，函数调用和结构成员

###### 算术操作符:

~~~c
//算术运算符：+ - * / %
	//int a = 10 / 3; // 如果都是整数，那么它们进行的整数除法，只能得到整数，3
	//printf("%d", a);
	
	//float b = 10 / 3.0; // 在两边任意一遍添加.0就可以得到小数
	//printf("%f", b);
	
	//int c = 10 % 2;  // 取模运算只能还是两个整数得到的是余数
	//printf("%d", c);
~~~

###### 移位操作符

~~~c
//移位运算符
	//左移：<<  右移：>>
	//左移：移的是它的二进制序列移除的丢弃，位数不足后面用0补齐
	//int a = 10 << 1;
	//printf("%d", a);

//右移：(右移又分两种：)
1.算术右移
    右边丢弃，左边补原符号位
2.逻辑右移
    右边丢弃，左边补0
    
    //int a = 10;
	//int a = 10 >> 1;
	//printf("%d", a); 

	int a = -1;
	int b = a >> 1;
	//负数：-1 存放在内存中：
	//整除的二进制表示形式：有三种：
	//原码：直接根据数值写出的二进制序列就是原码
	//反码：原码的符号位不变，其他位按位取反就是反码
	//补码：反码+1 就是补码
	上面针对的是负数，而正数原码，反码补码相同
	printf("%d", b);
~~~

###### 位操作符

位操作符：按位&(按位与)  按位|(按位或) 按位^(按位异或)

规则:

按位与 &：比较它们的二进制位：有一个是0为0，都是1为1

按位或 |：比较它们的二进制位：有一个是1为1，都是0为0

按位异或 ^:比较它们的二进制位：相同为0，相异为1

~~~c
//位操作符
	//1. 按位（二进制位）与（&）2.按位或（|）3.按位异或（^）
	//注意：它们的操作符必须是整数
	/*int a = 5;
	int b = a & 3;
	printf("%d", b);*/
	//它们对应的是它们两个的二进制
	//10: 00000000000000000000000000001010
	//1 : 00000000000000000000000000000001
	//00000000000000000000000000000000 = 0
	//5：00000000000000000000000000000101
	//3：00000000000000000000000000000011
	//00000000000000000000000000000001 = 1

	//规则：对应的二进制位：对应的二进制位两个只要有0按位与的结果就是0，对应的两个都是1按位与的结果才是1

	//2.按位或
	//int a = 20;
	//int b = a | 9;
	//printf("%d", b);
	//规则：对应的二进制位如果两个同时为0就为0，两个如果有1就为1
	//20: 00000000000000000000000000010100
	//9： 00000000000000000000000000001001
		//00000000000000000000000000011101 = 29

	//按位异或 ^
	//int a = 13;
	//int b = a ^ 4;
	//printf("%d", b);
	//规则:相同为0 相异为1
	//13:00000000000000000000000000001101
	//4: 00000000000000000000000000000100
	   //00000000000000000000000000001001 = 9


	//交换两个变量的值：不能使用第三个变量
	//方法1：
	//int a = 20;
	//int b = 30;
	//printf("a = %d b = %d\n", a, b);
 //   a = a + b;// 20 + 30 = 50
	//b = a - b;// 50 - 30 = 20
	//a = a - b;// 50 - 20 = 30
	//printf("a = %d b = %d", a, b);
	//方法2：使用位操作符
~~~

###### 赋值操作符

~~~c
//赋值操作符
	//= += -= *= /= %= <<= >>= &= |= ^=  其中 = 是赋值 而其他的是复复合赋值符
	//int a = 10;
	//a = a + 5;
	//a += 5;
~~~

###### 单目操作符

~~~c
//单目运算符
	//单目运算符是值只有一个操作符
	// ! - + sizeof ~ -- ++ &  * (类型)
	//分别是： 逻辑反操作 负值 正值 计算操作数的长度、内存大小（单位为字节）对一个数的二进制按位取反 前、后置减减 前、后置加加 取地址 间接访问操作符 强制类型转换
	
	//int flag = 2;
	//if (!flag)
	//{
	//	printf("真");
	//}
	//if (flag) 
	//{
	//	printf("假");
	//}


	//int a = 10;
	//int b = -a;
	//printf("%d", b);

	//正数一般都省略
	
	
	//int a = 10;
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof a);//它不是一个函数可以不用加() 如果是表达式可以括号，如果还是类型就不可以省略 比如：sizeof int

	//int b[10] = { 0 };
	//printf("%d\n", sizeof(b));
	//printf("%d", sizeof(int [10]));

	//按位取反 ~  原来是0的变1  1变0
//	int a = -1;
//	int b = ~a;
//	printf("%d", b);
	//取补码的反码
	//a:00000000000000000000000000001010
	//b:11111111111111111111111111110101
	
	//--
	//int a = 10;
	//int c = a++;
	//int b = ++a; // 相++ 后运算
	////前置++是先++后赋值，后置++是先赋值++，--同理
	//printf("%d\n", c);
	//printf("%d\n", b);


//int a = 1;
//int b = (++a) + (++a) + (++a);
//printf("%d", b);

//printf("%d", sizeof(char));


	//&取地址
	//取的是它的内存地址
	//int a = 10;
	//int *pa = &a; // 把a的地址拿到给pa，而pa因为存的是内存地址，所以用一个指针变量接收，取到的a是一个整型，所以用一个整型指针变量 pa接收a的地址
	//printf("%p\n", pa); 
	//printf("%d\n", *pa); // * 是解引用操作符或者叫简介访问操作符（通过它解引用可以得到那个地址的值）
	//*pa = 20; // 把 a 的值改为20
	//printf("%d\n", *pa);


	//强制类型转换: (类型) 
	//int price = 103;
	//int quantity = 7;

	//float num;
	//num = (float) price / quantity; // 把他们相除的结果  转换成float
	//printf("%lf", num);
~~~

###### 关系操作符

~~~c
//关系操作符： > >= < <= != == 
	//int a = 10;
	//int b = 20;
	//if (a + b > 40)
	//{
	//	printf("%d+%d大于%d", a, b, 20);
	//}
	//if (a != b) {
	//	printf("yes!");
	//}

	//==是判断是否相等
~~~

###### 逻辑操作符

~~~c
//逻辑操作符 && ||
	
	//int a = 1;
	//int b = 2;
	//if (a && b) 
	//{
	//	printf("必须要两边同时为真才行！\n");// 如果把a改为0就不行
	//}
	//int c = 1;
	//int d = 0;
	//if (c || d)
	//{
	//	printf("两边只要有一边为0就行了！\n");
	//}


	
	//int i = 0, a = 0, b = 2, c = 3, d = 5;
	//i = a++ && ++b && d++; // 这里前面a++  是后置++ 先使用再++  a=0， 0 &&有一个为假了，后面就不用在逻辑与。所以a++ 就直接返回了false
	//printf("a=%d\n b=%d\n c =%d\n d=%d\n", a, b, c, d);
	// 逻辑与也是一样的
~~~

###### 条件操作符(三目运算符)

~~~c
//条件操作符（也叫三目运算符）有三个操作数

	//int a = 20;
	//int b = 30;
	//int max = 0;
	//max = a > b ? a : b; // 前面a>b 这个表达式如果成立就返回a否则就返回b 
	//printf("%d", max); 
~~~

###### 逗号表达式

~~~c
//逗号表达式
	//exp1,exp2,exp3,...expn
	int b = 3;
	int c = 2;
	int a = (b += 3, c = b - 2,c-=1); // 逗号表达式是从左往右运算，而这个逗号表达式的最终返回结果是最后一个表达式
	printf("%d", a); // 3
~~~

###### 下标引用，函数调用和结构体成员

~~~c
#define _CRT_SECURE_NO_WARNINGS 1

int Add(int a, int b)
{
	return a + b;
}
int main()
{
	//下标引用操作符，函数调用操作符、结构成员

	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//printf("%d", arr[4]);// [] -> 它的操作数是一个数组名+索引值

	//int a = 2;
	//int b = 15;
	//int sum = Add(a, b); // () -> 函数调用 它接收一个或多个参数，第一个参数是函数名，其余参数是传递的参数
	//printf("%d", sum);


	//当我想要描述一本书、或者起其他的有多个属性的东西，我们该怎么声明？
	//C提供了我们自定义的类型（结构体）类型
	//结构体

	//struct 声明是结构体类型
	//book 是结构体名
	struct book {
		//这里是结构体成员（变量）
		char name[20];
		char id[20];
		int price;
	};
	struct book book1 = {"C语言程序设计","2021_11_9",60}; // 对结构体初始化
	//如何访问一个结构体成员？ 
	//1.结构体.成员  
	//2.结构体指针->成员名
	/*printf("%s\n", book1.name);
	printf("%s\n", book1.id);
	printf("%d\n", book1.price);*/ //

	struct book *  Pbook1 = &book1;  // 把它的内存地址给 Pbook1
	//printf("%s\n", (*Pbook1).name);
	//printf("%s\n", (*Pbook1).id);
	//printf("%d\n", (*Pbook1).price);
	
	//使用 ->
	printf("%s\n", Pbook1->name);
	printf("%s\n", Pbook1->id);
	printf("%d\n", Pbook1->price);
	return 0;

}
~~~

###### 表达式求值

~~~c
//表达式求值
	//表达式求值的顺序一部分是由操作符的优先级和结合性决定
	//同样，有些表达式的操作数在求值的过程中可能需要转换为其他类型

	//隐式类型转换
	//C语言的整型运算总是至少以缺省整型类型的精度来进行的。
	//为了获得这个精度，表达式中的字符和短整型操作数在使用之前被转换为普通整型，这种转换被称为整型提升！
	//整型提升的意义：
	//表达式的整型运算要在CPU的相应运算器件内执行，CPU内整型运算器(ALU)的操作数的字节长度一般就是int的字节长度，同时也是CPU的通用寄存器的长度。
	//因此，即使两个char类型的相加，在CPU执行时实际上也要先转换为CPU内整型操作数的标准长度。
	//通用CPU（general - purpose CPU）是难以直接实现两个8比特字节直接相加运算（虽然机器指令中可能有这种字节相加指令）。所以，表达式中各种长度可能小于int长度的整型值，都必须先转换为int或unsigned int，然后才能送入CPU去执行运算。
	
	char a, b, c;
	a = b + b; //char 占2个字节，被提升为普通整型占用4字节，最后占用2字节，其余被截断
	//如何进行整体提升呢？
	//整形提升是按照变量的数据类型的符号位来提升的
	//b和c的值被提升为普通整型，然后再执行加法运算。
	//加法运算完成之后，结果将被截断，然后再存储于a中。


	//算术转换
	//如果某个操作符的各个操作数属于不同的类型，那么除非其中一个操作数的转换为另一个操作数的类
	//型，否则操作就无法进行。下面的层次体系称为寻常算术转换。

	//long double
	//double
	//float
	//unsigned long int
	//long int
	//unsigned int
	//int

	//它们的转换以更大的空间为

	//float f = 3.14;
	//int num = f;//隐式转换，会有精度丢失


	//操作符的属性
	//复杂表达式的求值有三个影响的因素。
	//	1. 操作符的优先级
	//	2. 操作符的结合性
	//	3. 是否控制求值顺序。

	//两个相邻的操作符先执行哪个？取决于他们的优先级。如果两者的优先级相同，取决于他们的结合性。

	//一些问题表达式
	//	a*b + c*d + e*f
	//注释：代码1在计算的时候，由于*比 + 的优先级高，只能保证，*的计算是比 + 早，但是优先级并
	//	不能决定第三个*比第一个 + 早执行。

	//c + --c;
	//注释：同上，操作符的优先级只能决定自减--的运算在 + 的运算的前面，但是我们并没有办法得
	//知， + 操作符的左操作数的获取在右操作数之前还是之后求值，所以结果是不可预测的，是有歧义的。


	//非法表达式:
		int i = 10;
		i = i-- - --i * (i = -3) * i++ + ++i;
		printf("i = %d\n", i);
		//在不同编译器中非法表达式程序的结果不同



		//int fun()
		//{
		//	static int count = 1;
		//	return ++count;
		//}
		//int main()
		//{
		//	int answer;
		//	answer = fun() - fun() * fun();
		//	printf("%d\n", answer);//输出多少？
		//	return 0;
		//}
		//这个代码有没有实际的问题？
		//	有问题！
		//	虽然在大多数的编译器上求得结果都是相同的。
		//	但是上述代码 answer = fun() - fun() * fun(); 中我们只能通过操作符的优先级得知：先算乘法，
		//	再算减法。
		//	函数的调用先后顺序无法通过操作符的优先级确定


		//总结：我们写出的表达式如果不能通过操作符的属性确定唯一的计算路径，那这个表达式就是存在问题的。
~~~

### 练习：实现函数init() 初始化数组全为0

### 练习：实现print() 打印数组的每一位

### 练习：实现removerse() 函数完成数组的逆置

### 练习：交换两个数组的内容 它们长度一样

~~~c
//实现函数init() 初始化数组全为0
		//实现print() 打印数组的每一位
		//实现reverse() 函数完成数组的逆置
		//交换两个数组的内容 它们长度一样

		//1.init
		//int arr[] = { 34, 23, 435, 64, 45 };
		//int sz = sizeof(arr) / sizeof(arr[0]);
		//int i = 0;
		//init(arr,sz);
		//int j = 0;
		//for (j = 0; j < sz; j++)
		//{
		//	printf("%d ", arr[j]);
		//}

		
		//2.print
		//char str[] = { "abcdef" };
		//int sz = sizeof(str) / sizeof(str[0]);
		//print(str,sz);

		//3.reverse
		//int arr[] = { 1, 3, 5, 7, 9 };
		//int sz = sizeof(arr) / sizeof(arr[0]);
		//reverse(arr,sz);
		//for (int i = 0; i < sz; i++)
		//{
		//	printf("%d ", arr[i]);
		//}

		//4.交换两个数组的内容
		//int arr1[] = { 1, 3, 5, 7, 9 };
		//int arr2[] = { 2, 4, 6, 8, 10 };
		//int i = 0;

		//for (i = 0; i < 5; i++)
		//{
		//	int tmp = arr1[i];
		//	arr1[i] = arr2[i];
		//	arr2[i] = tmp;
		//}
		//int j = 0;
		//for (j = 0; j < 5; j++)
		//{
		//	printf("%d ", arr1[j]);
		//}
		//printf("\n");
		//for (int a  = 0; a <5; a++)
		//{
		//	printf("%d ", arr2[a]);
		//}
~~~

## 指针初阶

###### 指针是什么？

在计算机科学中，指针（Pointer）是编程语言中的一个对象，利用地址，它的值直接指向
（points to）存在电脑存储器中另一个地方的值。由于通过**地址能找到所需的变量单元**，可以
说，地址指向该变量单元。因此，将地址形象化的称为“指针”。意思是通过它能找到以它为地址
的内存单元。

~~~c
//int a = 10; // 向内存中申请了一块空间
	//char * pa = &a; // 把a的地址放到pa里面，pa就是一个指针变量  它的地址值是一个整型，所以是一个整型指针
	//指针就是地址 通过地址可以找到那个值

//printf("%d", sizeof(pa)); 
//指针变量是存的还是多大的内存空间 
~~~

###### 指针大小？

对于32位的机器，假设有32根地址线，那么假设每根地址线在寻址的时候产生高电平（高电压）和低电平（低电压）就是（1或者0);

那么32根地址线产生的地址就会是：

- 00000000 00000000 00000000 00000000
- 00000000 00000000 00000000 00000001
- ...
- 11111111 11111111 11111111 11111111

这里就有2的32次方个地址。

每个地址标识一个字节，那我们就可以给 （2^32Byte == 2^32/1024KB ==
2^32/1024/1024MB==2^32/1024/1024/1024GB == 4GB） 4G的空闲进行编址。

同样的方法，那64位机器，如果给64根地址线，那能编址多大空间，自己计算。

**这里我们就明白：**

- 在32位的机器上，地址是32个0或者1组成二进制序列，那地址就得用4个字节的空间来存储，所
  以一个指针变量的大小就应该是4个字节
- 那如果在64位机器上，如果有64个地址线，那一个指针变量的大小是8个字节，才能存放一个地
  址。

**总结：**

- 指针是用来存放地址的，地址是唯一标示一块地址空间的。
- 指针的大小在32位平台是4个字节，在64位平台是8个字节。

###### 指针类型

指针也有不同的类型。比如int* short*...

那么有这么多的类型有什么意义？

1. 指针类型决定了：指针走一步，能走多远，（步长）
2. 指针类型决定了：指针解引用的权限有多大

~~~c
	int arr[] = {1,2,3,4,5,6,7};
	//int* pa = arr;
	//printf("%d\n", *pa);
	//pa++;
	//printf("%d\n", *pa);

	char* pa = arr;
	printf("%d\n", *pa);
	// 这里++ 因为是char类型 只有了一个字节。
	pa++;
	printf("%d\n", *pa);

	// --------------------
	int n = 10;
	char* pc = (char*)&n;
	int *pi = &n;
	printf("%p\n", &n);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	printf("%p\n", pi);
	printf("%p\n", pi + 1);
	// 会发现这里int+1 走了4字节。而char+1 只走了1字节
	//总结：指针的类型决定了指针向前或者向后走一步有多大（距离）。
~~~

###### 野指针

概念：野指针就是指针指向的位置不未知的（随机的、不正确的、没有明确限制的）。

1. 指针未初始化
2. 指针越界访问
3. 指针指向的空间释放

~~~c
int * test(int* a)
{
	return a;
}


//1.指针未初始化
	//int *p;

	//2.指针越界访问
	//int num[] = { 23, 32, 43, 54,75, 66, 77, 58, 49, 210 };
	//int* pn = num;
	//int i = 0;
	//
	//for (i = 0; i <= 10; i++)
	//{
	//	*pn = i;
	//	pn++; //数组越界了 == 10 的时候没有申请这个空间
	//}

	//3.指针指向的空间释放
	//int a = 10;
	//int * pa = test(&a); // 这个函数传入以地址，并且返回了这个地址，返回值在出了函数就销毁了。
~~~

如何规避野指针？

1. 指针初始化
2. 小心指针越界
3. 指针指向空间释放及时置NULL
4. 避免返回局部变量的地址
5. 指针使用之前检查有效性

###### 指针运算

- 指针+-整数
- 指针-指针
- 指针的关系运算

~~~c
for (vp = &values[N_VALUES]; vp > &values[0];)
{
	*--vp = 0;
}
    
    


int a = 10;
int* pa = &a;
pa++; // 指针+ ，同样-也可以

// 指针-指针
int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
printf("%d", &arr[9] - arr); // 指针-指针得到的是它们之间的间隔多少
//使用指针运算求字符串的长度
int PtrStrLen(char* str)
{
    // 拿到它的第一个地址和最后一个地址相减
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
char str[] = { "abcdef" };
printf("%d", PtrStrLen(str));
~~~

**标准规定：**
允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许
与指向第一个元素之前的那个内存位置的指针进行比较。

###### 指针和数组

~~~c
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	//指针和数组
	//数组名是什么？数组名是数组首元素的地址
	int arr[5] = { 1, 2, 3, 4, 5 };
	printf("%p\n", &arr[0]);
	printf("%p\n", arr);


	int sz = sizeof(arr) / sizeof(arr[0]);
	int* pa = arr;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p <====> p+%d = %p\n",i,&arr[i],i,pa+i);
		//pa+i是计算数组下标为i的地址
	}

	//通过指针来访问数组

	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *(pa+i));
	}
	//arr[2]
	//[] 是一个操作数 arr 和 2 是操作数 ，a+b可不可以写成b+a呢？，有了这层理论，arr[2] 可不可以写成 2[arr] 呢？
	printf("%d\n", 2[arr]);
	printf("%d\n", arr[2]);

	//arr[2] ---> *(arr + 2)---> *(2 + arr)---> 2[arr]


	//arr[2] <===> *(arr+2) <===> *(p+2) <===> *(2+p) <===> *(2+arr) <===> 2[arr]
	//2[arr] <===> *(arr+2)

	return 0;
}
~~~

###### 二级指针

~~~c
//二级指针
	//指针变量也是变量 是变量就有地址，那指针变量的地址存在哪里？

	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	//a的地址存放在 pa里面，而pa的地址存在ppa中，pa是一级指针，ppa就是二级指针

	//二级指针的运算
	//通过 *ppa中的地址进行解引用得到的是 pa，*ppa访问的就是pa
	//**ppa先解引用得到pa再对pa进行解引用找到a
	printf("%p\n", pa);
	printf("%p\n", *ppa);
	printf("%d\n", **ppa);
	**ppa = 20;
	printf("%d", **ppa);
~~~

###### 指针数组

~~~c
//指针数组
	//对于数组有：整型数组 字符数组 ... 
	//那指针数组是数组还是指针？
	//是指针，存放指针的数组
	int* arr[5]; // arr是一个数组，有5个元素，每个元素存放的是整型指针
~~~

## 结构体初级

###### 结构体类型声明

###### 结构体初始化

###### 结构体成员访问

###### 结构体传参

~~~c
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Stu {
	char name[20]; // 
	int age;
	char sex[5];
	char id[20];
};
void print1(struct Stu s1)
{
	printf("%s %d %s %s\n", s1.name, s1.sex, s1.sex,s1.id);
};
void print2(struct Stu* s1)
{
	printf("%s %d %s %s\n", s1->name, s1->age, s1->sex, s1->id);
}
int main()
{
	//结构体
	//结构体是一个集合，这些值被称为成员变量，结构的每个成员都可以是不同类型的变量
	
	//struct Stu struct关键字声明是一个结构体类型的 Stu是这个结构体的名字
	//描述一个学生：

	//结构体成员可以是：标量 数组 指针、甚至是其他结构体
	struct Stu s1 = { "张三", 17, "男", "2021_11_14" }; // 初始化 
	//printf("%s %d %s %s\n", s1.name, s1.age, s1.sex, s1.id);

	//struct Stu1 {
	//	char name[20]; // 
	//	int age;
	//	char sex[5];
	//	char id[20];
	//}s2 = {"李四",17,"男","2021"}; // 声明结构体类型的同时定义结构体变量、并且初始化
	//printf("%s %d %s %s\n", s2.name, s2.age, s2.sex, s2.id);
		
	//结构体成员访问：
	//结构体传参：
	print1(s1); // 传值方式
	print2(&s1); // 传址方式
	// 推荐使用传址的方式，原因：
	//函数传参的时候，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降
	return 0;
}
~~~

## 实用调试技巧

 #### 1.什么是bug？

   第一次被发现的导致计算机错误的飞蛾，也是第一个计算机程序错误。由此bug一词便被用来代指计算机中的缺陷或故障了。

#### 2.调试是什么？有多重要？

   - 调试（英语：Debugging / Debug），又称除错，是发现和减少计算机程序或电子仪器设备中程
     序错误的一个过程。

   - 所有发生的事情都一定有迹可循，如果问心无愧，就不需要掩盖也就没有迹象了，如果问心有愧，就必然需要掩盖，那就一定会有迹象，迹象越多就越容易顺藤而上，这就是推理的途径。顺着这条途径顺流而下就是犯罪，逆流而上，就是真相。

     一名优秀的程序员是一名出色的侦探。

##### 2.1调试的基本步骤

- 发现程序错误的存在
- 以隔离、消除等方式对错误进行定位
- 确定错误产生的原因
- 提出纠正错误的解决办法
- 对错误给予纠正，重新测试

#####  2.2debue和release的介绍

- Debug 通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序。
- Release 称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优
  的，以便用户很好地使用。

#### 3.windows环境调试介绍

使用vs。在环境中选择debug选项，才能使代码正常调试

![](https://i.bmp.ovh/imgs/2021/11/b751d4e2d84b25df.png)

监视里面可以查看变量的值，表达式等。

自动窗口：当我们开始调试起来了，里面的变量等会自动加上，局部变量也是一样。

调用堆栈：查看函数的逻辑。通过调用堆栈，可以清晰的反应函数的调用关系以及当前调用所处的位置

最常用的几个快捷键：

F5：启动调试，经常用来直接跳到下一个断点处。

F9：创建断点和取消断点。

- 断点的重要作用，可以在程序的任意位置设置断点
- 这样就可以使得程序在想要的位置随意停止执行，继而一步步执行下去

F10：逐过程，通常用来处理一个过程，一个过程可以是一次函数调用，或者是一条语句。

F11：逐语句，就是每次都执行一条语句，但是这个快捷键可以使我们的执行逻辑进入函数内部（这是最长用的）

CTRL+F5：开始执行不调试，如果你想让程序直接运行起来而不调试就可以直接使用。

#### 4.一些调试的实例

###### 实例一：

实现代码：求 1！+2！+3！ ...+ n! ；不考虑溢出。

~~~c
nt main()
{
int i = 0;
int sum = 0;//保存最终结果
int n = 0;
int ret = 1;//保存n的阶乘
scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
    int j = 0;
    for(j=1; j<=i; j++)
    {
    ret *= j;
    }
    sum += ret;
    }
    printf("%d\n", sum);
    return 0;
   }
// 主要是调试找出错误
~~~

这时候我们如果3，期待输出9，但实际输出的是15。

这里我们就得找我们问题

1. 首先推测问题出现的原因。初步确定问题可能的原因最好。
2. 实际上手调试很有必要
3. 调试的时候我们心里有数

###### 实例二：

~~~c
#include <stdio.h>
int main()
{
  int i = 0;
  int arr[10] = {0};
  for(i=0; i<=12; i++)
 {
    arr[i] = 0;
    printf("hehe\n");
 }
  return 0;
}
~~~

研究程序死循环的原因

#### 5.如何写出好（易于调试）的代码

###### 优秀的代码：

1. 代码运行正常
2. bug很少
3. 效率高
4. 可读性高
5. 可维护性高
6. 注释清晰
7. 文档齐全

###### 常见的coding技巧

1. 使用assert
2. 尽量使用const
3. 养成良好的编码风格
4. 添加必要的注释
5. 避免编码的陷阱

###### assert断言

assert(条件)  如果这个条件不成立就会报错。



#### 6.示范：模拟实现库函数：strcpy

###### const修饰指针

const: 修饰常变量，让它的值不可以改变，但是本质上还是变量

1. 如果const在指针类型左边，修饰的是*p，表示这个指针的值不可以改变，但是这个指针变量可以被改变
2. 如果const在指针类型右边，修饰的是p，表示这个指针变量不能改变，但是指针的内容（值）可以改变

~~~c
#include<stdio.h>
int main()
{
    int a = 10;
	int b = 100;
    int const * const p = &a;
	const int*  p = &a;
	//int* const p = &a; 
	//*p = 20;
	//p = &b;
}
~~~

模拟实现库函数：strcpy

~~~c
#include<stdio.h>
char* my_strcpy(char* destination, char* const src)
{
    assert(destination!=NULL);
	assert(src);
	while (*src)
	{
		*destination++ = *src++;
	}
	*destination++ = *src++;
	return destination;

	//while (*destination++ = *src++)
	//{
	//	;
	//}
	//return destination;
}
int main()
{
    
   	//char str1[] = "nihaoshijie";
	//char str2[] = "haha";
	//strcpy(str1, str2);
	//printf("%s", str1);
    
    //模拟实现strcpy库函数
	char destination[] = "tomorrow";
	char src[] = "hhhhhh";
	my_strcpy(destination, src);
	printf("%s\n", destination);
}
~~~



#### 7.编程常见错误

7.1编译型错误

- 直接看错误提示信息（双击），解决问题。或者凭借经验就可以搞定。相对来说简单。

7.2链接型错误

- 看错误提示信息，主要在代码中找到错误信息中的标识符，然后定位问题所在。一般是标识符名
  不存在或者拼写错误。

7.3运行时错误

- 借助调试，逐步定位问题。最难搞。

**温馨提示：做一个有心人，积累排错经验**

## 数据在内存中的存储

###### 数据类型介绍：

char //字符数据类型
short //短整型
int //整形
long //长整型
long long  //更长的整形
float //单精度浮点数
double //双精度浮点数

类型的意义：合理使用内存，这个类型的数据决定了使用范围

###### 类型的基本归类：

~~~c
		//整型家族：
		//char 
		//	unsigned char 
		//	signed char
		//int 
		//	unsigned int
		//	signed int

		//short
		//	unsigned short
		//	signed short
		//long
		//	unsigned long
		//	signed long

		//浮点型家族：
		//float
		//double

		//构造类型：
		//数据类型
		//结构体类型
		//枚举类型
		//联合类型

		//指针类型：
		//int*
		//char*
		//float*
		//double*

		//空类型：
		//void表示空类型（无类型）比如：函数的返回值，函数传参 指针类型
~~~

#### 整型在内存中的存储

创建一个变量需要开辟一块空间，空间的大小又是根据类型决定的，不同的类型开辟不同的空间。

开辟的空间在内存中是如何存储的？

计算机中的整数有三种表示法：

###### 原码：二进制序列

###### 反码：原码符号位不变，其他位按位取反

###### 补码：反码+1

三种表示方法均有符号位和数值位两部分，符号位都是用0表示“正”，用1表示“负”，而数值位

以上针对负数，而对于一个整数来说它的原码、反码、补码是相同的。

对于整型来说，在内存中存的是补码。

原因：在计算机系统中，数值一律用补码来表示和存储。原因在于，使用补码，可以将符号位和数值域
统一处理；同时，加法和减法也可以统一处理（CPU只有加法器）此外，补码与原码相互转换，其运算过程
是相同的，不需要额外的硬件电路。

如果你在调试内存中查看，会发现它们的顺序有点不对劲：

###### 大小端介绍：

大端：大端（存储）模式，是指数据的低位保存在内存的高位，而数据的高位，保存在内存的低位地址中；

小端：小端（存储）模式，是指数据的低位保存在内存的低地址中，而数据的高位，保存在内存的高地址中。

###### 为什么有大端小端：

为什么会有大小端模式之分呢？这是因为在计算机系统中，我们是以字节为单位的，每个地址单元都对应着一个字节，一个字节为8 bit。但是在C语言中除了8 bit的char之外，还有16 bit的short型，32 bit的long型（要看具体的编译器），另外，对于位数大于8位的处理器，例如16位或者32位的处理器，由于寄存器宽度大于一个字节，那么必然存在着一个如何将多个字节安排的问题。因此就导致了大端存储模式和小端存储模式。例如：一个 16bit 的 short 型 x ，在内存中的地址为 0x0010 ， x 的值为 0x1122 ，那么 0x11 为高字节， 0x22 为低字节。对于大端模式，就将 0x11 放在低地址中，即 0x0010 中， 0x22 放在高地址中，即 0x0011 中。小端模式，刚好相反。我们常用的 X86 结构是小端模式，而 KEIL C51 则为大端模式。很多的ARM，DSP都为小端模式。有些ARM处理器还可以由硬件来选择是大端模式还是小端模式。

unsigned char 的取值范围是0-255

###### 如何查看类型能存放的数值范围：

整型在**limits.h**头文件中查看

浮点型在f**loat.h**中查看



## 指针进阶

###### 字符指针

~~~c
//字符指针
	char ch = 'a';
	char* pch = &ch;

	*pch = 'b';
	printf("%c\n", *pch);
	
	char* c = "Hello"; // 放的 不是这个字符串，本质上放的是这个字符串的首字符。指针字符常量，它的值不可以改具体看编译器

	//题：

	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char *str3 = "hello bit.";
	char *str4 = "hello bit.";
	if (str1 == str2) // 数组的首元素地址，两个不同的空间首元素地址不相同
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");

	if (str3 == str4) // 这两个字符串指针相同的内容，因为是常量，它内部不会创建两个一模一样的数据，而是把str3和str4都指向了同一个地址
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
~~~

###### 数组指针

	//指针数组存的是指针
	int* arr1[10]; // arr数组有10个指针类型是整型
	char *arr2[4]; // 一级字符指针的数组
	char **arr3[5]; // 二级字符指针的数组

int * a 是能够指向整型的指针

那数组就是指向数组的指针（如何表示）:

~~~c
	//数组指针
	//int * a 是能够指向整型的指针
	//那数组就是指向数组的指针（如何表示）
	int arr[5] = { 1, 2, 3, 4, 5 };
	int(*pa)[5] = &arr; // pd是个指针，指向一个数组，里面有5个元素，类型是int
	//&arr取出的是整个数组
	//arr是数组的首元素地址

	double* d[5]; 
	double* (*pd)[5] = &d; //数组指针：pa是一个指针指向一个数组里面有5个元素，每个元素的类型是double* 
~~~

###### &数组名vs数组名

~~~c	//&数组名vs数组名
	int a[] = { 1, 2, 3, 4, 5 };
	printf("%p\n", &a);
	printf("%p\n", a); // 虽然它们的值是一样的，但是它们的意义是不一样的
	printf("&arr+1和arr+1的区别：\n");
	printf("%p\n", &a + 1);// 跳过整个数组，20个字节
	printf("%p\n", a + 1); // 跳过4个字节
~~~

###### 数组指针如何使用

~~~c
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
~~~

###### 数组参数、指针参数

~~~c
一维数组传参：
#include <stdio.h>
void test(int arr[])//ok?  可以
{}
void test(int arr[10])//ok? 可以
{}
void test(int *arr)//ok? 可以
{}
void test2(int *arr[20])//ok? 可以
{}
void test2(int **arr)//ok? 可以
{}
int main()
{
int arr[10] = {0};
int *arr2[20] = {0};
test(arr);
test2(arr2)
    
    
二维数组传参:
void test(int arr[3][5])//ok？ 可以
{}
void test(int arr[][])//ok？ 不可以 行不可以省略
{}
void test(int arr[][5])//ok？ 可以
{}
//总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
//这样才方便运算。
void test(int *arr)//ok？ 不可以
{}
void test(int* arr[5])//ok？ 不可以
{}
void test(int (*arr)[5])//ok？ 可以
{} 
void test(int **arr)//ok？ 不可以
{}
int main()
{
int arr[3][5] = {0};
test(arr);
}
    
~~~

### 写：调整数组使奇数全部位于偶数前面

题目：输入一个数组，实现一个函数，使所有的奇数位于数组的前部分，所有偶数位于数组的后半部分

~~~c
#include <stdio.h>
void resize(int* arr,int sz)
{
	//1.第一种写法：
	int i = 0;
	int* start = arr;
	int* right = arr + sz-1;
	int tmp = 0;
	for (i = 0; i < sz-1; i++)
	{
		//if ((*arr) == 1)
		//{
		//	arr++;
		//}
		//奇数
		if (((*arr) % 2 == 1) || ((*arr) == 1))
		{
			arr++;
		}
		//偶数
		while (((*arr) % 2 == 0) && (start<right))
		{
			if (((*arr) % 2 == 0) && (start<right))
			{
				tmp = *arr;
				*arr = *right;
				*right = tmp;
			}
			start++;
			right--;
		}
	}

	//2.第二种写法：
	//int left = 0;
	//int right = sz - 1;
	//while (left<right)
	//{
	//	//奇数
	//	while ((arr[left] % 2 == 1) && (left<right))
	//	{
	//		arr++;
	//	}
	//	//偶数
	//	while ((arr[right] % 2 == 0) && (left<right))
	//	{
	//		right--;
	//	}
	//	int tmp = arr[left];
	//	arr[left] = arr[right];
	//	arr[right] = tmp;
	//}

}
int main()
{
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int arr[] = { 3, 2, 12, 4, 57, 67, 88, 55 };
	int arr[] = { 1,3,5,7,9,13,15,17,19};
	int sz = sizeof(arr) / sizeof(arr[0]);
	resize(arr,sz);

	return 0;
}
~~~

### 写：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）

~~~c
//int main()
//{
//	int money = 10;// 钱
//	int empty = 0;// 空瓶
//	int total = 0; // 换到的汽水
//	total = money / 1; // 20
//	empty = total; // 20
//	while (empty>1)
//	{
//		total += empty / 2; // 换到的空瓶  20/2 = 10 =5
//		empty = (empty / 2) + (empty % 2); // 5/2 = 2，还剩1瓶，所以那换到的+还剩下的1瓶
//	}
//	printf("%d ", total);
//	return 0;
//}

int main()
{
	//int money = 0;
	//scanf("%d", &money); 
	//int total = money;
	//int empty = money / 1;
	//while (empty>1)
	//{
	//	total += empty / 2;
	//	empty = (empty / 2) + (empty % 2);
	//}
	//printf("%d", total); // 会发现一个规律，喝的汽水总是 钱数*2-1瓶

	//2.
	int money = 0;
	int total = 0;
	scanf("%d", &money);
	if (money>0)
	total = money * 2 - 1;
	printf("%d", total); // 会发现一个规律，喝的汽水总是 钱数*2-1瓶
	return 0;
}
~~~

###### 一级指针传参、二级指针传参

~~~c
//#define _CRT_SECURE_NO_WARNINGS 
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
//	//一级指针传参
//	test(&ch);
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* pa = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}



void print1(int** arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", (**arr)+i);
	}
}
void print2(char ** s)
{
	printf("%c", **s);
}
int main()
{
	
	//二级指针传参
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int *pa = arr;
	int* *paa = &pa;
	print1(paa,sz);

	char s = 'n';
	char* ps =&s;
	print2(&ps);

	int* arr[10];
	//print3(char **)
	//print3(arr); //可以
	return 0;
}
~~~

思考：当函数的参数是一级指针的话，可以接收什么参数？为二级指针又可以接收什么参数？

###### 函数指针

~~~c
//函数指针
int test(int x ,int y )
{
	return x + y;
}
int main()
{
	//如果还是数组指针的表示形式：
	int(*a)[10]; // 

	//函数指针如何表示？：
	int (*pt)(int,int) = &test; // pt是一个指针，指向一个函数（函数有两个参数是int型），函数返回值是int
	printf("%p \n", pt);

	//函数名 == &函数名
	printf("%p == %p\n", test, &test); // 它们的含义是一模一样的

	int ret1= (*pt)(10, 20);
	int ret2 = pt(10, 20); // pt == *pt
	int ret3 = test(10, 20);
	printf("%d ", ret1);
	printf("%d ", ret2);
	printf("%d ", ret3);
	//*pt和pt是一样的，这里的*只是摆设，为了便于理解可以加上*

	//阅读分析下面的代码：
	//代码1
	(*(void(*)())0)();  
	//函数无参，返回类型是void，对0进行强制类型转换，被解释为一个函数地址
	//对0进行解引用，调用0地址的函数
	//代码2
	void(*signal(int, void(*)(int)))(int);
~~~

###### 函数指针数组

~~~c
int  Add(int x,int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}

int main()
{
	//函数指针数组
	//函数指针数组 - 存放函数指针的数组
	//如何表示： 
	int(*pa[2])(int, int) = {Add,sub}; // 如何拆分: pa[2]先结合，是数组，出掉它们就是类型，函数指针数组
	//pa就是函数指针数组
	int ret1 = pa[0](10, 20);
	int ret2 = pa[1](30,20);
	return 0;
}
~~~

###### 函数指针数组的使用

~~~c
//函数指针数组的使用
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
//	//计算器：计算整形变量的加减乘除
//	do{
//		int x = 0;
//		int y = 0;
//		
//		int ret = 0;
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 0:
//			printf("退出程序\n");
//			break;
//		case 1:
//			printf("请选择两个操作数>:\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x,y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请选择两个操作数>:\n");
//			scanf("%d %d", &x, &y);
//			 ret = Sub(x,y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请选择两个操作数>:\n");
//			scanf("%d %d", &x, &y);
//			 ret = Mul(x,y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请选择两个操作数>:\n");
//			scanf("%d %d", &x, &y);
//			 ret = Div(x,y);
//			printf("%d\n", ret);
//			break;
//		default: 
//			printf("输入有效数字\n");
//			break;
//		}
//	} while (input);
//	//以上代码冗余过多，需要改进（使用函数指针数据：）
//	return 0;
//}




//函数指针数组改进计算器
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
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input > 0 && input <= 4)
		{
			printf("请选择两个操作数:>\n");
			scanf("%d %d", &x, &y);
			int(*pcalc[5])(int,int) = { NULL,Add, Sub, Mul,Div };// 数组小标是0开始的，但是这里的0是退出游戏，给第一个为空指针
			int ret = (pcalc[input])(x, y);  // 通过下标找到一个元素，这个元素恰好是一个函数的地址，然后去调用这个地址对应的函数。好像是一个跳板的作用，这样的数组经常被称为转移表（这个概念在《C和指针》中有提到）
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出程序\n");
			break;
		}
		 else
		{
			 printf("请选择合理的数字\n");
		}
	} while (input);
	return 0;
}
~~~

###### 指向函数指针数组的指针 (了解)

~~~c
void text()
{
	
}
int main()
{
	//函数指针数组的指针
	text();
	void (*pt)() = &text; //函数指针
	void(*pta[1])();// 函数指针数组
	void (*(*patp)[])() = &pta; // 指向函数指针数组的指针
	return 0;
}
~~~

###### 回调函数

回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一
个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该
函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或
条件进行响应。

使用回调函数修改计算器：

~~~c
通过把函数指针作为参数传入一个函数里，在这个函数调用传过来的地址(也就是调用函数) -回调函数
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
	printf("请选择两个操作数>:\n");
	scanf("%d %d", &x, &y);
	return (pf)(x, y); // 传入不同的函数指针调用不同的函数
}
int main()
{
	//回调函数
	int input = 0;
	//计算器：计算整形变量的加减乘除
	do{

		int ret = 0;
		menu();
		printf("请选择>:");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("退出程序\n");
			break;
		case 1:
			ret = calc(Add); // 传入函数名就是传入地址
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
			printf("输入有效数字\n");
			break;
		}
	} while (input);
	return 0;
}
~~~

###### 模拟qsort函数

利用了回调函数

~~~c
void qsort(void *base, int num, int size, int(*cmp)(int* el, int* e2));
//void * -空指针，像一个垃圾桶什么类型的都可以往里面放。不能进行运算，也不能直接进行解引用

// 第一个参数传需要排序的元素的起始地址
//第二个参数传元素个数
//第三个函数传元素大小单位字节
//第四个函数传一个函数指针，用什么方式排序（这个函数要自己实现）



int sort_int(void *e1,void *e2)
{
	return *(int *)e1 - *(int *)e2;  //因为空指针不能直接进行解引用，所以需要进行强制转换
}

//打印数组内容
void print_arr(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void text1()// 这里放的是排序整型数组函数
{
	//使用qsort排序整型类型
	int arr[] = { 3, 5, 1, 10, 0, 2, 8, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), sort_int);
	print_arr(arr, sz);
} 



//使用qsort排序结构体类型
struct s {
	char name[20];
	int age;
};

int stru_by__age(void *e1,void *e2)
{
	return ((struct s*)e1)->age - ((struct s*)e2)->age;
}  
int stru_by_name(void *e1, void *e2)
{
	return strcmp(((struct s*)e1)->name, ((struct s*)e2)->name);//两个字符串比较不能用><,要用strcmp()函数（而strcmp函数的返回值与这个函数的返回值是一样的）
}

struct s stu[] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 17 } };


void text2()
{
	//使用qsort排序结构体类型
	//struct s stu[] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 17 } };
	int sz = sizeof(stu) / sizeof(stu[0]);
	//qsort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), stru_by__age); // 按结构体年龄排序
	qsort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), stru_by_name); // 按结构体年龄姓名排序
}


//模拟实现qsort函数
void Swap(char* e1,char* e2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}
void bubble_sort(void *base,int sz,int width,int (*cmp)(void *el,void *e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{ 
			//第一个元素和第二个元素
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0) // 升序
			{
				//交换
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width); // 一个字节一个字节交换
			}
		}
	}
}


void text3()
{
	int arr[] = { 3, 1, 10, 6, 4, 8, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), sort_int); // 排序整型
	bubble_sort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), stru_by_name); // 排序结构体

}

int main()
{
	text1(); // 使用qsrot函数排序整型数组

	//text2(); // 使用qsort函数排序结构体

	text3();// 模拟qsrot函数排序整型数组/结构体
	return 0;
}
~~~

###### 指针和数组笔试题解析

~~~c
int main()
{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a)); // 16
	//printf("%d\n", sizeof(a+0));// 4/8 // 32位是4,64位是8
 //	printf("%d\n", sizeof(*a));// 4
	//printf("%d\n", sizeof(a + 1)); //4/8 a不是单独放在sizeof里面所以代表首元素地址，首元素地址+1跳过一个元素，指向第二个元素的地址
	//printf("%d\n", sizeof(a[1])); //4


	//printf("%d\n", sizeof(&a));//4
	//printf("%d\n", sizeof(*&a));//16
	//printf("%d\n", sizeof(&a + 1)); // 取地址a取到整个数组的地址，+1跳过整个数组，就是下个数组的首元素地址
	//printf("%d\n", sizeof(&a[0]));//4
	//printf("%d\n", sizeof(&a[0] + 1));//4



	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	////printf("%d\n", sizeof(arr)); //6
	////printf("%d\n", sizeof(arr + 0));//arr不是单独放在sizeof，arr就代表数组首元素地址，注意：地址是4/8个大小
	////printf("%d\n", sizeof(*arr));//首元素地址解引用，1
	////printf("%d\n", sizeof(arr[1]));//arr第二个元素的内容，1
	////printf("%d\n", sizeof(&arr));//4/8
	////printf("%d\n", sizeof(&arr + 1));//4/8
	////printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//printf("%d\n", strlen(arr)); // 随机值
	//printf("%d\n", strlen(arr + 0)); // 随机值
	//printf("%d\n", strlen(*arr));// err，注意strlen设计的时候接收一个cha* 指针。这里arr首元素解引用，得到a的 。不行
	//printf("%d\n", strlen(arr[1]));//err，跟上面一个到底，arr[1]得到b
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1)); //跳过一个数组，随机值-6
	//printf("%d\n", strlen(&arr[0] + 1));//先arr第0个元素+1，就是arr[1],取arr[1]的地址。就是随机值-1



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
	//printf("%d\n", strlen(&arr + 1));//随机值
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
	//printf("%d\n", strlen(*p));//err ,strlen要传入地址
	//printf("%d\n", strlen(p[0]));//err,跟上面一样
	//printf("%d\n", strlen(&p));// 随机值
	printf("%d\n", strlen(&p + 1));// 随机值
	printf("%d\n", strlen(&p[0] + 1)); // 5
	
	return 0;
}
~~~

#### 练习：杨氏矩阵查找目标数

~~~c
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int find_num1(int arr[3][3],int r,int c,int k)
//{
//	int x = 0;
//	int y = c - 1;
//	
//	while (x <= r && y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			//printf("%d %d\n",x,y); // 函数目标要清晰，不掺杂别的东西
//			return 1;
//		}
//	}
//	return 0;
//}


//int find_num2(int arr[3][3], int * px, int * py,int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x <= *py  && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//
//	return 0;
//}
int main() 
{
//	//杨氏矩阵  判断一个数是否在矩阵 中
//	//一个由上到下，由左到右依次递增的矩阵
//	//1 2 3
//	//4 5 7
//	//7 8 9  
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 4;
	int x = 3;
	int y = 3;
	//设计一个函数，如果找到了就返回1，没找到返回0
	
	int ret1 = find_num1(arr,3,3,k);
	if (ret == 1)
{
		printf("找到了\n");
}
	else 
{
	printf("没找到\n");
}
	int ret2 = find_num2(arr,&x,&y,k);
	if (ret2 == 1)
{
		printf("找到了 下标：%d %d\n",x,y);
}
	else 
{
	printf("没找到\n");
}
return 0;
}
~~~

#### 练习：左旋转字符

~~~c
//void string_rotate(char * str,int k)
//{
//
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[len - 1] = tmp;
//	}
//}
//int main()
//{
//	//字符串坐旋转，
//	//比如 ABCDEF 左旋两个字符 CDEFAB
//	char str[] = { "ABCDEF" };
//	int k = 5;
//	string_rotate(str,k);
//	printf("%s", str);
//	return 0;
//}





//还有一种方法
//比如ABCDEF 要左旋2个字符
//1.翻转AB BA
//2.再翻转 CDEF  FEDC   BAFEDC
//3.最后在整体翻转 CDEFAB

void reverse(char* left,char * right)
{
	while (left<=right)
{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
}
}
void rotate_reverse(char * str,int k)
{
	assert(str);
	int len = strlen(str);
	reverse(str, str + (k - 1)); //1
	reverse(str + k, str + (len - 1)); // 2
	reverse(str, str + (len - 1)); // 3
}
int main()
{
	char str[] = "ABCDEF";
	int k = 3;
	rotate_reverse(str,k);
	printf("%s", str);
	return 0;
}
~~~

#### 练习：写一个函数判断一个字符串是否为另一个字符串旋转之后的字符串

~~~c
//例如给定s1 = AABCD和BCDAA，返回1
//给定s1=abcd和s2=ACBD，返回2
int is_string_rotate(char* str1,int k,char * str2)
{

	int len = strlen(str1);
	
	int j = 0;
	for (j = 0; j < k; j++)
	{
		char tmp = *str1;
		int i = 0;
		for (i = 0; i < len - 1; i++)
		{
			*(str1 + i) = *(str1 + i + 1);
		}
		*(str1 + len - 1) = tmp;

		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char str1[] = { "AABCD" };
	int k = 3;
	char str2[] = {"CDAAB"};
	int ret = is_string_rotate(str1, k, str2);
	if (ret == 1)
	{
		printf("是的\n");
	}
	else 
	{
		printf("不是\n");
		
	}
	return 0;
}

int is_string_rotate(char* str1, char* str2)
{
	int len = strlen(str1);
	//	strcat() 它不可以自己给自己追加字符串 
	strncat(str1, str1, len);
	char* ret = strstr(str1, str2);
	return ret != NULL;// 如果不等于NULL表示真返回1，否则返回0 
	//	如果不是一个空指针，说明是一个地址，找到了。 
	//	if(ret!= NULL)
	//	{	
	//		return 1; 
	//	} else 
	//	{
	//		return 0;
	//	}
}


//另外一种办法：
//int main()
//{
//	//	判断一个字符是否是另一个字符的左旋下下下雨 
//	//ABCDEFABCDEF 
//	//BCDEFABCDEFA
//	//CDEFABCDEFAB
//	//DEFABCDEFABC
//	//EFABCDEFABCD
//	//BCDEFABCDEFA
//	//ABCDEFABCDEF
//	char str1[20] = { "ABCDEFABCDEF" };
//	//    char str2[] = {"ABCDEFABCDEF"};
//	char str2[] = { "1" };
//	int ret = is_string_rotate(str1, str2);
//	if (ret == 1)
//	{
//		printf("是\n");
//	}
//	else {
//		printf("不是\n");
//	}
//	return 0;
//}
~~~



## 字符串函数和字符函数使用及实现

### strlen

`size_t strlen(const char* string);`

作用：求字符串长度

- 字符串已经 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包
  含 '\0' )。
- 参数指向的字符串必须要以 '\0' 结束
- 注意函数的返回值为size_t，是无符号的（ 易错 ）
- 模拟实现strlen函数

### strcpy

`char*strcpy(char* strDestination,const char* strSource);`

作用：拷贝字符串

- 将第二个参数字符串内容拷贝到第一个参数字符串里面
- 源字符串必须以 '\0' 结束
- 会将源字符串中的 '\0' 拷贝到目标空间
- 目标空间必须足够大，以确保能存放源字符串
- 目标空间必须可变
- 返回值是拷贝后的首字符串地址
- 学会模拟实现

### strcat

`char* strcat ( char* destination, const char* source);`

作用：追加/拼接字符串

- 源字符串必须以 '\0' 结束。
- 目标空间必须有足够的大，能容纳下源字符串的内容。
- 目标空间必须可修改。
- 不可以自己给自己拼接字符串，如果要给自己拼接使用strncat()

##### 模拟strcat

~~~c
//模拟实现strcat函数
char* my_strcat(char* str1,char* str2)
{
	//1.
	//char* des = str1;
	//while (*str1)
	//{
	//	str1++;
	//}
	//while (*str2)
	//{
	//	*str1 = *str2;
	//	str2++;
	//	str1++;
	//}
	//*str1 = *str2;	
	//return des;

	char* des = str1;
	while (*str1)
	{
		str1++;
	}
	while (*str1++ = *str2++)
	{
		;
	}
	return des;

}
int main()
{
	char destination[20] = "ABC ";
	char source[] = "World";
    //最后一个\0也要追加进去
	my_strcat(destination, source);//返回值是拼接完成的首字符地址
	printf("%s", destination);
	return 0;
}
~~~

### strcmp

`int strcmp ( const char * str1, const char * str2 );`

- This function starts comparing the first character of each string. If they are equal to each
  other, it continues with the following pairs until the characters differ or until a terminating
  null-character is reached.
- 标准规定(返回值)：
  - 第一个字符串大于第二个字符串，则返回大于0的数字
  - 第一个字符串小于第二个字符串，则返回小于0的数字
  - 第一个字符串等于第二个字符串，则返回等于0的数字

##### 模拟实现strcmp

~~~c
//模拟实现strcmp
int my_strcmp(char* str1,char* str2)
{
	
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
		if (*str1 > *str2)
		{
			return 1;
		}
		else if (*str1 < *str2)
		{
			return -1;
		}
	}

}
int main()
{
	char str1[] = "ABCD";
	char str2[] = "ABCD";
	int ret = my_strcmp(str1,str2);
	if (ret > 0)
	{
		printf("str1 > str2\n");
	}
	else if(ret < 0)
	{
		printf("str1 < str2\n");
	}
	else {
		printf("str1 == str2\n");
	}
	return 0;
}

~~~

### strncpy

第三个参数：表示要拷贝几个字符

##### 模拟实现strncpy

~~~c
char* my_strncpy(char* dest, char* src,int k)
{
	char* des = dest;
	while (k)
	{
		*dest = *src;
		k--;
		dest++;
		src++;
	}
	*dest = '\0';
	return des;
}
int main()
{
	char dest[20] = "ABC";
	char src[] = "nihao";
	my_strncpy(dest,src,5);
	printf("%s", dest);
	return 0;
}

~~~

### strncat

第三个参数：表示要拼接几个字符

##### 模拟实现strncat

### strncmp

##### 模拟实现strncmp

第三个参数：表示要比较几个字符

strcpy、strcat、strcmp  ---- 长度不受限制的字符串函数

strncpy、strncat、strncmp ---- 长度受限制的字符串函数

受限制的字符串函数安全度相对高一些。

### strstr

`char * strstr ( const char * str1, const char * str2 );`

作用：查找str1里面是否有str2

- 如果有返回值是找的首元素地址，如果没找到返回一个空指针（NULL）

##### 模拟strstr

~~~c
//模拟实现strstr
char* my_strstr(str1,str2)
{
	//abccdef
	//cde
	char* s1 = NULL;
	char* s2 = NULL;
	char* cp = str1;
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;
	
}
int main()
{
	//分析：
	//1.返回值：找到了就返回找到的首元素地址，没找到返回一个空指针
	//起始两个字符串的首个字符相比，如果他们相等，就同时+1。反之第一个参数+1
	char str1[] = "abccdef";
	char str2[] = "cde";
	char* ret =  my_strstr(str1,str2);
	printf("%s", ret);
	return 0;
}
~~~

### strtok

`char * strtok ( char * str, const char * sep );`

作用：分隔字符串

- sep参数是个字符串，定义了用作分隔符的字符集合
- 第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
- strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
- strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
- strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
- 如果字符串中不存在更多的标记，则返回 NULL 指针。

~~~c
int main()
{
	// 192.168.3.155 - 以.分隔
	char  str1[] = "192.168.3.155";
	char* sep = ".";
	// 返回找到的第一个标签，用\0 结尾，返回一个指向这个标记的指针
	//char* ret = strtok(str1, sep);
	char* ret = 0;
	
	for (ret = strtok(str1, sep); ret != NULL; ret = strtok(NULL, sep))
	{
		printf("%s\n", ret);
	}
	return 0;
}
~~~

### strerror

`char * strerror ( int errnum );`

作用：捕捉库函数返回的错误码

只要库函数调用失败了，就会把错误码放到全局的errno变量中，这个变量是C语言定义的全局变量。是int型。

通过调用strerror(errno)，strerror就会把这个错误码转换成字符串首字符串信息并且返回。

~~~c
#include<errno.h>
int main()
{
	//这个函数是文件函数，第一个参数是文件名，第二个参数是做什么操作，r是打开这个文件
	FILE* fs = fopen("text.txt", "r");
	if (fs == NULL)
	{
		//打开失败
		//要使用errno需要引入对应的头文件
		printf("%s", strerror(errno));
	}
    // 关闭文件
    fclose(fs);
    fs = NULL;
	return 0;
}
~~~

### perror

`void perror ( const char * str );`

作用：跟strerror一样，不同的是strerror是捕捉了错误信息，你可以选择打印或者不打印，而perror是直接就打印了，它的参数部分是自己自定义的一些信息。

~~~c
int main()
{
	// 返回一个FILE类型的指针
	FILE * fs = fopen("test.txt", "r");
	if (fs == NULL)
	{
		perror("fopen");
	}

	fclose(fs);
	fs = NULL;
	return 0;
}
~~~

## 内存函数及实现

### memcpy

`void * memcpy ( void * destination, const void * source, size_t num );`

作用：复制字节拷贝内容，之前学过strcpy，但是有个缺陷，就是只能拷贝字符串，如果是int型或者其它类型该怎么拷贝内容呢?所以就有了memcpy这个函数

~~~c
void * my_memcpy(void* dest,void* src,int num)
{
	assert(dest && src);
	void* ret = dest;
	while(num--){
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
//	拷贝任何类型的数据 单位是字节 
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};  
// 					12123458910 正常情况下 
	int arr2[10] = {0};
//	memcpy(arr1,arr2,20);
	
//	模拟实现memcpy
//	my_memcpy(arr1,arr2,20); 
//	如果是这样拷贝就有会重叠了，如果有重叠的，C语言还有另外一种函数memmove() 
//	my_memcpy(arr1+2,arr1,20); //12123458910 正常情况下 
//	memmove(arr1+2,arr1,20);
	memcpy(arr1+2,arr1,20);// 这个函数也可以实现， 
	return 0;
}
~~~

### memmove

`void * memmove ( void * destination, const void * source, size_t num );`

作用：跟memcpy一样，上面有例子，了解就行。

##### 模拟memmove函数

~~~c
void* my_memmove(void* dest,void* src,size_t num)
{
	assert(dest && src);
	void *ret = dest;
	
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	my_memmove(arr + 2,arr,20);
	return 0;
}
~~~

### momcmp

`int memcmp ( const void * ptr1, const void * ptr2, size_t num );`

作用：比较字节，返回值跟strcmp一样。第三个参数是比几个字节

### memset

以字节为单位设置内存。

内存填充块将ptr指向的内存块的第一个num字节设置为指定的值(解释为unsigned char)。

~~~c
#include<stdio.h>

int main()
{
	char str[] = "abc is change";
	memset(str, '!', 3); // 将str元素，前三个字节设置为！
	printf("%s", str);
	return 0;
}
~~~



# 自定义类型

自定义类型包括结构体，枚举，联合体

## 结构体类型

结构体是一种集合，比如数组也是一种集合，它是一组相同类型的元素的集合。

结构体描述对象，比如一本书，一个学生，它可以包含不同类型的元素。这些元素被称为成员、成员变量。

### 结构体的声明

~~~c
#include<stdio.h>

语法：
struct tag {
   member_list..
}variable_list;


struct S {
	char name[20];
	int age;
}s1;  

struct S 是一个结构体类型，s1是这个结构体的变量(称结构体变量)
    
struct S {
	char name[20];
	int age;
}s1;

int main()
{
	struct S s2; // 这种和上面的s1效果是一样的，唯一不同的是，s1是全局变量，s2是局部变量
	return 0;
}

~~~

### 结构体不完全声明

~~~c
// 匿名结构体声明
//结构体不完全声明
struct  {
	char i;
}a;

struct {
	char name[20];
	char a;
}*p;  

//上面在声明的时候省略了结构体标签
// 上面的结构体只能用一次，因为没有结构体标签，构不成一个类型，有自己的局限性
int main()
{
	p = &a; // 这种方法可取吗?
	//警告：编译器会把上面的两个声明当成完全不同的两个类型，所以是非法的。
	return 0;
}
~~~

### 结构体的变量和初始化

~~~c
struct b {
	char id[10];
	int age;
};
struct s{
	char name[20];
	int age;
	char sex[4];
	struct b b1;
}stu3 = {"curry",32, '男'}; // 结构体变量初始化

int main()
{	
	struct s stu1; // 定义结构体变量
	struct s stu2 = { "权某人", 17, "男", {"C语言",190} }; //定义变量并初始化 
	//可以通过.和-> 访问成员
	
	printf("%s %d %s %s %d", stu2.name, stu2.age, stu2.sex, stu2.b1.id, stu2.b1.age);
    struct b b1 = {0} // 把第一个赋值为0 其他的默认为0  
	return 0;
}
~~~

### 结构体的自引用

常用于描述数据结构中的链表

在结构体内部包含自身类型结构体的指针

在数据结构[数据在内存存储的结构]

例子：如果有一组数据是这样存储的：{1,2,3,4,5,6,7} ,它们的内存是连续存放的在数据结构中被称为顺序表

但是如果有一组很乱的数据：

![](https://i.bmp.ovh/imgs/2021/12/4aa80f84d974be32.png)

~~~c
//结构体的自引用
struct s {
	char a;
	//struct s s1;// 错误!!!!
	struct s *s1;
};
//typedef struct b1 {
//	int age;
//	node* next;
//}node; // 不行错误！！！！


//正确做法：
typedef struct b2 {
	int age;
	struct node* next;

}node;

int main()
{
	
	return 0;
}
~~~

### 结构体内存对齐

了解了结构体的基本使用，在深入探讨一个问题：计算结构体的大小？

结构体的对齐规则：

1. 第一个成员在与结构体偏移量为0 的地址处
2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处
   - 对齐数 = 编译器默认对齐数和该成员对比取其**较小值**作为该数对齐数
   - VS默认对齐数是8
   - Linux没有默认对齐这个概念，成员自身大小就是对齐数
3. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。（也就是嵌套结构体内最大对齐数的整倍数）

###### 练习1：

~~~c
struct S1
{
	char c1;
	int i;
	char c2;
};
printf("%d\n", sizeof(struct S1)); // 12
~~~

分析：

![](https://i.bmp.ovh/imgs/2021/12/e46ec12256583dcc.png)

###### 练习2：

~~~c
struct S2
{
char c1;
char c2;
int i;
};
printf("%d\n", sizeof(struct S2)); //8
~~~

分析：

![](https://i.bmp.ovh/imgs/2021/12/feefc0cc0894e3ea.png)

###### 练习3：

~~~c
struct S3
{
	double d;
	char c;
	int i;
};
printf("%d\n", sizeof(struct S3)); // 16
~~~

分析：

![](https://i.bmp.ovh/imgs/2021/12/027689aa58247b11.png)

###### 练习4结构体嵌套问题：

~~~c
//练习4-结构体嵌套问题
struct S4
{
	char c1;
	struct S3 s3;
	double d;
};
printf("%d\n", sizeof(struct S4)); // 32
~~~

分析：

![](https://i.bmp.ovh/imgs/2021/12/021684fad7ea116c.png)



####  为什么存在结构体对齐

`大部分的参考资料都是如是说的：`

1. 平台原因(移植原因)：
   - 不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常。
2. 性能原因：
   - 数据结构(尤其是栈)应该尽可能地在自然边界上对齐。原因在于，为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问。

总体来说：结构体的内存对齐是拿空间来换取时间的做法。

###### 在设计结构体的时候，如何做到既要满足对齐，又要节省空间？

- 让占用空间小的成员尽量集中在一起。
- 比如结构体的第一个成员是char，第二个成员是int，第三个成员是char，我们应该把占用空间小的成员集中在一起。char、char、int
  - 会发现这些不同类型，相同个数的元素，位置不同，占用的空间大小也不同

###### 修改默认对齐数

VS下面的默认对齐数是8，我们是来修改这个默认对齐数

通过`#pargam`这个预处理指令，可以改变默认对齐数

~~~c
#include<stdio.h>

#pragma pack(2) // 设置默认对齐数
struct S1
{
	char c1;
	int i;
	char c2;  
};
#pragma pack()// 取消设置默认对齐数。
int main()
{
	printf("%d ",  sizeof(struct S1)); // 修改默认对齐为2的时候 = 8
    printf("%d ",  sizeof(struct S1)); // 修改默认对齐为4的时候 = 12
	return 0;
}
~~~

![](https://i.bmp.ovh/imgs/2021/12/e791da28e8ea1a36.png)

**结构在对齐方式不合适的时候，我么可以自己更改默认对齐数**

###### 百度笔试题：

写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明

考察： offsetof 宏的实现

这里还没学宏，以后在实现

#### 结构体传参

~~~c
struct a {
	int data[1000];
	int num;
};

void print1(struct a A)
{
	printf("%d", A.num);
}
void print2(struct a* pA)
{
	printf("%d", pA->num);
}
int main()
{
	struct a a1 = { {1,2,3},100 };
	print1(a1); // 传结构体
	print2(&a1); //  传地址
	//
	//
	//因为说传结构体，形参就相当于实参的一份临时拷贝，实参传data里面有1000个元素，加起来就4000字节，相当于在内存开辟了两份
	//函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
	//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。

	return 0;
}
~~~

上面那种传参形式更好？

-  答案是传地址更好
  - 因为说传结构体，形参就相当于实参的一份临时拷贝，实参传data里面有1000个元素，加起来就4000字节，相当于在内存开辟了两份
  - 函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
  - 如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
- 结构体传参的时候，要传结构体的地址。

#### 位段

结构体实现`位段`的能力。

##### 什么是位段

位段的声明和结构体是类似的，有两个不同：

1. 位段的成员必须是`int、unsigned int、或signed int  char也行本质上也是int`。
2. 位段的成员后面有一个冒号和一个数字。

~~~c
struct A {
	// int 型分配四个字节 32个bit位
	int _a : 5;  // 5个bit位还剩27个bit位
	int _b : 2; // 用上面剩余的bit位，27-2 = 剩25
	int _c : 30; // 占用30个bit位，之前剩余的不够,重新开辟一个int型 32bit位   32 -30 =2
	// 上面还剩2bit位,下面_d占用20bit位不够，在开辟一个int
	int _d : 20;
	// 上面一共开辟了三次int型，12个字节
    //有效的节省了空间
};
//A 就是一个位段
	//后面的数字是代表bit位
	
int main()
{
	printf("%d", sizeof(struct A));	// 这个位段的大小是多少？  12
	return 0;
}
~~~

##### 位段的内存分配原则

1. 位段的成员可以是int、unsigned int和signed int或者是char(属于整形家族)类型。
2. 位段的空间上是按照需要以4个字节（int）或者1个字节（char）的方式来开辟。
3. 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。

##### 位段的跨平台问题

1. int位段被当成有符号数还是无符号数是不确定的。
2. 位段中最大位的数目不能确定。（16位机器最大16,32位机器最大32，写成27，在16位机器会出现问题）。
3. 位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义。
4. 当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，是舍弃剩余位段还是继续利用剩余位段，这点不确定。

**总结：跟结构相比，位段可以达到同样的效果，但是可以很好的节省空间，但是有跨平台的问题存在。**

##### 位段的应用

网络传参数据包，减少它的大小。

![](https://img-blog.csdnimg.cn/20210611212520809.png)

## 枚举

枚举顾名思义就是一一列举

把可能的取值一一列举

比如：一周的星期，可以一一列举，性别可以一一列举.... 这些固定的值。

##### 枚举的定义

~~~c
int main()
{
	//比如定义成员为一个星期的可能
	enum day {
		Mon,
		Tuesday,
		Wed,
		Thurs,
		Friday,
		Saturday,
		Sunday
	};

	//三原色
	enum RGB {
		RED,
		GREEN,
		BLUE
	};

	//性别
	enum Sex {
		MALE,
		FEMALE,
		SECRET
	};
	//上面的 enum day， enum RGB，enum Sex 都是枚举类型
	//{} 里面的内容是枚举的可能取值，也叫做枚举常量 注意是常量
	//这些值如果没有初始值，默认是从0开始，依次递增+1。
	return 0;
}
~~~

##### 枚举的优点

###### 为什么使用枚举？

可以使用`#define`定义常量，为什么非要使用枚举？

###### 枚举的优点：

1. 增加代码的可读性和可维护性
2. 和#define定义的标识符比较枚举有类型检查，更加严谨。
3. 防止了命名污染
4. 便于调试
   - 相对于#define,#deine是在预编译阶段完成了替换。
5. 使用方便，一次可以定义多个常量

##### 枚举的使用

~~~c
1.
int main()
{
	enum Color {
		Orange, // 0
		Pink = 4,  // 这里赋值了后面的值就根据这个值依次递增+1
		Black // 5
	};
	//color = 3 不行！！
	enum Color color = Pink;  // 枚举变量的值，只能拿枚举常量给枚举变量赋值才不会出现类型的差异
	return 0;
}


2.
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
~~~

## 联合体（共用体）

联合体也是一种特殊的自定义类型，特征是这些成员共用一块内存空间（所以也叫共用体）。

##### 联合类型的定义

~~~c
int main()
{
	//联合体也是一种特殊的自定义类型，特征是这些成员共用一块空间，所以也叫共用体

	union u {
		char c;
		int i;
	};
	//union u 是一个联合体类型
	union u u1; // 联合变量的定义
}
~~~

##### 联合的特点

联合的成员共用一块空间，这样一个联合的大小，至少是最大成员的大小（因为联合至少有能力能存放最大的那个成员）。

~~~c
int main()
{
	union u {
		char c;
		int i;
	};
	union u u1 = {1};
	printf("%p\n", &(u1.c)); //
	printf("%p\n", &(u1.i)); // 
	printf("%p\n", &u1); // 这三个地址是一样的

	printf("%d\n", sizeof(u1.c));
	printf("%d\n", sizeof(u1.i));
	printf("%d\n", sizeof(u1)); // 4 共用体的大小怎么计算？
	return 0;
}
~~~

##### 联合大小的计算

- 联合的大小至少是最大成员的大小。
- 联合也存在内存对齐。当最大成员大小不是最大对齐数的整倍数的时候，就要对齐到最大对齐数的整倍数。

例：

~~~c
int main()
{               

	union u1 {
		char c[6]; // 7
		int i; // 4
		//c是这个数组，有6个元素，是这个联合最大的成员，i是这个联合的最大对齐数，这个最大成员7不是最大对齐的整倍数，就要对齐到这个最大对齐数的整倍数，8
		//当最大成员大小不是最大对齐数的整倍数的时候，就要对齐到最大对齐数的整倍数
	};
	union u2 {
		short c[7]; // 总大小14，一个占两个字节，有7个。
		int i; // 4  最大对齐数，最大成员不是最大对齐数的整倍数，要对齐到最大对齐数的整倍数，16
	};
	printf("%d ", sizeof(union u1));
	printf("%d", sizeof(union u2));
	return 0;
}
~~~

## 练习：通讯录

通讯录程序：

功能：联系人的添加、删除、查询、修改、排序。

联系人参数：1.姓名 2.年龄 3. 性别 4.电话 5. 地址

建三个文件：test.c、Contacts.c、Contacts.h

- test.c -- 测试通讯录的逻辑
- Contacts.c   -- 通讯录逻辑代码
- 函数类型声明等

1.进入程序，显示菜单：

- 1.添加（add）联系人、2.删除（del）联系人、3.查找（search）联系人、4.修改（modify）联系人、5打印（print）联系人列表、6.排序联系人列表（sort） 7.退出（exit）程序

2.如何添加联系人？

要知道添加的联系人在第几位，默认是0



## 动态内存管理

动态内存函数：

1. malloc
2. free
3. calloc
4. realloc

#### 为什么存在动态内存管理

~~~c
int model = 10; // 在栈区开辟4个字节
int render[10] = { 0 }; // 在栈区开辟10个int字节的连续空间
~~~

但是上述的开辟空间的方式有两个特点：

1. 空间开辟的大小是固定的
2. 数组在声明的时候，必须指定数组长度，它所需要的内存在编译时分配

但是对于空间的需求，不仅仅是上述的情况。有时候我们需要的空间大小在程序运行的时候才能知道，那数组的编译时开辟空间的方式就不能满足了。这时候就只能试试动态存开辟了。

在操作系统里，有：

- 栈区  ———— 存放局部变量，函数形参等，一般用完就编译器就帮我们释放了
- 堆区  ———— 动态函数开辟的空间、malloc、calloc、realloc
- 静态区/数据段 ———— 存全局变量，静态变量..

#### malloc/free

`void *malloc(size_t size);` 参数是需要开辟的字节

这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针。

- 如果开辟成功，则返回一个指向开辟好空间的指针。
- 如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
- 返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自
  己来决定。
- 如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器（应该没有人会开辟0个字节吧..）。

C语言提供了另外一个函数free，专门是用来做动态内存的释放和回收的，函数原型如下：

`void free (void* ptr);`

free函数用来释放动态开辟的内存。

- 如果参数 ptr 指向的空间不是动态开辟的，那free函数的行为是未定义的。
- 如果参数 ptr 是NULL指针，则函数什么事都不做。

free和malloc配合使用，**释放内存后，还要把开辟的空间置为NULL。**

例：

~~~c
int main()
{
	int* p = malloc(10*sizeof(int)); // 动态开辟十个整型，因为它的返回值是void* 有的编译需要手动转换
	
	if (p == NULL)
	{
		//malloc 申请失败的情况
		perror("malloc");
		return 0;
	}

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	

	for (i = 0; i < 10; i++)
	{
		printf("%d", *(p + i));
	}

	free(p); // 释放
	p = NULL;  // 置空
	return 0;
}
~~~

#### calloc

`void *calloc(size_t num,size_t size);`

calloc的用法和malloc差不多，唯一的不同点是：

- calloc需要两个参数
- calloc开辟空间的同时每个字节初始化为0

`size_t num` ：无符号整型 元素个数

`size_t size`：无符号整型 元素大小

~~~c
int main()
{
	int len = 10;
	int *p = (int*)calloc(len, sizeof(int));
	if (p == NULL)
	{
		perror("calloc");
		return 0;
	}
	//它这里已经帮我全部初始化为0？
	//看看：
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}
~~~

#### realloc

`void *realloc(void *memblock,size_t *size);`

- realloc函数的出现让动态内存管理更加灵活。

- 有时会我们发现过去申请的空间太小了，有时候我们又会觉得申请的空间过大了，那为了合理的时候内存，我们一定会对内存的大小做灵活的调整。那 realloc 函数就可以做到对动态开辟内存大小的调整。

- memblock是要调整的内存地址
- size 调整之后新大小
- 返回值为调整之后的内存起始位置
- 这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到 新 的空间。
- realloc在调整内存空间的是存在两种情况
  - 情况1：原有空间之后有足够大的空间
  - 情况2：原有空间之后没有足够大的空间

**情况1：**

当是情况1 的时候，要扩展内存就直接原有内存之后直接追加空间，原来空间的数据不发生变化

**情况2：**

当是情况2 的时候，原有空间之后没有足够多的空间时，扩展的方法是：在堆空间上另找一个合适大小
的连续空间来使用。这样函数返回的是一个新的内存地址。

~~~c
int main()
{
	int *p = malloc(10*sizeof(int));
	if (p == NULL)
	{
		perror("malloc");
	}
	int ptmp = NULL;
	ptmp = realloc(p, 10 * sizeof(int));
	//确保空间增量没有问题
	if (ptmp != NULL)
	{
		p = ptmp;
	}
	
	return 0;
}

~~~

#### 动态内存只有两种回收方式：

1. 主动free释放
2. 程序结束

如果对于一个动态开辟的空间，没有被释放，就会造成内存泄漏。例如这个程序7*24小时在服务器上跑，每次都泄漏一点点，那这个程序迟早是要卡死的。

#### 常见的动态内存错误

1. 对NULL指针的解引用
2. 对动态开辟的空间越界访问
3. 对非动态使用的空间free释放
   - 这时候程序会崩溃
4. 使用free释放动态开辟内存的一部分
5. 对同一块动态开辟的内存多次释放
6. 动态内存空间忘记释放（内存泄漏）

~~~c
int main()
{
	int *p = (int *)malloc(100);
	int a = 10;
	int *pa = &a;
	
	//free(p);
	//free(pa); // 非动态内存开辟的空间不能free

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	p++;
	//}
	//free(p); // 这时候p往后移动了10个元素，不在代表首元素地址，释放一部分程序也会崩溃的

	//free(p);
	//free(p); // 对同一块动态内存多次释放，程序崩溃
	//p = NULL; // 在释放内存内存空间后，记得把它置为NULL
	return 0;
}
~~~

### 四个经典的笔试题

#### 题目1：

~~~c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void GetMemory(char *p)
{
	p = (char *)malloc(100);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(str);  
    // 问题1.这里传入的是变量不是地址，只有数组名才代表首元素地址，既然不是地址，上面是一份临时拷贝，改变了		上面并不会影响str
	strcpy(str, "hello world");  // 这里NULL指针不能进行拷贝
	printf(str);
    // 问题2.使用了动态开辟的内存没有释放
}
int main()
{
	Test();
	return 0;
}

//改：1
//char*  GetMemory(char **p)
//{
//	return *p = (char *)malloc(100); // 二级指针解引用=str
//	函数里面的变量作用域是出了函数就销毁 ，但是这里是动态开辟的空间，是存放在堆区的，需要由程序员手动释放
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(&str); // 这里传地址，形参就要用二级来接收
//	strcpy(str, "hello world");
//	printf(str);  // 这种输出方式 和 printf("hello world") 本质上是一样的;
//	free(str);
//	str = NULL;
//}

//改：2
void  GetMemory(char **p)
{
	*p = (char *)malloc(100);
	
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str); 
	strcpy(str, "hello world");
	printf(str); 
	free(str);
	str = NULL;

}
~~~

#### 题目2：

~~~c
char *GetMemory(void)
{
	//局部变量 - 存在栈区 有自己的作用域，出了函数就销毁了。
	char p[] = "hello world";
	return p; 
}
void Test(void)
{
	char *str = NULL;
	// 没能放到str里面，str就可能是野指针，或是一些随机数
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}
~~~

#### 题目3：

~~~c
void GetMemory(char **p, int num)
{
	*p = (char *)malloc(num);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
	//基本没什么问题： 因为是动态开辟的最后需要释放一下
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}
~~~

#### 题目4

~~~c
void Test(void)
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str); // 这里就释放了
	//找不到str，str是一个野指针
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}
~~~

### C/C++程序的内存开辟

![](https://gimg2.baidu.com/image_search/src=http%3A%2F%2Fwww.45fan.com%2Fupload%2F2021-06-26%2F1ysWUErtjq6WRB6r.png&refer=http%3A%2F%2Fwww.45fan.com&app=2002&size=f9999,10000&q=a80&n=0&g=0n&fmt=jpeg?sec=1642661565&t=2a24a14287894911c781731ba22ffe68)

##### C/C++程序内存分配的几个区域：

1. 栈区（stack）：在执行函数时，函数内局部变量的存储单元都可以在栈上创建，函数执行结束时这些存储单元自动被释放。栈内存分配运算内置于处理器的指令集中，效率很高，但是分配的内存容量有限。 栈区主要存放运行函数而分配的局部变量、函数参数、返回数据、返回地址等。
2. 堆区（heap）：一般由程序员分配释放， 若程序员不释放，程序结束时可能由OS回收 。分配方式类似于链表。
3.  数据段（静态区）（static）存放全局变量、静态数据。程序结束后由系统释放。
4. 代码段：存放函数体（类成员函数和全局函数）的二进制代码。

**根据上幅的图片可以更好的理解static关键字修饰局部变量的例子了**

1. 实际上普通的局部变量是在栈区分配空间的，栈区的特点是在上面创建的变量出了作用域就销毁。

   但是被static修饰的变量存放在数据段（静态区），数据段的特点是在上面创建的变量，直到程序
   结束才销毁。所以生命周期变长。

### 柔性数组

也许你从来没有听说过柔性数组（flexible array）这个概念，但是它确实是存在的。
C99 中，结构中的最后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员。

~~~c
struct s {
	int i;
	int arr[0]; // 柔性数组成员
};

//有些编译器会报错无法编译可以改成
struct s {
	int i;
	int arr[]; // 柔性数组成员
};
~~~

柔性数组的特点：

- 结构中柔性数组成员前面至少要有一个其他成员
- sizeof 返回的这种结构大小不包括柔性数组的内存
- 包含柔性数组成员的结构体用malloc函数分配的动态内存，并且分配的内存应该大于该结构体的大小，以适应柔性数组的预期大小。

##### 柔性数组的使用

~~~c
typedef struct s
{
	int i;
	int arr[]; 
}type_a;
int main()
{
	type_a * p = (type_a *)malloc(sizeof(struct s)+100*sizeof(int));
	p->i = 100;
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		p->arr[i] = i;
	}
	//arr获得了100个连续存放整型的空间
	for (i = 0; i < 100; i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p);
	p = NULL;
}
~~~

##### 柔性数组的优势

~~~c
//上面的代码还可以设计为：
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

	//业务处理
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		p->p[i] = i;
	}
	
	//释放
	free(p->p);
	p->p = NULL;
	free(p);
	p = NULL;
	return 0;
}
~~~

上述 代码1 和 代码2 可以完成同样的功能，但是 方法1 的实现有两个好处：

- 第一个好处：**方便内存释放**
  - 如果我们的代码是在一个给别人用的函数中，你在里面做了二次内存分配，并把整个结构体返回给用户。用户调用free可以释放结构体，但是用户并不知道这个结构体内的成员也需要free，所以你不能指望用户来发现这个事。所以，如果我们把结构体的内存以及其成员要的内存一次性分配好了，并返回给用户一个结构体指针，用户做一次free就可以把所有的内存也给释放掉。
- 第二个好处：**这样有利于访问速度**
  - 连续的内存有益于提高访问速度，也有益于减少内存碎片。（其实，我个人觉得也没多高了，反正你跑不了要用做偏移量的加法来寻址）

扩展：https://coolshell.cn/articles/11377.html

## 文件操作

### 为什么使用文件

在前面写了一个通讯录案例，当我们运行通讯录的时候，添加，删除数据等操作时， 此时数据是存放在内存中的，当程序退出是，内存被回收，通讯录中的数据自然也就不存在，等下次运行通讯录，数据又得重新录入。

那如何在退出程序时，里面的数据如何保持持久化，只有当我们删除数据的时候，数据才不存在。这就涉及到了数据持久化的问题，一般数据持久化的方法有：1.把数据存放在磁盘中、2.存放数据在数据库中等方式。

### 什么是文件

磁盘中的文件是文件。电脑在重启后文件依然在。

但在程序设计中，一般谈的文件有两种：1.程序文件、2.数据文件（从文件功能的角度来分类）

1. 程序文件：包括源程序（后缀为.c） 目标文件（windows环境下后缀为obj），可执行程序（windows环境下 为.exe）。
2. 数据文件：文件的内容不一定是程序，而是程序运行时读或写入的数据，将数据显示到显示器上。

其实有时候我们会把信息输出到磁盘上，当需要的时候再从磁盘上把数据读取到内存中使用，这里处理
的就是磁盘上文件。

### 文件名

一个文件要有唯一的标识性，以便用户识别和引用，文件名包含三部分：1.文件路径2.文件标识名3.文件后缀

例如：`E:\WEB_programs_C_programs\C_programs\code\text.c`

为了方便起见，文件标识常被称为**文件名**

### 文件的关闭和打开

##### 文件指针

缓冲文件系统中，关键的概念是“文件类型指针”，简称“文件指针”

每个被使用的文件都在内存区开辟了一个相应的文件信息区，用来存放文件的相关信息（如文件名，文件状态和文件当前的位置等）。这些信息是保存在一个结构体变量中的。该结构体变是由系统声明的，取名 **FILE**（大概说系统声明了一个结构体，类型重定义为 FILE）。

~~~c
struct _iobuf {
    char *_ptr;
    int  _cnt;
    char *_base;
    int  _flag;
    int  _file;
    int  _charbuf;
    int  _bufsiz;
    char *_tmpfname;
   };
typedef struct _iobuf FILE;
~~~

不同的C编译器的FILE类型包含的内容不完全相同，但是大同小异。

每当打开一个文件，系统都会根据这个文件的情况自动创建一个FILE结构的变量，并填充其中的信息，使用者不必关心细节。

一般都是通过FILE的指针来维护这个FILE结构的变量，这样使用起来更加方便。

创建一个FILE* 的指针变量

~~~c
int main()
{
    FILE* pf; // 定义一个文件指针变量
    return 0;
}
~~~

定义pf是一个指向FILE类型数据的指针变量，通过pf指向某个文件的信息区（是一个结构体变量），通过该文件信息区中的信息就能够访问该文件。就是通过文件指针变量能够找到与它关联的文件。

如：

![](https://i.bmp.ovh/imgs/2021/12/0745405a75b5b770.png)

##### 文件的打开和关闭

文件在读写之前应该**打开这个文件**，在使用结束之后应该**关闭这个文件**

在编写程序的时候，在打开这个文件的同时，都会返回一个FILE* 的指针变量指向该文件，也相当于建立了指针和文件的关系。

ANSIC 规定使用fopen函数来打开文件，fclose来关闭文件。

###### fopen()

`FILE* fopen(const char* filename,const char* mode);`

filename是打开的文件名，mode是打开方式。返回值：成功返回的是打开文件的指针，错误返回空指针。

打开方式：

| 文件使用方式  | 含义                                     | 如果指定文件不存在 |
| ------------- | ---------------------------------------- | ------------------ |
| “r”（只读）   | 为了输入数据，打开一个已经存在的文本文件 | 出错               |
| “w”（只写）   | 为了输出数据，打开一个文本文件           | 建立一个新的文件   |
| “a”（追加）   | 向文本文件尾添加数据                     | 建立一个新的文件   |
| “rb”（只读）  | 为了输入数据，打开一个二进制文件         | 出错               |
| “wb”（只写）  | 为了输出数据，打开一个二进制文件         | 建立一个新的文件   |
| “ab”（追加）  | 向一个二进制文件尾添加数据               | 出错               |
| “r+”（读写）  | 为了读和写，打开一个文本文件             | 出错               |
| “w+”（读写）  | 为了读和写，建议一个新的文件             | 建立一个新的文件   |
| “a+”（读写）  | 打开一个文件，在文件尾进行读写           | 建立一个新的文件   |
| “rb+”（读写） | 为了读和写打开一个二进制文件             | 出错               |
| “wb+”（读写） | 为了读和写，新建一个新的二进制文件       | 建立一个新的文件   |
| “ab+”（读写） | 打开一个二进制文件，在文件尾进行读和写   | 建立一个新的文件   |

~~~c
int main()
{
    FILE* pf = fopen("test.txt","r"); 
    // FILE* pf = fopen("FILE* pf = fopen("E:\\WEB_programs_C_programs\\C_programs\\code\\test_12_22\\test.txt","r"); 文件名也可以以路径的方式
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
    return 0;
}
~~~

上面是读文件的操作，下面是写文件的操作

~~~c
int main
{
    //写文件
	FILE* pf = fopen("test.dat", "w");  // 如果没有test.dat这个文件它会自动创建一个
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	printf("write FIle success!");
	//关闭文件
	fclose(pf);
	pf = NULL;
    return 0;
}
~~~

### 文件的顺序读写

| 功能           | 函数名  | 适用于     |
| -------------- | ------- | ---------- |
| 字符输入函数   | fgetc   | 所有输入流 |
| 字符输出函数   | fputc   | 所有输出流 |
| 文本行输入函数 | fgets   | 所有输入流 |
| 文本行输出函数 | fputs   | 所有输出流 |
| 格式化输入函数 | fscanf  | 所有输入流 |
| 格式化输出函数 | fprintf | 所有输入流 |
| 二进制输入     | fread   | 文件       |
| 二进制输出     | fwrite  | 文件       |

###### fputc()

`int fputc(int c,FILE* stream);`

作用：Writes a character to a stream (**fputc**, **fputwc**) or to **stdout**  (**_fputchar**, **_fputwchar**). （将一个字符写入一个流）

###### 流的概念

![image-20211223203710668](C:\Users\admin颜云\AppData\Roaming\Typora\typora-user-images\image-20211223203710668.png)

不需要关注流是怎么操作的。

C语言程序只要运行起来，就默认打开了3个流：

- stdin —— 标准输入流 - 键盘
- stdout —— 标准输入流 - 屏幕
- sterr —— 标准错误流 - 屏幕

~~~c
FILE * pFile;
	//打开文件
	pFile = fopen("test.txt", "w");
	//文件操作
	if (pFile != NULL)
	{
		//写入 pFile这个文件流
		fputc("z", pFile);
		fputc("q", pFile);
		fputc("h", pFile);
		//关闭文件
		fclose(pFile);
	}
~~~

~~~c
	//一行读
	//FILE * pf = fopen("test.dat", "r");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	//int ret = ret = fputs("nihaoa\n", stdout);


	//一行写
	FILE * pf = fopen("test.dat", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fputs("hhhhh\n", pf); // 打开test.dat 会发现写入了hhhhh
	fputs("wwwwww", pf); // 如果写入的文件需要换行加 \0
~~~

###### fscanf()

`int fscanf(FILE* stream,const char* format [, argument]...);`

###### fprintf()

`int fprintf(FILE* stream,const char* format [, argument]...);`

~~~c
	//fscanf&&fprintf
	//struct S s = { "welcome", 10, 3.333333 };
	struct S s = {0};
	FILE * pf = fopen("test.dat", "r");
	//FILE * pf = fopen("test.dat", "w");

	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//写入数据
	//fprintf(pf, "%s %d %f", s.ch, &(s.a), &(s.b));

	//读数据
	//fscanf(pf, "%s %d %f", s.ch, &(s.a), &(s.b));


	fscanf(pf, "%s %d %f", s.ch, &(s.a), &(s.b));
	fprintf(stdout, "%s %d %f", s.ch, &(s.a), &(s.b));
~~~

###### fwrite()

C 库函数 **size_t fwrite(const void \*ptr, size_t size, size_t nmemb, FILE \*stream)** 把 **ptr** 所指向的数组中的数据写入到给定流 **stream** 中。

- **ptr** -- 这是指向要被写入的元素数组的指针。
- **size** -- 这是要被写入的每个元素的大小，以字节为单位。
- **nmemb** -- 这是元素的个数，每个元素的大小为 size 字节。
- **stream** -- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输出流。

**返回值：**如果成功，该函数返回一个 size_t 对象，表示元素的总数，该对象是一个整型数据类型。如果该数字与 nmemb 参数不同，则会显示一个错误。

###### fread()

C 库函数 **size_t fread(void \*ptr, size_t size, size_t nmemb, FILE \*stream)** 从给定流 **stream** 读取数据到 **ptr** 所指向的数组中。

- **ptr** -- 这是指向带有最小尺寸 *size\*nmemb* 字节的内存块的指针。
- **size** -- 这是要读取的每个元素的大小，以字节为单位。
- **nmemb** -- 这是元素的个数，每个元素的大小为 size 字节。
- **stream** -- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输入流。

**返回值：**成功读取的元素总数会以 size_t 对象返回，size_t 对象是一个整型数据类型。如果总数与 nmemb 参数不同，则可能发生了一个错误或者到达了文件末尾。

~~~c
char ch[] = { "abcdef" };
char ch2[16] = { 0 };
//fwrite 写文件
//FILE* pf = fopen("test.dat", "wb");
FILE* pf = fopen("test.dat", "rb");
//fwrite(ch,sizeof(ch),1,pf);

//fread 读文件
fread(ch2,sizeof(ch2),1,pf);
printf("%s", ch2);
fclose(pf);
~~~

### 对比一组函数

scanf/fscanf/sscanf

pirntf/fprintf/sprintf

- scanf ：针对标准输入的格式化的输入语句 - stdin
- fscanf：针对所有输入流的格式化的输入语句 - stdin/文件
- sscanf：从一个字符串中读取一个格式化的数据
- printf：针对标准输出的格式化输出语句 - stdout
- fprintf：针对所有输出流的格式化输出语句 - stdout/文件
- sprintf：把一个格式化的数据，转换称字符串

### 文件的随机读写

###### fseek()

`int fseek ( FILE * stream, long int offset, int origin );`

根据文件指针的位置和偏移量来定位文件指针。(将文件指针移动到指定位置。)

- origin 
  - **SEEK_CUR**  从文件指针的当前位置
  - **SEEK_END** 文件的末尾
  - **SEEK_SET**  文件指针的起始位置

~~~c
int main()
{
    	FILE* pf = fopen("test.dat","r");
	int ret = 0;
	if (pf != NULL)
	{
		//假如test.dat里面时abcdef
		ret = fgetc(pf);//a
		printf("%c ", ret); 

		ret = fgetc(pf); //b
		printf("%c ", ret);

		fseek(pf,2,SEEK_CUR); //e  正数后移偏移两个字节，反之前移
		ret = fgetc(pf);
		printf("%c ", ret);
			
		fseek(pf, 2, SEEK_SET);  // 起始位置后移
		ret = fgetc(pf);
		printf("%c ", ret);
        
        //ftell
		fseek(pf,5,SEEK_SET);
		ret = fgetc(pf);
		printf("%c ", ret); 

		int location = ftell(pf);
		printf("%d ", location);
        
        //rewind
		rewind(pf);
		ret = fgetc(pf);
		printf("%c", ret);
	}
    return 0;
}
~~~

###### ftell()

`long int ftell ( FILE * stream );`

返回文件指针相对起始位置的偏移量（比如你不知道后移了多少用ftell就知道起始位置后移了多少）

该函数返回位置标识符的当前值

###### rewind()

`void rewind ( FILE * stream );`

让文件指针重新定义到文件的开头

### 文件读取结束的判定feof()

**被错误使用的feof**

牢记 : 在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。而是应用于**当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。**

1. 文本文件读取是否结束，判断返回值是否为EOF(fgetc)，或者NULL(fgets)
   例如︰
   -  fgetc判断是否为EOF.
   -  fgets判断返回值是否为NULL
2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。

- fread判断返回值是否小于实际要读的个数。 fgetc函数在读取结束的时候，会返回EOF 正常读取的时候，返回的是字符的AscII码值
- fgets函数在读取结束的时候，会返回NULL 正常读取的是时候，返回存放字符串的空间起始地址。
- fread函数在读取的时候，返回的是实际读取到的完整元素的个数，如果发现读取到的完整元素的个数小于实际要读取（指定要读取）的个数，这就是最后一次读取了。

###### feof和ferror

一、文件结束检测函数feof函数调用格式： feof(文件指针)；
功能：判断文件是否处于文件结束位置，如文件结束，则返回值为1，否则为0。

二、读写文件出错检测函数ferror函数调用格式： ferror(文件指针)；
功能：检查文件在用各种输入输出函数进行读写时是否出错。 如ferror返回值为0表示未出错，否则表示有错。

~~~c
int main()
{
	//文件读取结束的标志
	//例如：要将test.dat 的内容复制到test2.dat中
	FILE * fread = fopen("test.dat", "r");

	if (fread == NULL)
	{
		perror("fread");
		fclose(fread);
		fread = NULL;
		return 1;
	}

	if (feof(fread))
	{
		printf("遇到文件结束标准，正确结束\n");
	}
	else if (ferror(fread))
	{
		printf("文件读取错误\n");
	}

	//正常 
	FILE * fwrite = fopen("test2.dat", "w");
	int ret = 0;
	while ((ret = fgetc(fread)) != EOF)
	{
		//写入test2.dat
		fputc(ret, fwrite);
	}
	return 0;
}
~~~



### 文本文件和二进制文件

根据数据的组织形式，数据文件被称为**文本文件**和**二进制文件。**

1. 数据在内存中以二进制的形式存储，如果不加转换的输出到外存，就是**二进制文件**
2. 如果要求在外存上以ASCII码的形式存储，则需要在存储前转换。以ASCII字符的形式存储的文件就是文
   本文件

###### 一个数据在文件中时怎么存储的呢？

字符一律以ASCII形式存储，数值型数据既可以用ASCII形式存储，也可以使用二进制形式存储

如有整数10000，如果以ASCII码的形式输出到磁盘，则磁盘中占用5个字节（每个字符一个字节），而二进制形式输出，则在磁盘上只占4个字节（VS2013测试）。

### 文件缓冲区

ANSIC 标准采用“缓冲文件系统”处理的数据文件的，所谓缓冲文件系统是指**系统自动地在内存中为程序**
**中每一个正在使用的文件开辟一块“文件缓冲区”**。从内存向磁盘输出数据会先送到内存中的缓冲区，**装**
**满缓冲区后才一起送到磁盘上**。如果从磁盘向计算机读入数据，则从磁盘文件中读取数据输入到内存缓
冲区（充满缓冲区），然后再从缓冲区逐个地将数据送到程序数据区（程序变量等）。缓冲区的大小根
据C编译系统决定的

举个例子就是：台上有一个老师在讲课，如果有学生不停的在提问，那么就会影响课程的进展，这课就没法上了，此时如果说，每个学生要攒够10个问题再向老师提问。这样就有效的不会影响课程进展。

![](https://i.bmp.ovh/imgs/2021/12/5e38a545ae120222.png)



###### 使用fflush()和不使用fflush演示

fflush() 是一个刷新流 stream 的输出缓冲区。

~~~c
#include<Windows.h>
int main()
{
	//文件缓冲区
	FILE * pf = fopen("demo.dat", "w");
	if (pf == NULL)
	{
		perror("fopen");
		fclose(pf);
		pf = NULL;
	}
	fputs("zqh", pf);
	printf("睡眠10秒，此时点击demo.dat会发现没有内容\n");
	Sleep(10000);
	fflush(pf); // 刷新内存缓冲区
	printf("再次程序睡眠10秒（相当于程序停在那里）,demo.dat里面就有内容了\n");
	Sleep(10000);
	fclose(pf); // fclose在关闭文件的时候，也会刷新缓冲区

	return 0;
}
~~~

这里可以得出一个结论:因为有缓冲区的存在，C语言在操作文件的时候，需要做刷新缓冲区或者在文件操作结束的时候关闭文件。如果不做，可能导致读写文件的问题

**注意：在使用fclose关闭文件的时候也会刷新文件缓冲区。**

## 程序环境和预处理

### 编译和链接

在ANSI C的任何一种实现中，存在两个不同的环境。

1. 第一种是翻译环境，在这个环境中源代码被转换为可执行的指令
2. 第二种是执行环境，它用于实际执行的代码

![](https://i.bmp.ovh/imgs/2021/12/b725c52f53c1da45.png)

源文件：test.c

目标文件：由源文件编译后生成的.obj文件（windows下）

- 组成一个程序的每个源文件通过编译过程分别转换成目标代码（object code）
- 每个目标文件由链接器（linker）捆绑在一起，形成一个单一而完整的可执行程序
- 链接器同时也会引入标准C函数库中任何被该程序所用到的函数，而且它可以搜索程序员个人的程序库，将其需要的函数也链接到程序中

~~~c
#include<stdio.h>
#define MAX 100
int val = 200;
int main()
{
    int a = 10;
	printf("你好！");
    return 0;
}
    
~~~

![](https://i.bmp.ovh/imgs/2021/12/a461bb66ad398df9.png)



上面的代码在linux上运行分别执行：

1. 1.预处理：gcc - test -E 预处理后就停下来。查看预处理后的文件变化 结果保存在 test.i
2. 编译 ：gcc test.i -S 编译完成就停下来结果保存在 test.s中 
3. 汇编：gcc test.s -c 汇编完成就停下来结果保存在test.o中

linux里使用vim编辑器，有关vim编辑器的学习资料：

- 简明VIM练级攻略：
  https://coolshell.cn/articles/5426.html
- 给程序员的VIM速查卡
  https://coolshell.cn/articles/5479.html

### 运行环境

程序执行的过程：

1. 程序必须载入内存中。在有操作系统的环境中：一般这个由操作系统完成。在独立的环境中，程序
的载入必须由手工安排，也可能是通过可执行代码置入只读内存来完成。
2. 程序的执行便开始。接着便调用main函数。
3. 开始执行程序代码。这个时候程序将使用一个运行时**堆栈**（stack），存储函数的局部变量和返回
  地址。程序同时也可以使用静态（static）内存，存储于静态内存中的变量在程序的整个执行过程
  一直保留他们的值。
4. 终止程序。正常终止main函数；也有可能是意外终止

堆栈 一般指栈空间，堆就是堆。

推荐一本书：《程序员的自我修养》

### 预处理

##### 预定义符号

~~~c
__FILE__  // 文件的当前路径
__DATE__  // 文件被编译的日期
__TIME__  // 文件被编译的时间
__LINE__  // 文件的行号
__STDC__  // 如果编译器遵循ANSI C，其值为1，否则未定义

~~~

这些预定义符号都是语言内置的。



~~~c

#define _CRT_SECURE_NO_WARNINGS

int main()
{
	printf("%s\n", __FILE__); // 当前文件源文件的路径
	printf("%d\n", __LINE__); // 文件行号
	printf("%s\n", __DATE__); // 文件被编译的日期
	printf("%s\n", __TIME__); // 文件被编译的时间
	//printf("%d\n", __STDC__); // 如果编译器遵循ANSI C，其值为1，否则未定义
	return 0;
}
~~~

##### #define

#define 定义标识符

语法：`#define name content`

~~~c
//1.
#define DATA 100
//2. 
#define reg register // reg就是register 相当于创建一个别名
//3.
#define for_ever for(;;)
//4. 如果定义的内容太对需要换行，那么每行的最后（除了最后一行）都应该加上一个反斜杠（续行符）
#define DEBUG_PRINT printf("hh,\
							haha, \
							heihei")

int main()
{
	reg int a = 10;
	for_ever; // 死循环

	return 0;
}
~~~

在使用#define定义标识符的时候，后面要不要加上分号;  ？答案是不要，因为#define是在预处理阶段完成替换操作的，如果添加分号，反而容易导致错误。如：

~~~c
#define TEST 2;
int main()
{
	int a = 10;
	if (a)
		a = TEST; 
    // 预处理后是这样：
    // a = 2;; 就是两条语句了，if出现不匹配 
	else
		a = 0;
	return 0;
}
~~~

##### #define定义宏

#define 机制包括了一个规定，允许把参数替换到文本中，这种实现通常称为宏（macro）或定
义宏（define macro）

宏的声明：

~~~c
#define MAX(x) x*x
#define MIN(y) y*y  // 8+1*8+1  
#define MIN(y) (y)*(y) 
int main()
{
	//参数列表的左括号必须与name紧邻。如果两者之间有任何空白存在，参数列表就会被解释为stuff的一部分。
	printf("%d\n", MAX(5));
	//注意：
// 这把8+1传入它不会进行运算，进行替换，然后根据优先级进行运算，只要理解#define的本质是替换那么问题就不大
	printf("%d\n", MIN(8+1)); 

	printf("%d\n", MIN(8 + 1)); // 不要吝啬括号
	return 0;
}
~~~

##### #define 替换规则

在程序中扩展#define定义符号和宏时，需要涉及几个步骤

1. 在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是，它们首先
被替换。
2. 替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被他们的值替换
3. 最后，再次对结果文件进行扫描，看看它是否包含任何由#define定义的符号。如果是，就重复上
  述处理过程

注意：

1. 宏参数和#define 定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归
2.  当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索。

##### #和##

如何把参数插入到字符串中？

使用#

~~~c
#define PRINT(a) printf("the value of "#a" is %d\n",a)
int main()
{	
	//例如：the value of xx is %d  这里的xx是接收的参数字符， %d是这个参数打印类型
	//输出：the value of a is 10
	//使用#把参数插入字符串
	int a = 10;
	int b = 20;
	int c = 30;
	PRINT(a);
	PRINT(b);
	PRINT(c);
	return 0;
}
~~~

这里**只有当字符串作为宏参数的时候**才可以把字符串放在字符串中。

###### ##的作用

##可以把位于它两边的符号合成一个符号。它允许宏定义从分离的文本片段创建标识符。

~~~c
#define PRINTF(x,y) x##y 
int  main()
{
	int vai00 = 13;
	printf("%d", PRINTF(vai, 00));
	return 0;
}
~~~

这样的连接必须产生一个合法的标识符。否则其结果就是未定义的.

##### 宏和函数对比

宏通常被应用于执行简单的运算。比如在两个数中找出较大的一个

1. 用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。所以宏比
函数在程序的规模和速度方面更胜一筹。
2. 更为重要的是函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。反之
  这个宏怎可以适用于整形、长整型、浮点型等可以用于>来比较的类型。宏是类型无关的

当然和宏相比函数也有劣势的地方:

1. 每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序
   的长度
2. 宏是没法调试的
3. 宏由于类型无关，也就不够严谨
4. 宏可能会带来运算符优先级的问题，导致程容易出现错

宏有时候可以做函数做不到的事情。比如：宏的参数可以出现类型，但是函数做不到

##### 命名约定

一般来讲函数的宏的使用语法很相似。所以语言本身没法帮我们区分二者。那我们平时的一个习惯是：

- 把宏名全部大写
- 函数名不要全部大写

##### #undef

移除#define定义的符号和宏

~~~c
#define MAX 100
int main()
{

	printf("%d\n", MAX);
	#undef MAX
	printf("%d\n", MAX); // 这里报错，因为上面移除了MAX，因此MAX未定义
	return 0;
}
~~~

##### 命令行定义

许多C 的编译器提供了一种能力，允许在命令行中定义符号。用于启动编译过程。

例如：当我们根据同一个源文件要编译出不同的一个程序的不同版本的时候，这个特性有点用处。（假
定某个程序中声明了一个某个长度的数组，如果机器内存有限，我们需要一个很小的数组，但是另外一
个机器内存大写，我们需要一个数组能够大写。

编译指令：

`gcc -D M=10 test.c`

只能在gcc编译器下，linux操作系统下方便演示。

##### 条件编译

在编译一个程序的时候我们如果要将一条语句（一组语句）编译或者放弃是很方便的。因为我们有条件
编译指令

比如说：调试性的代码，删除可惜，保留又碍事，所以我们可以选择性的编译

~~~c
#define __DEBUG__ 

#define MIN  0
#define REMOVE 1
int main()
{
	//1.
	#ifdef __DEBUG__
	printf("只要定义了 __DEBUG__ 就能编译这条语句\n");
	#endif

	//2.多个分支的条件编译
	
	//下面的条件必须是常量表达式
#	if MIN
	printf("你好\n");
	#elif  REMOVE
	printf("我好\n");
	#else
	printf("他好\n");
	#endif

	//嵌套指令...
	return 0;
}
~~~

这种条件编译的写法在库函数里面有很多。

##### 文件包含

我们已经知道， #include 指令可以使另外一个文件被编译。就像它实际出现于 #include 指令的地方一样。

这种替换的方式很简单：

预处理器先删除这条指令，并用包含文件的内容替换。

这样一个源文件被包含10次，那就实际被编译10次。

###### 头文件包含的方式：

1.本地文件包含

`#include "fileName"`

2.库文件包含

`#include<stdio.h>`

查找策略：先在源文件目录下查找，如果没有找到该文件，编译器就像查找库函数一样在标准位置查找头文件，如果找不到就提示编译错误。

Linux环境的标准头文件的路径：

`/usr/include`

VS环境的标准头文件的路径：

`E:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include`

具体还得按照自己的路径去找。

###### 嵌套文件包含

如果有多个文件同时需要包含同一个库文件，就会文件中出现大量相同的代码。如何解决：

1.条件编译

~~~c
#ifndef __TEST_H__
#define __TEST_H__
//头文件的内容
#endif  //__TEST_H__
~~~

2.#pragma once

##### 其他预处理指令

~~~c
#error
#pragma
#line
.....
之前用过#pragma pack() 修改结构体默认对齐数
~~~

完结！！！

























































































































