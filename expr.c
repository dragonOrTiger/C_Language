/*************************************************************************
    > File Name: test5_10.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-19 22:12:52
 ************************************************************************/

#include<stdio.h>
#define STACK_SIZE 1000
#define NUMBER 1
void push(int num);
int pop(void);
static int stack_zone[STACK_SIZE];
static int stack_top = 0;
int main(int argc, char *argv[]){
	int i;
	for(i=1; i<argc; i++){
		printf("%s ", argv[i]);
		switch(argv[i])
	}
	//printf("\n");
	return 0;
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
int getop(char *s){
if 
}

