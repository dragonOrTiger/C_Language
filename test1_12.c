/*************************************************************************
    > File Name: test1_12.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月04日 星期日 11时17分05秒
 ************************************************************************/

#include<stdio.h>
#define IN 1
#define OUT 0
int main(void){
	int c, state;
	state = OUT;
	while((c=getchar()) != EOF){
		if(c==' ' || c=='\t' || c=='\n'){
			state = OUT;
		}else if(state == OUT){
			state = IN;
			putchar('\n');
			putchar(c);
		}else{
			putchar(c);
		}
	}
	return 0;
}
