// nogood.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int n,n2,n3;

	/*该程序有几个错误*/
	n=5;
	n2=n * n;
	n3=n2 * n2;
	printf("n =%d,n squared =%d,n cubed =%d\n",n,n2,n3);
	getchar();
	return 0;
}

