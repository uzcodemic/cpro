// add_one.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int ultra =0,super =0;
	while(super <5)
	{
		super++;
		++ultra;
		printf("super = %d,ultra =%d \n",super,ultra);
	}
	getchar();
	return 0;
}

