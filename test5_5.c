/*************************************************************************
    > File Name: test5_5.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-17 18:41:51
 ************************************************************************/

#include<stdio.h>
void strncpy2(char *s, char *t, int n);
void strncat2(char *s, char *t, int n);
int strncmp2(char *s, char *t, int n);
int main(void){
	char s[] = "words Peace";
	char t[] = "world Wide Web";
	strncpy2(s, t, 5);
	printf("%s\n",s);
	//printf("%d\n",strncmp2(s,t,5));
	return 0;
}
void strncpy2(char *s, char *t, int n){
	while(n-->0 && *s!='\0')
		*s++ = *t++;
}
void strncat2(char *s, char *t, int n){
	while(*s)
		s++;
	while(n-->0 && *t!='\0')
		*s++ = *t++;
	*s = '\0';
}
int strncmp2(char *s, char *t, int n){
	while(n>0 && *s == *t){
		n--;
		s++;
		t++;
	}
	if(n==0)
		return 0;
	else
		return *s-*t;
}
