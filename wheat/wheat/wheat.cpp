// wheat.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#define SQUARES 64
#define CROP 1E15

int _tmain(int argc, _TCHAR* argv[])
{
	double current,total;
	int count = 1;

	printf("square   grains    total    ");
	printf("fraction of  \n");
	printf("	added		grain		");
	printf("US  total\n");
	total = current = 1.0;				//��ʼ��1��
	printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,
				total/CROP);
	while (count < SQUARES)
	{
			count = count +1;
			current = 2.0 * current;				//�¸�����������ӱ�
			total = total +current;				//��������
			printf("%4d %13.2e %12.2e %12.2e",count,current,
						total,total/CROP);
	}
	getchar();
	return 0;
}
