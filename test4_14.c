/*************************************************************************
    > File Name: test4_14.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-15 21:05:23
 ************************************************************************/

#include<stdio.h>
#define swap(t,x,y) {t temp;temp=x;x=y;y=temp;}
int main(void){
	int a = 9;
	int b = 7;
	swap(int,a,b)
	printf("a=%d\tb=%d\n",a,b);
}
