/*************************************************************************
    > File Name: test_static1.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016年09月01日 星期四 18时09分54秒
 ************************************************************************/

#include<stdio.h>
/*void foo(){

}
*/
static void bar(){

}
//int i = 3;
int j = 4;
int k;
static int l = 5;
int main(void){
	//printf("%d \n",i);
	printf("%d \n",j);
	printf("%d \n",k);
	printf("%d \n",l);
	return 0;
}
