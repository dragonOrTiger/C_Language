/*************************************************************************
    > File Name: int2str.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-15 18:00:52
 ************************************************************************/

#include<stdio.h>
#define MAXSIZE 100
int i = 0;
void itoa(char s[], int v);
int main(void){
	int a = -12345;
	char s[MAXSIZE];
	itoa(s,a);
	s[i] = '\0';
	printf("%s\n",s);
	return 0;
}
void itoa(char s[], int v){
	if(v==0){
		return;
	}
	if(v<0){
		s[i++] = '-';
		v = -v;
	}
	itoa(s, v/10);
	s[i++] = v%10+'0';
}
