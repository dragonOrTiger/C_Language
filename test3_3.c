/*************************************************************************
    > File Name: test3_3.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-08 20:49:53
 ************************************************************************/

#include<stdio.h>
#define MAX 100
void expand(char src[], char des[]);
int main(void){
	char src[] = {'-','a','-','z','A','-','f','2','-','3','-'};
	char des[MAX];
	expand(src,des);
	printf("%s\n",des);
	return 0;
}
void expand(char src[], char des[]){
	int i, j, k;
	for(i=0,j=0; src[i]!='\0'; i++){
		if(src[i]=='-' && i-1>=0 && src[i+1]!='\0' && src[i-1]<src[i+1]){
			if(src[i-1]>='A'&&src[i+1]<='Z' || src[i-1]>='0'&& src[i+1]<='9' || src[i-1]>='a'&&src[i+1]<='z'){
				for(k=src[i-1]+1;k<src[i+1];k++){
					des[j++] = k;
				}
			}
		}else{
			des[j++] = src[i];
		}
	}
	des[j] = '\0';

}
