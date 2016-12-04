// praise1.cpp : 定义控制台应用程序的入口点。
// praise1.c		--使用不同类别的字符串

#include "stdafx.h"
#define PRAISE "What a super marvelous name!"

int _tmain(int argc, _TCHAR* argv[])
{
	char name[40];


	printf("What's your nanme ?\n");
	scanf("%s",name);
	printf("Hello, %s. %s\n",name,PRAISE);
	getchar();
	getchar();
	return 0;
}

