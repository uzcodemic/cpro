// strings.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#define BLURB "Authentic imitation! "

int _tmain(int argc, _TCHAR* argv[])
{
	printf("/%2s/\n",BLURB);
	printf("/%24s/\n",BLURB);
	printf("/%24.5s/\n",BLURB);
	printf("/%-24.5s/\n",BLURB);
	getchar();
	return 0;
}

