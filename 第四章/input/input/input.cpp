// input.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int age;				//变量
	float assets;		//变量
	char pet[30];		//字符串

	printf("Enter your age,assets,and favorite pet.\n");
	scanf("%d %f",&age,&assets);					//此处使用
	scanf("%s",pet);
	printf("%d $%.2f %s\n",age,assets,pet);
	getchar();
	getchar();
	return 0;
}

