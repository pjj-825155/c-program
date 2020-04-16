#include<stdio.h>
main()
{
	int i;
	unsigned long int m;
	i=0;
	while((m=getchar()) !=EOF)
	{
		i++;
	}
	printf("%d\n",i); 
}
