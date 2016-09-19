/*************************************************************************
    > File Name: test5_8.c
    > Author: syj
    > Mail: shiyongjie@neusoft.com 
    > Created Time: 2016-09-19 16:12:55
 ************************************************************************/

#include<stdio.h>
int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pday);
static char daytab[2][13] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};
int main(void){
	printf("%d\n",day_of_year(1996, 2,29));
	int month,day;
	int *pmonth = &month;
	int *pday = &day;
	month_day(1996, 60, pmonth, pday);
	printf("%d-%d-%d\n", 1996, *pmonth, *pday);
	return 0;
}
int day_of_year(int year, int month, int day){
	int leap, i;
	leap = year%4==0 && year%100!=0 || year%400==0;
	if(month > 12)
		return;
	if(day > daytab[leap][month])
		return;
	for(i=1; i<month; i++){
		day += daytab[leap][i];
	}
	return day;
}
void month_day(int year, int yearday, int *pmonth, int *pday){
	int leap, i;
	leap = year%4==0 && year%100!=0 || year%400==0;
	if(yearday>365+leap)
		return;
	for(i=1; yearday>daytab[leap][i]; i++){
		yearday -= daytab[leap][i];
	}
	*pmonth = i;
	*pday = yearday;
}
