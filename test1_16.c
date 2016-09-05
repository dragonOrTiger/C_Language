/*************************************************************************
    > File Name: test1_16.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月05日 星期一 11时36分56秒
 ************************************************************************/

#include<stdio.h>
#define MAXLINE 20
int getline2(char line[], int maxline);
void copy(char to[], char from[]);
int main(void){
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max =0;
	while((len=getline2(line,MAXLINE)) >0)
		if(len > max){
			max = len;
			copy(longest, line);
		}
	if(max > 0){
		printf("%d\n",max);
		printf("%s\n",longest);
	}
	return 0;
}
int getline2(char s[], int lim){
	int c, i, j;
	j = 0;
	for(i=0; (c=getchar())!=EOF && c!='\n'; ++i){
		if(i < lim -2){
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
void copy(char to[], char from[]){
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0'){
		++i;
	}
}
