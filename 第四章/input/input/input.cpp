// input.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int age;				//����
	float assets;		//����
	char pet[30];		//�ַ���

	printf("Enter your age,assets,and favorite pet.\n");
	scanf("%d %f",&age,&assets);					//�˴�ʹ��
	scanf("%s",pet);
	printf("%d $%.2f %s\n",age,assets,pet);
	getchar();
	getchar();
	return 0;
}

