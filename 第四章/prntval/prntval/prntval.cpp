// prntval.cpp : �������̨Ӧ�ó������ڵ㡣
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

