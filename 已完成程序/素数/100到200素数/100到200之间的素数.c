#include<stdio.h>
main()
{
	int i;
	i=100;
	while(i<=200)
	{
		int j;
		j=2;
		while(j<=i)
		{
			if(i%j==0)
			{
				break;
			}
			j++;
		}
		if(i==j)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
