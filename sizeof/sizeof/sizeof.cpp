// sizeof.cpp : �������̨Ӧ�ó������ڵ㡣
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

