/*************************************************************************
    > File Name: test2_4.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月06日 星期二 21时43分46秒
 ************************************************************************/

#include<stdio.h>
void squeeze2(char s1[], char s[2]);
int main(void){
	char s1[] = {'H','e','l','l','o',',','w','o','r','l','d','!'};
	char s2[] = {'w','o','r','d'};
	squeeze2(s1,s2);
	return 0;
}
void squeeze2(char s1[], char s2[]){
	int i,j,k;
	k = 0;
	for(i=0; s1[i]!='\0'; i++){
		for(j=0;s2[j]!='\0';j++){
			if(s1[i] == s2[j])
				break;
		}
		if(s2[j]=='\0'){
			s1[k++] = s1[i];
		}
	}
	s1[k] = '\0';
	printf("%s\n",s1);
}
