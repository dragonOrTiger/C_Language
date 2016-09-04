/*************************************************************************
    > File Name: line_count2.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月03日 星期六 22时00分41秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int c, num;
	num = 0;
	while((c = getchar()) != EOF){
		if(c==' ' || c=='\t' || c=='\n')
			num++;
	}
	printf("%d\n",num);
	return 0;
}
