// fathm_ft.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int feet,fathoms;
	fathoms =2;
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms !\n",feet,fathoms);
	printf("Yes, I said %d feet !\n",6 * fathoms);
	getchar();
	return 0;
}

