#include<stdio.h>
#define Y(a,b) a%b
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",Y(a,b));
}
