/*************************************************************************
    > File Name: Fah_Cels.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年09月01日 星期四 15时14分03秒
 ************************************************************************/

#include<stdio.h>
/*
 * 当Fah=0,20,40,...300时，分别打印摄氏温度与华氏温度对照表
 */
int main(void)
{
	printf("**华氏-->摄氏**\n");
	float fahr,cels;
	float lower,upper,step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	while(fahr <= upper){
		cels = 5.0 * (fahr-32.0) / 9.0;
		printf("%3.1f\t%3.1f\n",fahr,cels);
		fahr = fahr + step;
	}
	return 0;
}
