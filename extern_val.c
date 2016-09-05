/*************************************************************************
    > File Name: extern_val.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月05日 星期一 16时13分35秒
 ************************************************************************/

#include<stdio.h>
#define MAXLINE 1000
char line[MAXLINE];
char longest[MAXLINE];
int max;
int getline2(void);
void copy(void);
int main(void){
	int len;
	extern int max;
	extern char longest[MAXLINE];
	max =0;
	while((len=getline2()) >0)
		if(len > max){
			max = len;
			copy();
		}
	if(max > 0){
		printf("%s\n",longest);
	}
	return 0;
}
int getline2(void){
	extern char line[MAXLINE];
	int c, i;
	for(i=0; i<MAXLINE-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		line[i] = c;
	if(c == '\n'){
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}
void copy(void){
	extern char line[MAXLINE];
	extern char longest[MAXLINE];
	int i;
	i = 0;
	while((longest[i] = line[i]) != '\0'){
		++i;
	}
}
