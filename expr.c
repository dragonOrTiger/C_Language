/*************************************************************************
    > File Name: test5_10.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-19 22:12:52
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#define STACK_SIZE 1000
#define NUMBER 1
void push(float num);
float pop(void);
int getop(char *);
static float stack_zone[STACK_SIZE];
static int stack_top = 0;
int main(int argc, char *argv[]){
	int i, type;
	float temp;
	for(i=1; i<argc; i++){
		type = getop(argv[i]);
		switch(type){
			case '+':
				push(pop()+pop());
				break;
			case '-':
				temp = pop();
				push(pop()-temp);
				break;
			case '*':
				push(pop()*pop());
				break;
			case '/':
				temp = pop();
				if(temp==0)
					printf("error:be divided by zero");
				else
					push(pop()/temp);
				break;
			case '%':
				temp = pop();
				push(fmod(pop(),temp));
				break;
			case NUMBER:
				push(atof(argv[i]));
				break;
		}
	}
	printf("result: %f\n",pop());
	return 0;
}
void push(float num){
	if(stack_top < STACK_SIZE){
		stack_zone[stack_top++] = num;
	}else{
		printf("stack_zone is full\n");
	}
}
float pop(void){
	if(stack_top > 0){
		return stack_zone[--stack_top];
	}else{
		printf("stack_zone is empty!\n");
		return 0;
	}
}
int getop(char *s){
	if(isdigit(*s)){
		return NUMBER;
	}else{
		return *s;
	}
}

