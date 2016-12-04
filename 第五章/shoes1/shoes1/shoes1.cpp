// shoes1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define ADJUST 7.64
#define SCALE 0.325

int _tmain(int argc, _TCHAR* argv[])
{
	double shoe,foot;
	shoe = 9.0;
	foot = SCALE * shoe +ADJUST;
	printf("shoe size(men's) foot length\n");
	printf("%10.1f  %15.2f inches\n",shoe,foot);
	getchar();
	return 0;
}

