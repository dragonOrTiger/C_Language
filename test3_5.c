/*************************************************************************
    > File Name: test3_5.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-09 16:13:05
 ************************************************************************/


#include<stdio.h>
#include<limits.h>
#include<string.h>
#define MAX 12
void itob(int n, char s[], int b);
void reverse(char s[]);
int main(void){
	int n = 2147483647;
	int b = 16;
	char s[MAX];
	itob(n,s,b);
	reverse(s);
	printf("%s\n",s);
	return 0;
}
void itob(int n ,char s[], int b){
	int i, sign;
	i = 0;
	if((sign=n)<0){
		n = -n;
	}
	do{
		s[i++] = (n%b<9) ? (n%b+'0') : (n%b-10+'A');
	}while((n/=b)>0);
	if(sign < 0){
		s[i++] = '-';
	}
	s[i] = '\0';
}
void reverse(char s[]){
	int i,j,temp;
	for(i=0,j=strlen(s)-1;i<j;i++,j--){
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
