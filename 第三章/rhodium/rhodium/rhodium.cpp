// rhodium.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	float weight;				//用户体重
	float value;				//相等重量的铑的价值
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out.\n");
	printf("Please enter you weight in pounds: ");
	//从用户处获取输入
	scanf("%f",&weight);
	//假设铑为每盎司770美元
	//14.5833 把常衡制的英镑转换为金衡制的盎司
	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n",value);
	printf("Your are easily worth that ! If rhodium prices drop, \n");
	printf("eat more to maintain your value. \n");
	getchar();
	getchar();
	return 0;
}

