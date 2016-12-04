// showf_pt.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	float aboat= 32000.0;
	double abet =2.14e9;
	long double dip = 5.32e-5;
	float toobig =3.4e38 * 100.0f;
	printf("%f can be written %e\n",aboat,aboat);
	printf("%f can be written %e\n",abet,abet);
	printf("%f can be written %e\n",dip,dip);
	printf("%e\n",toobig);
	getchar();
	return 0;
}

