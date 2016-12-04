// prntval.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int bph2o =312;
	int rv;

	rv= printf("%d F is water's boiling poing.\n",bph2o);
	printf("The printf () funtion printfed %d characters.\n",
				rv);
	getchar();
	return 0;
}

