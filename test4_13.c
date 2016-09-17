/*************************************************************************
    > File Name: reverseString.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-15 17:02:01
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void reverse(char s[], int pos, int len);
int main(void){
	char s[] = "Hello world!";
	reverse(s, 0 ,strlen(s));
	printf("%s\n",s);
	return 0;
}
void reverse(char s[], int pos, int len){
	int c;
	int j = len - (pos+1);
	if(pos>=j)
		return;
	c = s[j];
	s[j] = s[pos];
	s[pos] = c;
	reverse(s, pos+1, len);
}
