/*************************************************************************
    > File Name: test4_3.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-12 11:14:02
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define BUFSIZE 100
void ungetch(int);
void ungets(char []);
char buf[BUFSIZE];
int bufp = 0;
int sp = 0;
int main(void){
	char s[] = "Hello world!";
	ungets(s);
	printf("%s\n",buf);
	return 0;
}
void ungetch(int c){
	if(bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}
void ungets(char s[]){
	int len;
	len = strlen(s);
	while(len>0)
		ungetch(s[--len]);
}
