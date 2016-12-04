// escape.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	float salary;
	printf("\aEnter your desired monthly salary: ");			/*1*/
	printf("$________\b\b\b\b\b\b\b");									/*2*/
	scanf("%f",&salary);
	printf("\n\t$%.2f month is $%.2f a year .",salary,
		salary * 12.0);
	printf("\r Gee!\n");
	getchar();
	getchar();
	return 0;
}

