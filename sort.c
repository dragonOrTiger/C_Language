/*************************************************************************
    > File Name: sort.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-15 00:04:15
 ************************************************************************/

#include<stdio.h>
#define get_len(array) sizeof(array)/sizeof(array[0])
int main(void){
	extern void quick_sort(int [],int,int);
	extern void print_array(int []);
	extern void shell_sort(int [],int)
	int v[] = {72,6,57,88,60,42,83,73,48,85};
	int len = (int)get_len(v);
	print_array(v);
	printf("**************************************************************************\n");
	shell_sort(v,len);
//	quick_sort(v,0,len-1);
	printf("**************************************************************************\n");
	print_array(v);
	return 0;
}
