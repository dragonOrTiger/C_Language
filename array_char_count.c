/*************************************************************************
    > File Name: array_char_count.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月04日 星期日 11时33分33秒
 ************************************************************************/

#include<stdio.h>
int main(void){
	int c, i, nwhite, nother;
	int ndigit[10];
	nwhite = nother = 0;
	for(i=0; i<10; i++){
		ndigit[i] = 0;
	}
	while((c=getchar()) != EOF){
		if(c>='0' && c<='9'){
			ndigit[c-'0']++;
		}else if(c == ' ' || c == '\t' || c == '\n'){
			nwhite++;
		}else{
			nother++;
		}
	}
	printf("ndigits =");
	for(i=0; i<10; i++){
		printf(" %d",ndigit[i]);
	}
	printf(", nwhite = %d, nother = %d\n",nwhite,nother);
	return 0;
}
