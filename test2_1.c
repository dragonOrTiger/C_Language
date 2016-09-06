/*************************************************************************
    > File Name: test2_1.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月06日 星期二 11时19分30秒
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
#include<math.h>
int main(void){
	printf("signed char的取值范围： ");
	printf("%d-->%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char的取值范围： ");
	printf("%d-->%u\n", 0, UCHAR_MAX);
	printf("signed short的取值范围： ");
	printf("%d-->%d\n",SHRT_MIN,SHRT_MAX);
	printf("unsigned short的取值范围： ");
	printf("%d-->%u\n",0,USHRT_MAX);
	printf("signed int的取值范围： ");
	printf("%d-->%d\n", INT_MIN, INT_MAX);
	printf("unsigned int的取值范围： ");
	printf("%d-->%u\n", 0, UINT_MAX);
	printf("signed long的取值范围： ");
	printf("%ld-->%ld\n",LONG_MIN,LONG_MAX);
	printf("unsigned long的取值范围： ");
	printf("%d-->%lu\n",0,ULONG_MAX);
	printf("***********************************************************\n");
	printf("signed char的取值范围： ");
	printf("%.0f-->%.0f\n",-pow(2,8*sizeof(char)-1),pow(2,8*sizeof(char)-1)-1);
	printf("unsigned char的取值范围： ");
	printf("%d-->%.0f\n",0,pow(2,8*sizeof(char))-1);
	printf("signed short的取值范围： ");
	printf("%.0f-->%.0f\n",-pow(2,8*sizeof(short)-1),pow(2,8*sizeof(short)-1)-1);
	printf("unsigned short的取值范围： ");
	printf("%d-->%.0f\n",0,pow(2,8*sizeof(short))-1);
	printf("signed int的取值范围： ");
	printf("%.0f-->%.0f\n",-pow(2,8*sizeof(int)-1),pow(2,8*sizeof(int)-1)-1);
	printf("unsigned int的取值范围： ");
	printf("%d-->%.0f\n",0,pow(2,8*sizeof(int))-1);
	printf("signed long的取值范围： ");
	printf("%.0lf-->%.0lf\n",-pow(2,8*sizeof(long)-1),pow(2,8*sizeof(long)-1)-1);
	printf("unsigned long的取值范围： ");
	printf("%d-->%.0lf\n",0,pow(2,8*sizeof(long))-1);
	return 0;
}
