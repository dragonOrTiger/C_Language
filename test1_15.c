/*************************************************************************
    > File Name: test1_15.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月04日 星期日 22时32分35秒
 ************************************************************************/

#include<stdio.h>
float fah2cels(int fah);
float cels2fah(int cels);
int main(void){
	int lower, upper, step, fah, cels;
	lower = 0;
	upper =360;
	step = 20;
	printf("华氏--->摄氏\n");
	for(fah=lower; fah<=upper; fah=fah+step){
		printf("%d\t%3.1f\n", fah, fah2cels(fah));
	}
	printf("摄氏--->华氏\n");
	for(cels=lower; cels<=upper; cels=cels+20){
		printf("%d\t%3.1f\n", cels, cels2fah(cels));
	}
	return 0;
}
float fah2cels(int fah){
	return (fah-32.0) * 5.0 / 9.0;
}
float cels2fah(int cels){
	return cels * 9.0 / 5.0 + 32.0;
}
