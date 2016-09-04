/*************************************************************************
    > File Name: test1_14.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月04日 星期日 20时53分31秒
 ************************************************************************/

#include<stdio.h>
int main(void){
	int c, i;
	int digit_array[10], upper_array[26], lower_array[26];
	for(i=0; i<10; i++){
		digit_array[i] = 0;
	}
	for(i=0; i<26; i++){
		upper_array[i] = 0;
	}
	for(i=0; i<26; i++){
		lower_array[i] = 0;
	}
	while((c=getchar()) != EOF){
		if(c>='0' && c<='9'){
			digit_array[c-'0']++;
		}else if(c>='A' && c<='Z'){
			upper_array[c-'A']++;
		}else if(c>='a' && c<='z'){
			lower_array[c-'a']++;
		}
	}
	for(i=0; i<10; i++){
		printf("%d  ",digit_array[i]);
	}
	printf("\n");
	for(i=0; i<10; i++){
		putchar('0'+i);
		putchar(' ');
		putchar(' ');
	}
	printf("\n");
	for(i=0; i<26; i++){
		printf("%d  ",upper_array[i]);
	}
	printf("\n");
	for(i=0; i<26; i++){
		putchar('A'+i);
		putchar(' ');
		putchar(' ');
	}
	printf("\n");
	for(i=0; i<26; i++){
		printf("%d  ",lower_array[i]);
	}
	printf("\n");
	for(i=0; i<26; i++){
		putchar('a'+i);
		putchar(' ');
		putchar(' ');
	}
	printf("\n");
	return 0;
}
