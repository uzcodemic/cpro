// addemmup.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])				//���ǰ20�������ĺ�
{
	int count,sum;									//�������

	count = 0;
	sum = 0;
	while (count++ <20)						//while
		sum =sum + count;					//���
	printf("sum =%d\n",sum);			//�������
	getchar();
	return 0;
}

