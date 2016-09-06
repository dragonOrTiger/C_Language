/*************************************************************************
    > File Name: test2_5.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月06日 星期二 22时39分07秒
 ************************************************************************/

#include<stdio.h>
int any(char src[], char des[]);
int main(void){
	char src[] = {'H','e','l','l','o',',','w','o','r','l','d','!'};
	char des[] = {'w','o','r','d'};
	printf("%d\n",any(src,des));
	return 0;
}
int any(char src[], char des[]){
	int pos,i,j;
	pos = 0;
	for(i=0; src[i]!='\0'; i++){
		for(j=0;des[j]!='\0';j++){
			if(src[i] == des[j]){
				pos = i;
				break;
			}
		}
		if(des[j]!='\0')
			break;
	}
	if(src[i] == '\0')
		pos = -1;
	return pos;
}
