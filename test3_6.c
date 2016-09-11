/*************************************************************************
    > File Name: test3_6.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-10 17:14:26
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
#define MAX 11
void itoa(int n, char s[], int width);
void reverse(char s[]);
int main(){
	int n = -2147483648;
	char s[MAX+1];
	itoa(n,s,MAX);
	reverse(s);
	printf("%s\n",s);
	return 0;
}
void itoa(int n, char s[], int max){
	int i, sign;
	i = 0;
	if(n == INT_MIN){
		sign = n;
		n = -(n+1);
		s[i++] = n % 10 + 1 + '0';
		do{
			s[i++] = n % 10 + '0';
		}while(n/=10);
	}else{
		if((sign=n) < 0){
			n = -n;
		}
		do{
			s[i++] = n % 10 + '0';
		}while(n/=10);
	}
	if(sign < 0){
		s[i++] = '-';
	}
	while(i <= max){
		s[i++] = ' ';
	}
	s[i++] = '\0';
}
void reverse(char s[]){
	int i, j, temp;
	for(i=0,j=MAX; i<j; i++,j--){
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
