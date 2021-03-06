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
#define MAXLINE 100
int getop(char [], char []);
void push(double);
double pop(void);
double val[MAXVAL];
int getline2(char [], int);
int sp = 0;
int li = 0;
int main(void){
	int type;
	double op2;
	char s[MAXOP];
	char line[MAXLINE];
	getline2(line,MAXLINE);
	//printf("%s\n",line);
	while((type=getop(s,line)) != EOF){
		//printf("%d\n",type);
		//printf("%s\n",s);
		switch(type){
			case NUMBER:
				//printf("%f\n",atof(s));
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
int getline2(char line[], int limit){
	int i, c;
	for(i=0; i<limit && (c=getchar())!=EOF && c!='\n';++i){
		line[i] = c;
	}
	if(c=='\n'){
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}
int getop(char s[], char line[]){
	int j=0, c, len;
	if(line[li]=='\0')
		if((len=getline2(line,MAXLINE))==0)
			return EOF;
		else
			li = 0;
	while((s[0]=c=line[li++])==' ' || c=='\t')
		;
	s[1] = '\0';
	j = 0;
	if(!isdigit(c) && c!='.')
		return c;
	if(isdigit(c))
		while(isdigit(s[++j]=c=line[li++]))
			;
	if(c == '.')
		while(isdigit(s[++j]=c=line[li++]))
			;
	s[j] = '\0';
	--li;
	return NUMBER;
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
