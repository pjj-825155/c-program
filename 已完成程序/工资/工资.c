#include<stdio.h>
main()
{
	int h,m;
	scanf("%d",&h);
	m=h*10;
	if(h>160)
	m=1600+(h-160)*30;
	printf("%d",m);
}
