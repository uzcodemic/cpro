// addemmup.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])				//求出前20个整数的和
{
	int count,sum;									//声明语句

	count = 0;
	sum = 0;
	while (count++ <20)						//while
		sum =sum + count;					//语句
	printf("sum =%d\n",sum);			//函数语句
	getchar();
	return 0;
}

