/*************************************************************************
    > File Name: test2_7.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月07日 星期三 16时17分19秒
 ************************************************************************/

#include<stdio.h>
unsigned int invert(unsigned x, int p, int n);
int main(void){
	unsigned int x = 169;
	int p = 6;
	int n = 3;
	printf("%d\n",invert(x,p,n));
	return 0;
}
unsigned int invert(unsigned x, int p ,int n){
	return x ^ ~(~0<<n)<<(p+1-n);
}
