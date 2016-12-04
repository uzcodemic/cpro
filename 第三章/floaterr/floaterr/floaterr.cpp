// floaterr.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	float a,b;
	b=2.0e10 + 1.0;
	a=b - 2.0e20;
	printf("%f  \n",a);
	getchar();

	return 0;
}

