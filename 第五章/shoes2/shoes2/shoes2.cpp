// shoes2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#define  ADJUST 7.64
#define  SCALE 0.325

int _tmain(int argc, _TCHAR* argv[])
{
	double shoe,foot;

	printf("Shoe size(men's)   foot length\n");
	shoe = 2.0;
	while (shoe++ <18.5)														//whileѭ����ʼ
	{																						//���뿪ʼ
		foot = SCALE * shoe * ADJUST;							
		printf("%10.1f %15.2f inches\n",shoe,foot);
		//shoe = shoe + 1.0;
	}																						//ѭ������
	printf("If hte shoe fits, wear it.\n");
	printf("good boy!");
	getchar();
	return 0;
}

