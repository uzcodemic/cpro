// intconv.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define PAGES 336
#define WORDS 65618

int _tmain(int argc, _TCHAR* argv[])
{
	short num =PAGES;
	short mnum = -PAGES;

	
	printf("num as short and  unsigned short: %hd %hu\n",num,num);
	printf("-num as short and unsigned short: %hd %hu\n",mnum,mnum);
	printf("num as int and char: %d %hd %c\n",WORDS,WORDS,WORDS);
	getchar();
	return 0;
}

