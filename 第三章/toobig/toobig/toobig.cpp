// toobig.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i =2147483647;
	unsigned int j =4294967295;
	printf("%d %d %d \n",i,i+1,i+2);
	printf("%u %u %u\n",j, j+1, j+2);
	getchar();
	return 0;
}

