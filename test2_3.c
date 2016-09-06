/*************************************************************************
    > File Name: htois.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月06日 星期二 17时40分12秒
 ************************************************************************/

#include<stdio.h>
int htoi(char s[])
int main(void){
	char s[] = {'0','x','a','9'};
	printf("%d\n",htoi(s));
	return 0;
}
int htoi(char s[]){
	int i, num;
	num = 0;
	for(i=2; s[i]>='0'&&s[i]<='9' || s[i]>='A'&&s[i]<='F' || s[i]>='a'&&s[i]<='f'; i++){
		if(s[i]>='0' && s[i]<='9'){
			num = num * 16 + s[i] - '0';
		}else if(s[i]>='A' && s[i]<='F'){
			num = num * 16 + s[i] - 'A' + 10;
		}else{
			num = num * 16 + s[i] - 'a' + 10;
		}
	}
	return num;
}
