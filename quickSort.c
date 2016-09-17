/*************************************************************************
    > File Name: quickSort.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-14 23:37:02
 ************************************************************************/
#include <stdio.h>
void quick_sort(int v[], int left, int right){
	extern void print_array(int []);
	int temp, i, j;
	if(left>=right){
		return;
	}
	i = left;
	j = right;
	temp = v[left];
	while(i<j){
		while(i<j && v[j]>=temp)
			j--;
		if(i<j){
			v[i] = v[j];
			i++;
			print_array(v);
		}
		while(i<j && v[i]<=temp)
			i++;
		if(i<j){
			v[j] = v[i];
			j--;
			print_array(v);
		}
	}
	v[j] = temp;
	print_array(v);
	printf("==========================================================================\n");
	quick_sort(v, left, i-1);
	quick_sort(v, i+1, right);
}
