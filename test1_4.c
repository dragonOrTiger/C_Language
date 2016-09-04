/*************************************************************************
    > File Name: Cels_Fah.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月02日 星期五 13时36分20秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	printf("**摄氏-->华氏**\n");
	float cels,fah;
	float lower = 0;
	float upper = 360;
	float step = 20;
	cels = lower;
	while(cels <= upper){
		fah = cels *5 / 9 + 32;
		printf("%3.0f\t%3.1f\n",cels,fah);
		cels = cels + step;
	}
	return 0;
}
