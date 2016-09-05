/*************************************************************************
    > File Name: test1_21.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月05日 星期一 17时51分12秒
 ************************************************************************/

#include<stdio.h>
#define TAB 8
#define OUT 0
#define IN 1
int main(void){
	int c, pos;
	pos = 0;
	while((c=getchar()) != EOF){
		if(c == '\n'){
			pos = 0;
			putchar(c);
		}
		if(c == ' '){
			state = OUT;
		}else if
	}
	return 0;
}
