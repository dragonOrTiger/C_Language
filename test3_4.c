/*************************************************************************
    > File Name: test3_4.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-08 22:48:00
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
#define MAX 12
void itoa(int n, char s[]);
int main(void){
	int n = -2147483647;
	char s[MAX];
	itoa(n,s);
	printf("%s\n",s);
	return 0;
}
void itoa(int n, char s[]){
	int i, sign;
	i = 0;
	if(n == INT_MIN){
		sign = n;
		n = -n-1;
		s[i++] = n % 10 + '0' + 1;
		do{
			s[i++] = n % 10 + '0';
		}while((n/=10)>0);
	}
	else{
			if((sign=n)<0){
				n = -n;
			}
			do{
				s[i++] = n % 10 + '0';
			}while((n/=10)>0);
	}
	if(sign < 0){
		s[i++] = '-';
	}
	s[i] = '\0';
}
