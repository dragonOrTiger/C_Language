/*************************************************************************
    > File Name: test4_3.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-12 11:14:02
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define NUMBER '0'
#define MAXVAL 100
#define MAXOP 100
int getop(char []);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);
int buf = '\0';
double val[MAXVAL];
int sp = 0;
int main(void){
	int type;
	double op2;
	char s[MAXOP];
	while((type=getop(s)) != EOF){
		switch(type){
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop()+pop());
				break;
			case '-':
				op2 = pop();
				push(pop()-op2);
				break;
			case '*':
				push(pop()*pop());
				break;
			case '/':
				op2 = pop();
				if(op2 == 0.0)
					printf("error: zero divisor\n");
				else
					push(pop()/op2);
				break;
			case '%':
				op2 = pop();
				if(op2 == 0.0)
					printf("error: zero divisor\n");
				else
					push(fmod(pop(),op2));
				break;
			case '\n':
				printf("%.8f\n",pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
	}
	return 0;
}
int getop(char s[]){
	int i, c;
	while((s[0]=c=getch())==' ' || c=='\t')
		;
	s[1] = '\0';
	if(!isdigit(c) && c!='.' && c!='-')
		return c;
	if(c == '-'){
		if(isdigit(c=getch())){
			s[++i] = c;
		}
		else{
			if(c != EOF)
				ungetch(c);
			return '-';
		}
	}
	i = 0;
	if(isdigit(c))
		while(isdigit(s[++i]=c=getch()))
			;
	if(c == '.')
		while(isdigit(s[++i]=c=getch()))
			;
	s[i] = '\0';
	if(c != EOF)
		ungetch(c);
	return NUMBER;
}
int getch(void){
	int temp;
	if(buf != '\0'){
		temp = buf;
		buf = '\0';
		return temp;
	}else{
		return getchar();
	}
}
void ungetch(int c){
	if(buf != '\0')
		printf("buf not empty");
	else
		buf = c;
}
void push(double f){
	if(sp<MAXVAL)
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
