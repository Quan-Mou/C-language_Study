#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>

// void print(int *arr)
// {
//   int i = 0;
//   for (i = 0; i < 10; i++)
//   {
//     printf("%d ", *arr + i);
//   }
// }
// int main()
// {
//   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//   print(arr);
//   system("pause");
//   return 0;
// }

// int main()
// {
//   unsigned long pulArray[] = {6, 7, 8, 9, 10};
//   unsigned long *pulPtr;
//   pulPtr = pulArray;
//   *(pulPtr + 3) += 3; // 12
//   printf("%d\n", *(pulPtr + 3));
//   printf("%d\n", pulPtr);
//   printf("%d", *pulPtr + 1);
//   printf("%d", *pulPtr + 2);
//   printf("%d\n", *pulPtr + 3);

//   printf("%d ", *(pulPtr + 1));
//   printf("%d ", *(pulPtr + 2));
//   printf("%d ", *(pulPtr + 3));
//   // printf("%d %d\n", *pulPtr, *(pulPtr + 3)); //6 12
//   system("pause");
//   return 0;
// }

// int main()
// {
//   unsigned char a = 200;
//   //00000000000000000000000011001000  - 200
//   unsigned char b = 100;
//   //00000000000000000000000001100100  - 100
//   unsigned char c = 0;
//   c = a + b;                 // 11001000 + 01100100
//   printf("%d %d", a + b, c); // a+b= 300,按照%d（有符号打印）//
//   system("pause");
//   return 0;
// }



//int main()
//{
//	//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//	//例如：2 + 22 + 222 + 2222 + 22222
//	int n = 0;
//	scanf("%d", &n); // 如果输入5 ：5+55+555+5555+55555  3+33+333
//	// tmp = n*1+ n*10+n
//	// 输入3     3*10+3 = 33
//	int i = 0;
//	int tmp = 0;
//	int sum = 0; //
//	for (i = 0; i < n; i++)
//	{
//		int tmp = tmp * 10 + n; // 5 5*10+5=55;
//		sum += tmp;             // 5
//	}
//	printf("%d ", sum);
//	system("pause");
//	return 0;
//}






//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）
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


//在屏幕上打印杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i>=2 && j>=1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//调整偶数奇数位置
//调整数组使奇数全部位于偶数前面
//题目：输入一个数组，实现一个函数，使所有的奇数位于数组的前部分，所有偶数位于数组的后半部分
//void resize(int* arr,int sz)
//{
//	//1.第一种写法：
//	int i = 0;
//	int* start = arr;
//	int* right = arr + sz-1;
//	int tmp = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//if ((*arr) == 1)
//		//{
//		//	arr++;
//		//}
//		//奇数
//		if (((*arr) % 2 == 1) || ((*arr) == 1))
//		{
//			arr++;
//		}
//		//偶数
//		while (((*arr) % 2 == 0) && (start<right))
//		{
//			if (((*arr) % 2 == 0) && (start<right))
//			{
//				tmp = *arr;
//				*arr = *right;
//				*right = tmp;
//			}
//			start++;
//			right--;
//		}
//	}

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

//}
//int main()
//{
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr[] = { 3, 2, 12, 4, 57, 67, 88, 55 };
//	//int arr[] = { 1,3,5,7,9,13,15,17,19};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	resize(arr,sz);
//
//	return 0;
//}


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for (A = 0; A <= 5; A++)
//	{
//		for (B = 0; B <= 5; B++)
//		{
//			for (C = 0; C <= 5; C++)
//			{
//				for (D = 0; D <= 5; D++)
//				{
//					for (E = 0; E <= 5; E++)
//					{  
//						//1*3*2*5*4
//						//120
//						if ((B == 2) + (A == 3) == 1 && (B == 2) + (E == 4) == 1 && (C == 1) + (D == 2) == 1 && (C == 5) + (E == 3) == 1 && (E == 4) + (A == 1) == 1)
//						{
//							//printf("%d %d %d %d %d \n", A, B, C, D, E);
//							if ((A*B*C*D*E) == 120)
//							{
//								printf("%d %d %d %d %d \n", A, B, C, D, E);
//							}
//						}
//						
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//int main()
//{
//	char killer = 'A';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
//		{
//			printf("%c", killer);
//		}
//	}
//	return 0;
//
//}


