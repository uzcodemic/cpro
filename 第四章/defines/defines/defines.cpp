// defines.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "limits.h"
#include "float.h"

int _tmain(int argc, _TCHAR* argv[])
{
	printf("Some number limits for this system: \n");
	printf("biggest int: %d\n",INT_MAX);
	printf("Smallest unsigned long: %lld\n",LLONG_MIN);
	printf("One byte = %d bits on this system.\n",CHAR_BIT);
	printf("largest double: %e\n",DBL_MAX);
	printf("Smallest normal float: %e\n",FLT_MIN);
	printf("float precision = %d digists\n",FLT_DIG);
	printf("float epsilon = %e\n",FLT_EPSILON);
	getchar();
	return 0;
}

