/*************************************************************************
    > File Name: test2_6.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月07日 星期三 14时39分34秒
 ************************************************************************/

#include<stdio.h>
unsigned int setbits(unsigned int x, int p, int n, int y);
int main(void){
	unsigned int x = 169;
	int p = 6;
	int n = 3;
	int y = 96;
	printf("%u\n",setbits(x,p,n,y));
	return 0;
}
unsigned int setbits(unsigned int x, int p, int n, int y){
	return x&~(~(~0<<n)<<(p+1-n)) | (y&~(~0<<n))<<(p+1-n);
}

