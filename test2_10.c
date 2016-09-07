/*************************************************************************
    > File Name: test2_10.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月07日 星期三 18时18分52秒
 ************************************************************************/

#include<stdio.h>
int lower(int c);
int main(void){
	char s[] = {'H','e','l','l','o',',','W','o','r','l','d'};
	int i = 0;
	for(i=0;s[i]!='\0';i++){
		s[i] = lower(s[i]);
	}
	printf("%s\n",s);
	return 0;
}
int lower(int c){
	return (c>='A' && c<='Z')?c-'A'+'a':c;
}
