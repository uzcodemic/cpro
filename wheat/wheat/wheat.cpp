// wheat.cpp : 定义控制台应用程序的入口点。
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
	total = current = 1.0;				//开始是1粒
	printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,
				total/CROP);
	while (count < SQUARES)
	{
			count = count +1;
			current = 2.0 * current;				//下个方格的粒数加倍
			total = total +current;				//更新总数
			printf("%4d %13.2e %12.2e %12.2e",count,current,
						total,total/CROP);
	}
	getchar();
	return 0;
}

