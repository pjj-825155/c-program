#include<stdio.h>
main()
{
	int num,i,n,sum,k;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		sum=0;
		scanf("%d",&n);
		if(n>0)
		{
			for(k=n;k<=2*n;k++)
			{
				sum=sum+k;
			}
			printf("%d\n",sum);
		}
		else
		{
			for(k=2*n;k<=n;k++)
			{
				sum=sum+k;
			}
			printf("%d\n",sum);
		}
	}
}
