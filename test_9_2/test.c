#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	//1. 初始值 2. 判断 3.调整
//	for (int i = 0; i < 10; i++){
//		printf("%d ", i);
//	}
//	return 0; 
//}


//int main() {
//	//continue在for 循环中的作用
//
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//		if (i == 5) {
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main() {
//	int i = 0;
//	while ((i = getchar()) != EOF ) {
//		printf("%c", i);
//	}
//
//	printf("按下了ctrl+z或者ctrl+c退出了\n");
//	
//	return 0;
//}

//int main() {
//	//输入1-100的奇数
//	for (int i = 1; i <= 100; i+= 2) {
//		/*if (i % 2 == 1) {
//			printf("%d ", i);
//		}*/
//
//		printf("%d ", i);
//	}
//	return 0; 
//
//}

//int main() {
//	int i = 0;
//	int j = 0;
//	//省略了初始值，结果可能不是我们预期的
//	for (; i < 3; i++) {
//		for (; j < 3; j++) {
//			printf("hahaha\n");
//		}
//	}
//	return 0;
//}

//int main() {
//	for (int x = 0, j = 0; j = 0; j++) {
//		x++;
//		printf("进入循环");
//	}
//	return 0;
//}



//int main() {
//	int i = 0;
//	do {
//		printf("%d ", i);
//		i++;
//	} while (i == 10);
//	return 0;
//}



//1. 计算n 的阶乘

//阶乘： 比如 5的阶乘 是 1 * 2 * 3 * 4 * 5;
//int main() {
//	int i = 0;
//	int j = 1;
//	int sum = 1;
//	printf("请输入一个数，作为需要求出的阶乘\n");
//	scanf("%d", &i);
//	if (i == 0) {
//		sum  = 1;
//		printf("%d\n",sum);
//	}
//	else {
//		while (j <= i) {
//			sum = sum * j;
//			j++;
//			
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//2.计算 1!+2!+3!+4!+5!+6!+7!+8!+9!+10! 的阶乘和

//int main() {
//	int n = 3;
//	int i = 0;
//	int sum = 1;
//	int val = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (i = 1; i <= n; i++) {
//			sum *= i;
//			val += sum;
//		}
//	}
//	printf("%d\n", val);
//	return 0;
//}

//3.在一个有序数组中查找具体的某个数字n (使用二分查找算法)
//int main() {
//	int i = 7;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
//	//如何每次都折半查？ 第一个数的小标和最后一个数的小标它们的平均值 0+9/2 = 4
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = (left + right) / 2;
//	//printf("%d", mid);
//	//如果大于 i 说明大了
//	//5 > 7   1 2 3 4 5 6 7 8 9 10
//
//	/*if (arr[mid] < i) {
//		left = mid + 1;
//	}
//	else if (arr[mid] > i) {
//		right = mid - 1;
//	}
//	else {
//		printf("找到了小标为：%d", mid);
//	}*/
//
//while (left <= right) 
//{
//	if (arr[mid] < i) {
//		left = mid + 1;
//	}
//	else if (arr[mid] > i) {
//		right = mid - 1;
//	}
//	else {
//		printf("找到了小标为：%d", mid);
//		break;
//	}
//}
//	return 0;
//
//}


//int main() {
//	//一组有序的数
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//要查找的值
//	int target = 9;
//	//第一个元素的下标
//	int left = 0;
//	//数组长度
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//最后一个元素的下标
//	int right = sz - 1;
//	//循环条件是 第一个下标元素和不会大于最后一个下标元素。
//	while (left <= right)
//	{
//		//中间值
//		int mid = (left + right) / 2;
//		//判断 如果中间值大于目标值，说明要查找的值在左边，这时，最后一个元素的下标就要为原来一半 -1，第一个元素下标不变
//		if (arr[mid] > target)
//		{
//			right = mid - 1;
//		}
//		//在判断如果小于目标值，说明要查找的值在右边，这时，第一个元素的小标就要为+1，最后一个下标不变
//		else if (arr[mid] < target)
//		{
//			left = mid + 1;
//		}
//		else
//			//大于和小于都判断了，还剩等于了
//		{
//			printf("找到了小标是：%d", mid);
//			break;
//		}
//	}
//	//如果第一个下标元素最后大于了最后一个小标元素，那就找不到了
//	if (left > right) {
//		printf("找不到了");
//	}
//	return 0;
//}


//int main() {
//	//计算n的阶乘
//	//阶乘：例如5的阶乘就是 1*2*3*4*5
//	int i = 1;
//	int sum = 1;
//	int target = 10;
//	for (i = 1; i <= target;i++) {
//		sum = sum * i;
//		printf("%d\n", sum);
//	}
//}

//#include<Windows.h>
//int main() {
//	//编写代码，演示多个字符从两端移动，向中间汇聚
//	//welcome to bit...
//	//#################
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//条件是当它们当left还小于等于right的时候表示它们还没相交
//	while (left<=right) {
//		
//		arr2[left] = arr1[left];
//		left++;
//		arr2[right] = arr1[right];
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000); // 单位是毫秒，作用是停一秒
//		system("cls"); // 清空屏幕
//	}
//	printf("%s\n", arr2);
//
//	/*for (int i = 0; i <= 20; i++) {
//		arr2[left] = arr1[left];
//		left++;
//		arr2[right] = arr1[right];
//		right--;
//		printf("%s\n", arr2);
//	}*/
//
//	return 0;
//}


//int main() {
//	//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，退出程序）
//	char password[] = "abcd";
//	char target[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码:>\n");
//		scanf("%s", target);
//		if (strcmp(target, password) == 0) {
//			printf("登录成功！\n");
//			break;
//		}
//	}
//	//printf("密码错误！");
//	if (i == 3) {
//		printf("三次密码错误！！退出程序\n");
//	}
//	return 0;
//}

#include<stdlib.h>
#include<time.h>

//void menu() {
//	printf("****************************\n");
//	printf("********* 1.play ***********\n");
//	printf("********* 0.exit ***********\n");
//	printf("****************************\n");
//}
//void game() {
//	//printf("请选中")
//	int ret = rand() % 100 + 1;  //rand生成一个随机数 模100 + 1 生成0-100的随机数      rand之前调用下srand函数
//	int  guess = 0;
//	while (1)
//	{
//		printf("请猜数字\n");   //  90 > 80 
//		scanf("%d", &guess);
//		if (ret > guess) { 
//			printf("猜小了\n");
//		}
//		else if (ret < guess) {
//			printf("猜大了\n");
//		}
//		else {
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main() {
//	//猜数字实现
//	int input = 0;
//	srand((unsigned int)time(NULL));  // 强制类型转换  （类型） 
//	do{
//		menu();
//		printf("输入选项:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请输入合法的数字\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//猜数字游戏实现
//生成1-100的随机数
//1.有个菜单 两个选择 1开始游戏 0结束游戏
//如果选择0退出游戏 ，选择1 提示输入一个数，然后开始猜，猜大了就提示猜大了，小了提示猜小了，直到猜对了。
//猜对了不退出游戏，而是继续回到菜单选择

#include<stdio.h>
#include<time.h>
menu() {
	printf("###########################\n");
	printf("######    1.paly  #########\n");
	printf("######    0.exit  #########\n");
}
game() {
	//生成一个随机数
	int ret = rand() % 100 + 1;
	int guess = 0;
	while (1) {
		printf("请选择一个数\n");
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
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入0或1\n");
		}
	} while (input);
	return 0;
}



