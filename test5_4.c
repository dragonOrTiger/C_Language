/*************************************************************************
    > File Name: test5_4.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-17 00:00:04
 ************************************************************************/

#include<stdio.h>
int strend2(char *s, char *t);
int main(void){
	char s[] = "Hello world!";
	char t[] = "world!";
	printf("%d\n",strend2(s,t));
	return 0;
}
int strend2(char *s, char *t){
	int i = 0, j = 0;
	while(*s++)
		j++;
	while(*t++){
		i++;
	}
	if(j>=i){
		while(i>=0 && *s-- == *t--)
			i--;
		return (i<0)?1:0;
	}else{
		return 0;
	}
}
