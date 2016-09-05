/*************************************************************************
    > File Name: test1_19.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月05日 星期一 14时39分55秒
 ************************************************************************/

#include<stdio.h>
#define MAXLINE 1000
int getline2(char line[], int maxline);
void reverse(char line[], int len);
void swap(char line[], int start, int end);
int main(void){
	int len;
	char line[MAXLINE];
	while((len=getline2(line,MAXLINE)) > 0){
		reverse(line,len);
		printf("%s",line);
	}
	return 0;
}
int getline2(char line[], int maxline){
	int c, i;
	for(i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; i++)
		line[i] = c;
	if(c == '\n'){
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}
void reverse(char line[], int len){
	int i, j;
	for(i=0,j=len-2;i<j;i++,j--){
		swap(line,i,j);
	}
}
void swap(char line[],int i,int j){
	int temp;
	temp = line[i];
	line[i] = line[j];
	line[j] = temp;
}
