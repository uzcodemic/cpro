// praise1.cpp : �������̨Ӧ�ó������ڵ㡣
// praise1.c		--ʹ�ò�ͬ�����ַ���

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

