/*************************************************************************
    > File Name: eof.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月03日 星期六 18时36分22秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	printf("%d\n",getchar()==EOF);
	printf("%d\n",getchar()!=EOF);
	return 0;
}
