#include<stdio.h>
#define hu(x,y) c=x;x=y;y=c;
main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	hu(a,b);
	printf("%d %d\n",a,b);
}
