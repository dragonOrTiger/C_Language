/*************************************************************************
    > File Name: alloc_afree.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-19 11:26:02
 ************************************************************************/
#define ALLOCSIZE 5000000
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;
char *alloc(int n){
	if(allocbuf+ALLOCSIZE-allocp>=n){
		allocp += n;
		return allocp - n;
	}else{
		return 0;
	}
}
void afree(char *p){
	if(p>=allocbuf && p<=allocbuf+ALLOCSIZE){
		allocp = p;
	}
}
