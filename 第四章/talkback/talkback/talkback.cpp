// talkback.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "string.h"					//�ṩstrlen����������ԭ��
#define DENSITY 62.4			//�˵��ܶȣ���λ�ǣ�Ӣ��/ÿ�����ߣ�


int _tmain(int argc, _TCHAR* argv[])
{
	float weight,volume;
	int size,letters;
	char name[40];				//name ��һ����40���ַ�������

	printf("Hi! What's your first name?\n");
	scanf("%s",&name);
	printf("%s, what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	size =sizeof name;
	letters = strlen(name);
	volume =weight /DENSITY;
	printf("Well, %s, your volum is %2.2f cubic feet .\n",
		name,volume);
	printf("Also, your first name has %d letters, \n",
		letters);
	printf("and we have %d bytes to store it in .\n",size);
	getchar();
	getchar();

	return 0;
}

