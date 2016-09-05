/*************************************************************************
    > File Name: test1_18.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月05日 星期一 14时01分33秒
 ************************************************************************/

#include<stdio.h>
#define MAXLINE 1000
int getline2(char s[], int lim);
int delSpace(char s[]);
int main(void){
	int len;
	char line[MAXLINE];
	int afterlen;
	while((len=getline2(line,MAXLINE)) >0){
		afterlen = delSpace(line);
		if(afterlen > 0){
			printf("%s",line);
		}
	}
	return 0;
}
int getline2(char s[], int lim){
	int c;
	int i;
	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n';i++){
		s[i] = c;
	}
	if(c == '\n'){
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}
int delSpace(char s[]){
	int i = 0;
	while(s[i] != '\n'){
		i++;
	}
	i--;
	while(i>=0 && (s[i]==' ' || s[i]=='\t'))
		i--;
	if(i>=0){
		i++;
		s[i] = '\n';
		i++;
		s[i] = '\0';
	}
	return i;
}
