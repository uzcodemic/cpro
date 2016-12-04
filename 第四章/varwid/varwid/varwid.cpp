// varwid.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	unsigned width,precision;
	int number = 256;
	double weight =242.5;

	printf("What field width?\n");
	scanf("%d",&width);
	printf("The number is: %*d: \n",width,number);
	printf("New enter a width and a precision: \n");
	scanf("%d %d",&width,&precision);
	printf("Weight = %*.*f\n",width,precision,weight);
	getchar();
	getchar();
	return 0;
}

