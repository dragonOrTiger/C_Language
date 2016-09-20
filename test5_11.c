/*************************************************************************
    > File Name: test5_11.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-20 20:58:29
 ************************************************************************/

#include<stdio.h>
#define TAB 8
#define SIZE 1000
int main(void){
	char str[] = "hello\tworld";
	char to[SIZE];
	printf("%s\n",str);
	int i, j;
	i = 0;
	j = 0;
	while(str[i]!='\0'){
		if(str[i] == '\t'){
			for(;j%8!=0;j++){
				to[j] = ' ';
			}
		}else{
			to[j] = str[i];
			j++;
		}
		i++;
	}
	printf("%s\n",to);
	return 0;
}

