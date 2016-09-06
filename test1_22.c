/*************************************************************************
    > File Name: test1_22.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月05日 星期一 22时24分08秒
 ************************************************************************/

#include<stdio.h>
#define TAB 8
#define N 22
int main(void){
	char line[N];

	return 0;
}
void getline2(char line[]){
	int c, i;
	int pos;
	pos = 0;
	while((c=getchar()) != EOF){
		if(c == '\n'){
			pos = 0;
		}else if(c == '\t'){
			for(i=pos; i<=(pos/TAB+1)*TAB && i<=N-2; i++){
				line[pos] = ' ';
				pos++;
			}
		}else{
			line[pos] = c;
			pos++;
		}
	}
}
