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
//   printf("%d %d", a + b, c); // a+b= 300,����%d���з��Ŵ�ӡ��//
//   system("pause");
//   return 0;
// }



//int main()
//{
//	//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������
//	//���磺2 + 22 + 222 + 2222 + 22222
//	int n = 0;
//	scanf("%d", &n); // �������5 ��5+55+555+5555+55555  3+33+333
//	// tmp = n*1+ n*10+n
//	// ����3     3*10+3 = 33
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






//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣�
//int main()
//{
//	int money = 10;// Ǯ
//	int empty = 0;// ��ƿ
//	int total = 0; // ��������ˮ
//	total = money / 1; // 20
//	empty = total; // 20
//	while (empty>1)
//	{
//		total += empty / 2; // �����Ŀ�ƿ  20/2 = 10 =5
//		empty = (empty / 2) + (empty % 2); // 5/2 = 2����ʣ1ƿ�������ǻ�����+��ʣ�µ�1ƿ
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
	//printf("%d", total); // �ᷢ��һ�����ɣ��ȵ���ˮ���� Ǯ��*2-1ƿ

	//2.
	int money = 0;
	int total = 0;
	scanf("%d", &money);
	if (money>0)
	total = money * 2 - 1;
	printf("%d", total); // �ᷢ��һ�����ɣ��ȵ���ˮ���� Ǯ��*2-1ƿ
	return 0;
}


//����Ļ�ϴ�ӡ�������
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


//����ż������λ��
//��������ʹ����ȫ��λ��ż��ǰ��
//��Ŀ������һ�����飬ʵ��һ��������ʹ���е�����λ�������ǰ���֣�����ż��λ������ĺ�벿��
//void resize(int* arr,int sz)
//{
//	//1.��һ��д����
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
//		//����
//		if (((*arr) % 2 == 1) || ((*arr) == 1))
//		{
//			arr++;
//		}
//		//ż��
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

	//2.�ڶ���д����
	//int left = 0;
	//int right = sz - 1;
	//while (left<right)
	//{
	//	//����
	//	while ((arr[left] % 2 == 1) && (left<right))
	//	{
	//		arr++;
	//	}
	//	//ż��
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


//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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



//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
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


