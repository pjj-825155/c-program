#include<stdio.h>
#define LEAP_YEAR(y) (y%400==0)||((y%4==0)&&(y%100!=0))?'L':'N'
main()
{
	int y;
	char x;
	scanf("%d",&y);
	printf("%c\n",LEAP_YEAR(y));
}
