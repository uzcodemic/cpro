// running.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
const int S_PER_M = 60;					//ÿ���ӵ�����
const int S_PER_H =3600;				//ÿСʱ������
const double M_PER_K = 0.62137;		//ÿ�����Ӣ����
int _tmain(int argc, _TCHAR* argv[])
{
	double distk,distm;					//�ֱ��Թ����Ӣ��Ƶ��ܹ��ľ���
	double rate;								//��Ӣ��/СʱΪ��λ��ƽ���ٶ�
	int min,sec;								//�ܲ���ʱ�ķ�����������
	int time;										//�����ʾ���ܲ���ʱ
	double mtime;								//����1Ӣ�����õ�ʱ�䣬�����
	int mmin,msec;						//����1Ӣ�����õ�ʱ�䣬�Է��Ӻ����

	printf("This program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("speed in miles per hour.\n");
	printf("Please enter, in kilometers, the distance run.\n");
	scanf("%lf",&distk);		//%1f��ʾ��ȡһ��double���͵���ֵ
	getchar();
	printf("Next enter the time in minutes and seconds.\n");
	printf("Begin by entering the minustes .\n");
	scanf("%d",&min);
	getchar();
	printf("Now enter the seconds.\n");
	scanf("%d",&sec);
	getchar();
	//��ʱ��ת��Ϊȫ�������ʾ
	time = S_PER_M * min + sec;
	//�ѹ���ת��ΪӢ��
	distm = M_PER_K  * distk;
	//Ӣ��/�� X ��/Сʱ=Ӣ��/Сʱ
	rate = distm / time * S_PER_H;
	//ʱ��/����=����ÿӢ�����ʱ
	mtime = (double)time/distm;
	mmin = (int)mtime / S_PER_M;			//���������
	msec = (int)mtime % S_PER_M;			//���ʣ�������
	printf("You ran %1.2f km (%1.2f miles) in %d min,%d sec.\n",
				distk,distm,min,sec);
	printf("That pace corresponds to running a mile in %d min, ",
				mmin);
	printf("%d sec.\nYour average speed was %1.2f mph.\n",msec,
				rate);
	getchar();
	return 0;
}

