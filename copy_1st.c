/*************************************************************************
    > File Name: copy_1st.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月02日 星期五 15时04分29秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	int a, b, c, d;
	a = getchar();
	putchar(a);
	printf("\n");
	b = getchar();
	putchar(b);
	printf("\n");
	c = getchar();
	putchar(c);
	printf("\n");
	d = getchar();
	putchar(d);
	printf("\n");
	printf("%c\t%c\t%c\t%c\n", a, b, c, d);
}
