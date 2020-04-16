#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	int x1,x2;
	scanf("%d%d%d",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	if(x1<x2)
	printf("%d %d\n",x2,x1);
	else
	printf("%d %d\n",x1,x2);
}
