/*************************************************************************
    > File Name: line_count.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月03日 星期六 21时45分21秒
 ************************************************************************/

#include<stdio.h>
int main(void){
	int c,nl;
	nl = 0;
	while((c = getchar()) != EOF){
		if(c == '\n')
			++nl;
	}
	printf("%d\n",nl);
	return 0;
}
