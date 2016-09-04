/*************************************************************************
    > File Name: char_count.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月03日 星期六 20时16分10秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	long nc;
	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%ld\n",nc);
	return 0;
}
