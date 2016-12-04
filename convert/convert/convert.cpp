// convert.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char ch;
	int i;
	float fl;

	fl = i = ch = 'A';
	printf("ch =%c,i = %d,fl= %2.2f\n",ch,i,fl);				
	ch = ch + 1;
	i = fl +2 * ch;
	fl = 2.0 * ch +i;
	printf("ch = %c,i = %d,fl =%2.2f\n",ch,i,fl);
	ch =5212205.17;
	printf("Now ch =%c\n",ch);
	getchar();
	return 0;
}

