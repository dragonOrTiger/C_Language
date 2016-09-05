/*************************************************************************
    > File Name: test1_20.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月05日 星期一 16时40分34秒
 ************************************************************************/

#include<stdio.h>
#define N 8
int main(void){
	int c, i, j;
	i = 0;
	while((c=getchar()) != EOF){
		if(c != '\t'){
			putchar(c);
			i++;
		}else{
			if(i%N==0){
				for(j=0;j<8;j++){
					putchar(' ');
					i++;
				}
			}else{
				j = i;
				while(j%N!=0){
					putchar(' ');
					i++;
					j++;
				}
			}
		}
	}
	printf("\n");
	return 0;
}
