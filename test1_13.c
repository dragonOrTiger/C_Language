/*************************************************************************
    > File Name: word_length.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月04日 星期日 14时42分08秒
 ************************************************************************/

#include<stdio.h>
#define OUT 0
#define IN 1
int main(void){
	int c, i, j, state, length;
	length =0;
	state =  OUT;
	int array[21];
	for(i=0; i<21; i++){
		array[i] = 0;
	}
	while((c=getchar()) != EOF){
		if(c==' ' || c=='\t' || c=='\n'){
			array[length]++;
			state = OUT;
			length = 0;
		}else if(state == OUT){
			state = IN;
			length++;
		}else{
			length++;
		}
	}
	for(i=1; i<21; i++){
		printf("\n%d\t",i);
		for(j=0; j<array[i]; j++){
			putchar('*');
		}
	}
	printf("\n");
	return 0;
}
