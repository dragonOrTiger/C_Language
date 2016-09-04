/*************************************************************************
    > File Name: char_line_word_count.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月04日 星期日 10时47分26秒
 ************************************************************************/

#include<stdio.h>
#define IN 1
#define OUT 0
int main(void){
	int c, nc, nl, nw, state;
	state = OUT;
	nc = 0;
	nl = 0;
	nw = 0;
	while((c=getchar()) != EOF){
		++nc;
		if(c == '\n'){
			++nl;
		}
		if(c==' ' || c=='\t' || c =='\n'){
			state = OUT;
		}else if(state == OUT){
			state = IN;
			++nw;
		}
	}
	printf("%d\t%d\t%d\n",nc,nw,nl);
	return 0;
}
