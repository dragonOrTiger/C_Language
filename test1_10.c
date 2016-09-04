/*************************************************************************
    > File Name: test1_10.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月03日 星期六 23时11分14秒
 ************************************************************************/

#include<stdio.h>
int main(void){
	int c;
	while((c=getchar()) != EOF){
		if(c == '\t'){
			putchar('\\');
			putchar('t');
		}
		else if(c == '\b'){
			putchar('\\');
			putchar('b');
		}
		else if(c == '\\'){
			putchar('\\');
			putchar('\\');
		}
		else{
			putchar(c);
		}
	}
	return 0;
}
