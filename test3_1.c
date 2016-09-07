/*************************************************************************
    > File Name: test3_1.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月07日 星期三 23时02分51秒
 ************************************************************************/

#include<stdio.h>
int binsearch2(int x, int v[], int n);
int main(void){
	int v[] = {1,4,6,8,11,15,34,56,78,86,99};
	int x = 55;
	int n = 11;
	printf("%d\n",binsearch2(x,v,n));
	return 0;
}
int binsearch2(int x, int v[], int n){
	int low, high, mid;
	low = 0;
	high = n-1;
	mid = (low+high)/2;
	while(low<=high && v[mid]!=x){
		if(x<v[mid])
			high = mid - 1;
		else 
			low = mid + 1;
		mid = (low+high)/2;
	}
	if(v[mid]==x){
		return mid;
	}
	return -1;
}
