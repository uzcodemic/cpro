// two_func.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
void butler (void);  //ISO/ANSI C 函数原型

int _tmain(int argc, _TCHAR* argv[])
{
	
	printf("i will sumon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable CD-ROMS. \n");
	getchar();
	return 0;
}

void butler (void)
{
	printf("You rang,sir?\n");
}

