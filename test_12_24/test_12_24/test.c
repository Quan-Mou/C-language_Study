#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
	//char ch[] = { "abcdef" };
	//char ch2[16] = { 0 };
	////fwrite д�ļ�
	////FILE* pf = fopen("test.dat", "wb");
	//FILE* pf = fopen("test.dat", "rb");
	////fwrite(ch,sizeof(ch),1,pf);

	////fread ���ļ�
	//fread(ch2,sizeof(ch2),1,pf);
	//printf("%s", ch2);
	//fclose(pf);

	//scanf/fscanf/sscanf
	//printf/fprintf/sprintf

	//fseek
//
//	FILE* pf = fopen("test.dat","r");
//	int ret = 0;
//	if (pf != NULL)
//	{
//		//fseek
//		//����test.dat����ʱabcdef
//		//ret = fgetc(pf);//a
//		//printf("%c ", ret); 
//
//		//ret = fgetc(pf); //b
//		//printf("%c ", ret);
//
//		//fseek(pf,2,SEEK_CUR); //e  ��������ƫ�������ֽڣ���֮ǰ��
//		//ret = fgetc(pf);
//		//printf("%c ", ret);
//		//	
//		//fseek(pf, 2, SEEK_SET);  // ��ʼλ�ú���
//		//ret = fgetc(pf);
//		//printf("%c ", ret);
//
//		//ftell
//		
//		fseek(pf,5,SEEK_SET);
//		ret = fgetc(pf);
//		printf("%c ", ret); 
//
//		int location = ftell(pf);
//		printf("%d ", location);
//
//		//rewind
//
//		rewind(pf);
//		ret = fgetc(pf);
//		printf("%c", ret);
//
//
//	
//	}
//	
//	fclose(pf);
//	pf = NULL;
//
//	
//	return 0;
//}



//int main()
//{
//	//�ļ���ȡ�����ı�־
//	//���磺Ҫ��test.dat �����ݸ��Ƶ�test2.dat��
//	FILE * fread = fopen("test.dat", "r");
//
//	if (fread == NULL)
//	{
//		perror("fread");
//		fclose(fread);
//		fread = NULL;
//		return 1;
//	}
//
//	if (feof(fread))
//	{
//		printf("�����ļ�������׼����ȷ����\n");
//	}
//	else if (ferror(fread))
//	{
//		printf("�ļ���ȡ����\n");
//	}
//
//	//���� 
//	FILE * fwrite = fopen("test2.dat", "w");
//	int ret = 0;
//	while ((ret = fgetc(fread)) != EOF)
//	{
//		//д��test2.dat
//		fputc(ret, fwrite);
//	}
//	return 0;
//}

//#include<Windows.h>
//int main()
//{
//	//�ļ�������
//	FILE * pf = fopen("demo.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		fclose(pf);
//		pf = NULL;
//	}
//	fputs("zqh", pf);
//	printf("˯��10�룬��ʱ���demo.dat�ᷢ��û������\n");
//	Sleep(10000);
//	fflush(pf); // ˢ���ڴ滺����
//	printf("�ٴγ���˯��10�루�൱�ڳ���ͣ�����,demo.dat�������������\n");
//	Sleep(10000);
//	fclose(pf); // fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//
//	return 0;
//}



//����Ļ�����Ԥ����








//100,200
#define MAX(x,y) ((x) >(y)? (x):(y));
//#define MAX(x,y) ((100) >(200)? (100):(200));

#define M(a,b) (a)>(b)?(a):(b)
//#define M(10,15) (10)>(15)?(10):(15) // 150 10
int main()
{
	int m = MAX(100, 200);
	printf("%d", m);
	int i = 10;
	int j = 15;
	printf("%d", 10 * M(i, j));
	//printf("%d", 10 * (10)>(15) ? (10) : (15));
	//100>15 ? (10) : (15)  // �������滻

	return 0;
}

//���������ڱʼ�����
