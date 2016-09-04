/*************************************************************************
    > File Name: word_length_1st.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月04日 星期日 20时09分43秒
 ************************************************************************/

#include<stdio.h>
#define OUT 0
#define IN 1
int main(void){
	int c,i,j,state, length;
	state = OUT;
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
			length++;
			state = IN;
		}else{
			length++;
		}
	}
	int max = array[1];
	for(i=2; i<21; i++){
		if(array[i] > max){
			max = array[i];
		}
	}
	for(i=max; i>0; i--){
		for(j=1; j<21; j++){
			if(array[j] >= i){
				putchar('*');
			}else{
				putchar(' ');
			}
		}
		printf("\n");
	}
	return 0;
}
