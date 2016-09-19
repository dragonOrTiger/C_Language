/*************************************************************************
    > File Name: test5_7.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-18 21:54:22
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAXLEN 1000
#define MAXLINES 5000
#define ALLOCSIZE 10000
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;
int getline2(char line[], int maxlen);
int readlines(char *lineptr[], int maxlines);
void writelines(char *lineptr[], int nlines);
void qsort2(char *lineptr[], int left, int right);
char *alloc(int n);
int main(void){
	char *lineptr[MAXLINES];
	int nlines;
	if((nlines=readlines(lineptr,MAXLINES))>0){
		qsort2(lineptr,0,nlines-1);
		writelines(lineptr,nlines);
		return 0;
	}else{
		printf("error: input too big\n");
		return 1;
	}
}
int getline2(char line[], int maxlen){
	int c, i;
	for(i=0; i<maxlen && (c=getchar())!=EOF && c!='\n';++i){
		line[i] = c;
	}
	if(c == '\n'){
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	//printf("%d\n",i);
	return i;
}
int readlines(char *lineptr[], int maxlines){
	int nlines, len;
	char line[MAXLEN];
	char *p;
	while((len=getline2(line,MAXLEN))>0){
		if(nlines>=maxlines || (p=alloc(len))==NULL){
			return -1;
		}else{
			line[len-1] = '\0';
			//printf("%s",line);
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	}
	return nlines;
}
void writelines(char *lineptr[], int nlines){
	while(nlines-->0){
		printf("%s\n",*lineptr++);
	}
}
void qsort2(char *lineptr[], int left, int right){
	if(left>=right){
		return;
	}
	char *temp = lineptr[left];
	int i = left;
	int j = right;
	while(i<j){
		while(i<j && strcmp(lineptr[j],temp)>=0){
			j--;
		}
		if(i<j){
			lineptr[i] = lineptr[j];
			i++;
		}
		while(i<j && strcmp(lineptr[i],temp)<=0){
			i++;
		}
		if(i<j){
			lineptr[j] = lineptr[i];
			j--;
		}
	}
	lineptr[j] = temp;
	qsort2(lineptr, left, i-1);
	qsort2(lineptr, i+1, right);
}
char *alloc(int n){
	if(allocbuf+ALLOCSIZE-allocp>=n){
			allocp += n;
			return allocp - n;
	}else{

			return 0;
		}
}
