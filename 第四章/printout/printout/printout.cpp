// printout.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define PI  3.141593

int _tmain(int argc, _TCHAR* argv[])
{
	int number = 5;
	float expresso =13.5;
	int cost =3100;

	printf("The %d CEOs drank %f cups of expresso.\n",number,
				expresso);
	printf("The value of pi is %f .\n",PI);
	printf("Fareweell ! thou art too dear for my possessing, \n");
	printf("%c%d",'$',2 * cost);
	getchar();
	return 0;
}

