/*************************************************************************
    > File Name: test5_3.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-16 23:23:29
 ************************************************************************/

#include<stdio.h>
void strcat1(char *,char *);
int main(void){
	char base[] = "Hello ";
	char append[] = "world!";
	strcat1(base,append);
	printf("%s\n",base);
	return 0;
}
void strcat1(char *s, char *t){
	while(*s)
		s++;
	while(*s++ = *t++)
		;
}
