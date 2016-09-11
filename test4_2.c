/*************************************************************************
    > File Name: test4_2.c
    > Author: shiyongjie
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-11 17:45:58
 ************************************************************************/

#include<stdio.h>
double atof(char s[]);
int main(void){
	char s[] = "-123.45e-6";
	printf("%.8f\n",atof(s));
	return 0;
}
double atof(char s[]){
	int i, j, sign, flag, exp;
	double val, power, chu;
	for(i=0; s[i]==' '; i++)
		;
	sign = (s[i]=='-')?(-1):1;
	if(s[i]=='+' || s[i]=='-')
		i++;
	for(val=0.0; s[i]>='0' && s[i]<='9'; i++){
		val = val * 10.0 + (s[i] - '0');
	}
	if(s[i]=='.')
		i++;
	for(power=1.0; s[i]>='0' && s[i]<='9'; i++){
		val = val * 10.0 + (s[i] - '0');
		power = 10 * power;
	}
	if(s[i]=='e' || s[i]=='E')
		i++;
	flag = (s[i]=='-')?-1:1;
	if(s[i]=='+' || s[i]=='-')
		i++;
	for(exp=0; s[i]>='0' && s[i]<='9'; i++)
		exp = exp * 10 + (s[i] - '0');
	for(j=0,chu=1.0; j<exp; j++)
		chu = chu * 10.0;
	if(flag == -1){
		return sign * val / power / chu;
	}else{
		return sign * val / power * chu;
	}
}
