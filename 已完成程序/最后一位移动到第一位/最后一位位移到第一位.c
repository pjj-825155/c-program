#include<stdio.h>
main()
{
	unsigned long int num;
	int a[10000],i;
	scanf("%d",&num);
	i=0;
	while(num !=0)
	{
		a[i]=num%10;
		num=num/10;
		i++;
	}
	if(a[0] ==0)
	{
		i--;
		while(i>0)
		{
			printf("%d",a[i]);
			i--;
		}
	}
	else
	{
		printf("%d",a[0]);
		i--;
		while(i>0)
		{
			printf("%d",a[i]);
			i--;
		}
	}
	printf("\n");
}
