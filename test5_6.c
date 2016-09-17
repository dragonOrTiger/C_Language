/*************************************************************************
    > File Name: test5_6.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-17 20:27:39
 ************************************************************************/

#include<stdio.h>
void reverse2(char *s);
int main(void){
	char s[] = "hello world!";
	reverse2(s);
	printf("%s\n",s);
	return 0;
}
void reverse2(char *s){
	int i,j;
	i = 0;
	char *t = s;
	char temp;
	while(*t){
		t++;
		i++;
	}
	i--;
	j = 0;
	while(j<i){
		temp = *(s+i);
		*(s+i) = *(s+j);
		*(s+j) = temp;
		j++;
		i--;
	}
}
