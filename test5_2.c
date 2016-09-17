/*************************************************************************
    > File Name: test5_1.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-16 16:13:35
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#define SIZE 10
#define BUFSIZE 100
int getfloat(float *pn);
int getch(void);
void ungetch(int c);
char buf[BUFSIZE];
int bufp = 0;
int main(void){
	int i, r;
	float array[SIZE];
	for(i=0;i<SIZE;i++){
		while((r=getfloat(&array[i]))==0)
			getch();
		if(r==EOF)
			break;
	}
	for(i=0;i<SIZE;i++)
		printf("%f  ",array[i]);
	printf("\n");
	return 0;
}
int getfloat(float *pn){
	int sign, c, power;
	while(isspace(c=getch()))
		;
	if(!isdigit(c) && c!=EOF && c!='+' && c!='-'){
		ungetch(c);
		return 0;
	}
	sign = (c=='-')?-1:1;
	if(c=='+' || c=='-')
		c = getch();
	for(*pn=0;isdigit(c);c=getch())
		*pn = 10  * *pn + c - '0';
	if(c=='.'){
		for(power=1;isdigit(c=getch());){
			*pn = 10 * *pn + c - '0';
			power = power * 10;
		}
		*pn = *pn / power;
	}
	*pn = sign * *pn;
	if(c!=EOF)
		ungetch(c);
	return c;
}
int getch(void){
	return bufp>0?buf[--bufp]:getchar();
}
void ungetch(int c){
	if(bufp<BUFSIZE)
		buf[bufp++] = c;
	else
		printf("buf is full");
}
