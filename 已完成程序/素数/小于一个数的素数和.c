#include<stdio.h>
main()
{
	int i,sum,n;
	while(scanf("%d",&n) !=EOF)
	{
		i=2;
		sum=0;
		while(i<=n)
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
				sum=sum+i;
			}
			i++;
		}
		printf("%d\n",sum);
	}
}
