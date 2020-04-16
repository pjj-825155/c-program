#include<stdio.h>
main()
{
	int a;
	int x,y,z,m;
	scanf("%d",&a);
	z=a%10;
	x=a/100;
	m=a%100;
	y=m/10;
	printf("%d,%d,%d\n",x,y,z);
}
