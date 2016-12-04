// squares.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int num =1 ;

	while (num < 21)
	{
		printf("%4d %6d\n",num,num * num);
		num = num + 1;
	}
	getchar();
	return 0;
}

