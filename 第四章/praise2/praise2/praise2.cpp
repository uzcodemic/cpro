// praise2.cpp : 定义控制台应用程序的入口点。
//		

#include "stdafx.h"
#include "string.h"			//提供strlen()函数原型
#define PRAISE "What  a super marvelous name!"


int _tmain(int argc, _TCHAR* argv[])
{
	char name[40];


	printf("What's your name?\n");
	scanf("%s",name);
	printf("Hello %s. %s\n",name,PRAISE);
	printf("Your name of %d letters cocupies Td memory cells.\n",
		strlen(name),sizeof name);
	printf("The phrase of praise has %d letters",
		strlen(PRAISE));
	printf("and  occupies %d memory cells.\n",sizeof PRAISE);
	getchar();
	getchar();
	return 0;
}

