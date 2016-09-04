/*************************************************************************
    > File Name: char_count2.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月03日 星期六 21时36分21秒
 ************************************************************************/

#include<stdio.h>
int main(void){
	double nc;
	for(nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n",nc);
	return 0;
}
