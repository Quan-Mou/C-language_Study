#define _CRT_SECURE_NO_WARNINGS 
int cnt = 0;
fib(int n)
{
	cnt++;
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	else
		return fib(n - 1) + fib(n - 2);

}
void reverse(char* left,char* right)
{
	while (left<right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	// cnt�Ƕ��٣�
	//fib(8);
	//printf("%d",cnt);


	//a,b,c�����Ƕ��٣�
	//int a, b, c;
	//a = 5;
	//c = ++a; // c=6 a=6
	//b = ++c, c++, ++a, a++;//c=7 a=7 b=7 c=8 a=8  ע�ⶺ�ű�ʾ������ִ�У����ʽ����ֵ������һ�����ʽ��ֵ��
	//b += a++ + c; // 8+8=16+7   b=23 a=9; c=8
	//printf("a = %d b = %d c =%d\n", a, b, c); // 9 23 8 
	
	
	
	//��С������
	//int a, b;
	//scanf("%d %d", &a, &b);
	//int m = a > b ? a : b;
	//while (1)
	//{
	//	if (m%a == 0 && m%b == 0)
	//	{
	//		break;
	//	}
	//	m++;
	//}
	//printf("%d", m);


	//��һ�仰�ĵ��ʽ��е��ã���㲻���ã����磺I like beijing. �����������Ϊ beijing. like I
	//������ת��                          
	//1.�ַ������巭ת
	//2.ÿ����������
	char str[20] = { 0 };
	gets(str);
	int len = strlen(str);
	reverse(str,str+len-1);

	char* start = str;
	while (*start)
	{
		char* end = start;
		while (*end != ' '&& *end != '\0')
		{
			end++;
		}
		reverse(start, end-1);
		if (*end == ' ')
		start = end + 1;
		else
		start = end;
	}
	printf("%s", str);


	
	return 0;
}