/*************************************************************************
    > File Name: Cels_Fah_for.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月02日 星期五 14时01分39秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	int fah;
	for(fah = 360; fah >= 0; fah = fah - 20){
		printf("%3d\t%3.1f\n", fah, (fah - 32) * 5.0 / 9.0);
	}
	return 0;
}
