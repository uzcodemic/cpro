// pizza.cpp : 定义控制台应用程序的入口点。
// pizza.c		---在这个披萨饼的例子中使用定义常量

#include "stdafx.h"
#define PI 3.14159

int _tmain(int argc, _TCHAR* argv[])
{
	float area,circum,radius;

	printf("What is hte radius of your pizza?\n");
	scanf("%f",&radius);
	area = PI * radius * radius;
	circum =2.0 * PI * radius;
	printf("Your basic pizza parameters are as follows: \n");
	printf("circumference = %1.2f, area =%1.2f\n",circum,
				area);
	getchar();
	getchar();
	return 0;
}

