/*************************************************************************
    > File Name: test2_8.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月07日 星期三 16时37分42秒
 ************************************************************************/

#include<stdio.h>
unsigned int rightrot(unsigned int x, int n);
int main(void){
	unsigned int x = 169;
	int n = 3;
	printf("%u\n",rightrot(x,n));
	return 0;
}
unsigned int rightrot(unsigned int x, int n){
	return (~(~0<<n)&x)<<(32-n) | x>>n;
}
