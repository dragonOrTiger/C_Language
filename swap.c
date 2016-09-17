/*************************************************************************
    > File Name: swap.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-15 15:33:28
 ************************************************************************/

#include<stdio.h>
void swap_temp(int, int);
void swap_temp_pointer(int *a, int *b);
void swap_arithmetic(int *a, int *b);
void swap_xor(int *a, int *b);
int main(void){
	int a = 3;
	int b = 5;
	swap_xor(&a, &b);
	printf("a = %d\t", a);
	printf("b = %d\n", b);
	return 0;
}
void swap_temp(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}
void swap_temp_pointer(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap_arithmetic(int *a, int *b){
	*a = *b - *a;
	*b = *b - *a;
	*a = *b + *a;
}
void swap_xor(int *a, int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
