// typesize.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	//C99Ϊ���ʹ�С�ṩ��һ��%zd˵����
	printf("Type int has a size of %u bytes.\n",sizeof (int));
	printf("Type char has a size of %u bytes.\n",sizeof (char));
	printf("Type long has a size of %u bytes.\n",sizeof (long));
	printf("Type double has a size of %u bytes.\n",
	sizeof(double));
	getchar();
	return 0;
}

