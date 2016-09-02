/*************************************************************************
    > File Name: Fah_Cels_def.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月02日 星期五 14时33分20秒
 ************************************************************************/

#include<stdio.h>
#define LOWER 0
#define UPPER 360
#define STEP 20
int main(void)
{
	int fah;
	for(fah = LOWER; fah <= UPPER; fah = fah + 20){
		printf("%3d\t%3.1f\n", fah, (fah-32) * 5.0 / 9.0);
	}
}
