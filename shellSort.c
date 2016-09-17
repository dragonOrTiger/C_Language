/*************************************************************************
    > File Name: shellSort.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-17 21:27:57
 ************************************************************************/

#include<stdio.h>
void shell_sort(int v[],int len);
int main(void){
	int i;
	int arr[] = {0,9,8,7,6,5,4,3,2,1};
	shell_sort(arr,10);
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}
void shell_sort(int v[],int len){
	int gap,i,j,temp;
	for(gap=len/2;gap>0;gap/=2){
		for(i=gap;i<len;i++){
			for(j=i-gap;j>=0 && v[j]>v[j+gap];j-=gap){
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
		}
	}
}
