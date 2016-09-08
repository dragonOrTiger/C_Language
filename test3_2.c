/*************************************************************************
    > File Name: test3_2.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月08日 星期四 09时48分07秒
 ************************************************************************/

#include<stdio.h>
#define MAX 1000
void escape(char s[], char t[]);
void unescape(char s[], char t[]);
int main(void){
	char s[MAX];
	char u[MAX];
	char t[] = {'H','e','l','l','o','\t','w','o','r','l','d','\n','L','i','l','y','\0'};
	printf("%s\n",t);
	escape(s,t);
	printf("%s\n",s);
	unescape(u,s);
	printf("%s\n",u);
	return 0;
}
void escape(char s[],char t[]){
	int i,j;
	for(i=0,j=0;t[i]!='\0';i++){
		switch(t[i]){
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				break;
			default:
				s[j++] = t[i];
				break;
		}
	}
	s[j] = '\0';
}
void unescape(char s[], char t[]){
	int i, j;
	for(i=0,j=0;t[i]!='\0';i++){
		if(t[i]=='\\'){
			i++;
			switch(t[i]){
				case 'n':
					s[j++] = '\n';
					break;
				case 't':
					s[j++] = '\t';
					break;
				default:
					s[j++] = '\\';
					s[j++] = t[i];
			}
		}else{
			s[j++] = t[i];
		}
	}
	s[j] = '\0';
}
