/*************************************************************************
    > File Name: get_put_char.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月03日 星期六 18时16分29秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	int c;
	c = getchar();
	putchar(c);
	c = getchar();
	putchar(c);
	c = getchar();
	putchar(c);
	printf("\n");
	return 0;
}
