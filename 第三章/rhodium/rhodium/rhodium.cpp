// rhodium.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	float weight;				//�û�����
	float value;				//�����������ļ�ֵ
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out.\n");
	printf("Please enter you weight in pounds: ");
	//���û�����ȡ����
	scanf("%f",&weight);
	//������Ϊÿ��˾770��Ԫ
	//14.5833 �ѳ����Ƶ�Ӣ��ת��Ϊ����Ƶİ�˾
	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n",value);
	printf("Your are easily worth that ! If rhodium prices drop, \n");
	printf("eat more to maintain your value. \n");
	getchar();
	getchar();
	return 0;
}

