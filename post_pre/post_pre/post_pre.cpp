// post_pre.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a =1, b=1;
	int aplus,plusb;

	aplus = a++;//��׺
	plusb =++b;//ǰ׺
	printf("a aplus b plusb \n");
	printf("%1d %5d %5d %5d\n",a,aplus,b,plusb);
	getchar();
	return 0;
}

