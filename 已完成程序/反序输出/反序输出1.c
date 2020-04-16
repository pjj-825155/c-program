#include<stdio.h>
main()
{
	int i,a[100];
	i=0;
	while((a[i]=getchar())!=EOF)
	{
		i++;
	}
	while(i>0)
	{
		if(a[i]>=0 && a[i]<=9)
		printf("%d",a[i]);
		else
		printf("%c",a[i]);
		i--;
	}
}
