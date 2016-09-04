/*************************************************************************
    > File Name: test1_9.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月03日 星期六 22时13分44秒
 ************************************************************************/

#include<stdio.h>
#define NOBLANK 'a'
int main(void){
	int c, lastc;
	lastc = NOBLANK;
	while((c=getchar()) != EOF){
		if(c != ' ')
			putchar(c);
		else if(lastc != ' ')
			putchar(c);
		lastc = c;
	}
	return 0;
}
