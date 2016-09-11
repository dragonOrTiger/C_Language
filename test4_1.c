/*************************************************************************
    > File Name: test4_1.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-10 23:01:34
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int strindex(char s[], char t[]);
int main(){
	char s[] = "hello,world!";
	char t[] = "rl";
	printf("%lu\n",strlen(s));
	printf("%lu\n",strlen(t));
	printf("%d\n",strindex(s,t));
	return 0;
}
int strindex(char s[], char t[]){
	int i, j, k;
	for(i=strlen(s)-1;i>=strlen(t)-1;i--){
		for(j=i,k=strlen(t-1);s[j]==t[k] && k>=0;j--,k--){
		}
		if(k==-1){
			return j+1;
		}
	}
	return -1;
}
