/*************************************************************************
    > File Name: test1_17.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月05日 星期一 13时24分57秒
 ************************************************************************/

#include<stdio.h>
#define MAXLINE 1000
int getline2(char s[], int lim);
int main(void){
	char line[MAXLINE];
	int len;
	while((len=getline2(line,MAXLINE)) > 0){
		if(len > 20){
			printf("%s\n",line);
		}
	}
	return 0;
}
int getline2(char s[], int lim){
	int c,i,j;
	j = 0;
	for(i=0; (c=getchar())!=EOF && c!='\n'; ++i){
		if(i < lim-2){
			s[j] = c;
			++j;
		}
	}
	if(c == '\n'){
		s[j] = c;
		++j;
		++i;
	}
	s[j] = '\0';
	return i;
}
