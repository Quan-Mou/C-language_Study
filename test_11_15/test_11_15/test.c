#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* destination, const char*  src)
{
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

//int my_strlen(const char * str)
//{
//	str = NULL;
//	assert(str != NULL);
//	//����������\0�ͽ���
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

int main()
{
	//ʲô��bug��

	//int arr[10] = {99,33,44,323,44};
	//int i = 0;	for (i = 0; i < 10; i++)
	//{
	//	arr[i] = i;
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]); 
	//}


	//int i = 0;
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//for (i = 0; i <= 12; i++)
	//{
	//	arr[i] = 0;
	//	printf("haha\n");
	//}
	//�о�������ѭ����ԭ��
	//i��arr�Ǿֲ����������ֲ������Ǵ�������ڴ�ջ�еģ�ջ����ϰ���ǵ�ַ�Ӹߵ��أ���arr���������±�������ڴ�ӵ͵��ߡ�



	//ģ��ʵ��my_strlen����  (����д��)
	//1.const
	//2.assert
	//char str[] = { "abcdefd" };
	//int len = my_strlen(str);
	//printf("%d", len);

	//char str1[] = "nihaoshijie";
	//char str2[] = "haha";
	//strcpy(str1, str2);
	//printf("%s", str1);

	//ģ��ʵ��strcpy�⺯��
	char destination[] = "tomorrow";
	char src[] = "hhhhhh";
	my_strcpy(destination, src);
	printf("%s\n", destination);


	int a = 10;
	int b = 100;
	//const: ���γ�������������ֵ�����Ըı䣬���Ǳ����ϻ��Ǳ���
	//���const��ָ��������ߣ����ε���*p����ʾ���ָ���ֵ�����Ըı䣬�������ָ��������Ա��ı�
	//���const��ָ�������ұߣ����ε���p����ʾ���ָ��������ܸı䣬����ָ������ݣ�ֵ�����Ըı�
	//int const * const p = &a;
	//const int*  p = &a;
	//int* const p = &a; 
	//*p = 20;
	//p = &b;

	return 0;
}