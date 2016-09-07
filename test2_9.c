/*************************************************************************
    > File Name: test2_9.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月07日 星期三 17时48分26秒
 ************************************************************************/

#include<stdio.h>
int bitcount(unsigned int x);
int main(void){
	unsigned int x = 169;
	printf("%d\n",bitcount(x));
	return 0;
}
int bitcount(unsigned int x){
	int b;
	for(b=0;x!=0;x&=x-1){
		b++;
	}
	return b;
}
