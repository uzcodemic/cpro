// pound.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
void pound(int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int time =5;
	char ch ='!';
	float f = 6.0;
	pound(time);
	pound(ch);
	pound((int)f);
	getchar();
	return 0;
}
void pound(int n)
{
	while (n-->0)
	printf("#");
	printf("\n");
}
