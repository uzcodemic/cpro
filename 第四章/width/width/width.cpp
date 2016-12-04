// width.cpp : 定义控制台应用程序的入口点。
//				字符宽度

#include "stdafx.h"
#define PAGES 931

int _tmain(int argc, _TCHAR* argv[])
{
	printf("*%d*\n",PAGES);
	printf("*%2d*\n",PAGES);
	printf("*%10d*\n",PAGES);
	printf("*%-10d*\n",PAGES);
	getchar();
	return 0;
}

