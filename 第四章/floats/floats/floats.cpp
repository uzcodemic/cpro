// floats.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	const double RENT = 3852.99;			//��const�������峣��

	printf("*%f*\n",RENT);
	printf("*%e*\n",RENT);
	printf("*%4.2f*\n",RENT);
	printf("*%3.1f*\n",RENT);
	printf("*%10.3f*\n",RENT);
	printf("*%10.3e*\n",RENT);
	printf("*%+4.2f*\n",RENT);
	printf("*%010.2f*\n",RENT);
	getchar();
	return 0;
}

