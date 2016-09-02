/*************************************************************************
    > File Name: test_static3.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月01日 星期四 18时18分26秒
 ************************************************************************/

#include<stdio.h>
void num(int a){
	static int b = 9;
	printf("b=%d\n",b);
	b = a;
}
int main(void){
	num(8);
	num(7);
	num(6);
}
