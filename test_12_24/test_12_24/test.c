#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
	//char ch[] = { "abcdef" };
	//char ch2[16] = { 0 };
	////fwrite 写文件
	////FILE* pf = fopen("test.dat", "wb");
	//FILE* pf = fopen("test.dat", "rb");
	////fwrite(ch,sizeof(ch),1,pf);

	////fread 读文件
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
//		//假如test.dat里面时abcdef
//		//ret = fgetc(pf);//a
//		//printf("%c ", ret); 
//
//		//ret = fgetc(pf); //b
//		//printf("%c ", ret);
//
//		//fseek(pf,2,SEEK_CUR); //e  正数后移偏移两个字节，反之前移
//		//ret = fgetc(pf);
//		//printf("%c ", ret);
//		//	
//		//fseek(pf, 2, SEEK_SET);  // 起始位置后移
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
//	//文件读取结束的标志
//	//例如：要将test.dat 的内容复制到test2.dat中
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
//		printf("遇到文件结束标准，正确结束\n");
//	}
//	else if (ferror(fread))
//	{
//		printf("文件读取错误\n");
//	}
//
//	//正常 
//	FILE * fwrite = fopen("test2.dat", "w");
//	int ret = 0;
//	while ((ret = fgetc(fread)) != EOF)
//	{
//		//写入test2.dat
//		fputc(ret, fwrite);
//	}
//	return 0;
//}

//#include<Windows.h>
//int main()
//{
//	//文件缓冲区
//	FILE * pf = fopen("demo.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		fclose(pf);
//		pf = NULL;
//	}
//	fputs("zqh", pf);
//	printf("睡眠10秒，此时点击demo.dat会发现没有内容\n");
//	Sleep(10000);
//	fflush(pf); // 刷新内存缓冲区
//	printf("再次程序睡眠10秒（相当于程序停在那里）,demo.dat里面就有内容了\n");
//	Sleep(10000);
//	fclose(pf); // fclose在关闭文件的时候，也会刷新缓冲区
//
//	return 0;
//}



//程序的环境和预处理








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
	//100>15 ? (10) : (15)  // 本质是替换

	return 0;
}

//更多内容在笔记里面
