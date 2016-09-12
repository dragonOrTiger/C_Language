/*************************************************************************
    > File Name: test4_3.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-12 11:14:02
 ************************************************************************/

#include<stdio.h>
#define MAXST 100
void push(double);
double pop(void);
void printtop(void);
void swaptop2(void);
void copytop(void);
void clearst(void);
double val[MAXST];
int sp = 0;
int main(void){
	push(1);
	push(2);
	push('-');
	push(4);
	push(5);
	push('+');
	push('*');
	printtop();
	swaptop2();
	printtop();
	copytop();

	return 0;
}
void push(double f){
	if(sp<MAXST)
		val[sp++] = f;
	else
		printf("error: stack full, can\'t push\n");
}
double pop(void){
	if(sp>=0)
		return val[--sp];
	else{
		printf("error: stack empty, can\'t pop\n");
		return 0.0;
	}
}
void printtop(void){
	double temp = pop();
	printf("%f\n", temp);
	push(temp);
}
void swaptop2(void){
	double a, b;
	a = pop();
	b = pop();
	push(a);
	push(b);
}
void copytop(void){
	double temp = pop();
	push(temp);
	push(temp);
}
void clearst(void){
	sp = 0;
}
