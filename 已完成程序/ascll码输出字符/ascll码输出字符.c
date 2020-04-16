#include<stdio.h>
main()
{
	int t,i;
	int a[10000];
	scanf("%d",&t);
	i=0; 
	while(i<t)
	{
		scanf("%d",&a[i]);
		i++;
	}
	i=0;
	while(i<t)
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n");
} 
