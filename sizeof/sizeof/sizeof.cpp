// sizeof.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int n =0;
	size_t	intsize;
	intsize = sizeof(int);
	printf("n = %d,n has %u bytes;all ints have %u bytes.\n",
		n,sizeof n,intsize);
	getchar();
	return 0;
}

