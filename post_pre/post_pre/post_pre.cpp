// post_pre.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a =1, b=1;
	int aplus,plusb;

	aplus = a++;//后缀
	plusb =++b;//前缀
	printf("a aplus b plusb \n");
	printf("%1d %5d %5d %5d\n",a,aplus,b,plusb);
	getchar();
	return 0;
}

