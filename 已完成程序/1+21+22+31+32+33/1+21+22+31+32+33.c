#include<stdio.h>
main()
{
	int num,i,sum;
	while(scanf("%d",&num)!=EOF)
	{
		if(num==1)
		printf("1\n");
		else
		{
			sum=1;
			for(i=2;i<=num;i++)
			{
				sum=sum+he(i);
			}
			printf("%d\n",sum);
		}
	}
}

int he(int i)
{
	int sum1,sum2,k;
	sum2=0;
	sum1=i*i*10;
	for(k=1;k<=i;k++)
	{
		sum2=sum2+k;
	}
	return sum1+sum2;
}
