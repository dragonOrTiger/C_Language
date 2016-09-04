/*************************************************************************
    > File Name: power_func.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月04日 星期日 21时50分50秒
 ************************************************************************/

#include<stdio.h>
int power(int m, int n);
int main(void){
	int i;
	for(i=0; i<10; i++){
		printf("%d  %d  %d\n", i, power(2,i), power(-3,i));
	}
	return 0;
}
int power(int m, int n){
	int result=1;
	int i;
	if(n != 0){
		for(i=1; i<=n; i++){
			result = result * m;
		}
	}
	return result;
}
