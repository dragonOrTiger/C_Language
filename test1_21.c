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
	int c, i, state, pos, start;
	pos = 0;
	state = OUT;
	while((c=getchar()) != EOF){
		if(c == '\n'){
			putchar(c);
			pos = 0;
			state = OUT;
		}else if(c == ' '){
			if(state == IN){
				state = OUT;
				start = pos;
			}
			pos++;
		}else if(c != ' '){
			if(state == OUT){
				while((start/TAB+1)*TAB <= pos){
					putchar('\t');
					start = (start/TAB+1)*TAB;
				}
				for(i=start; i<pos; i++){
					putchar(' ');
				}
				state = IN;
			}
			putchar(c);
			pos++;
		}
	}
	return 0;
}
