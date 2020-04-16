#include<stdio.h>
main()
{
	int a[100],i;
	while(scanf("%d",&a[i]) !=EOF)
	{
		i++;
	}
	i--; 
	while(i>=0)
	{
		printf("%d\n",a[i]);
		i--;
	}
}
