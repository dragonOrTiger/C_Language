/*************************************************************************
    > File Name: test5_10.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-19 22:12:52
 ************************************************************************/

#include<stdio.h>
#define STACK_SIZE 1000
void push(int num);
int pop(void);
static int stack_zone[STACK_SIZE];
static int stack_top = 0;
int main(void){
	push(3);
	printf("%d\n",pop());
	pop();
}
void push(int num){
	if(stack_top < STACK_SIZE){
		stack_zone[stack_top++] = num;
	}else{
		printf("stack_zone is full\n");
	}
}
int pop(void){
	if(stack_top > 0){
		return stack_zone[--stack_top];
	}else{
		printf("stack_zone is empty!\n");
		return 0;
	}
}

