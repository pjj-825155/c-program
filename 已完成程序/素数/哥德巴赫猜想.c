#include<stdio.h>
main()
{
	int num,i,sum;
	while(scanf("%d",&num)!=EOF)
	{
		sum=0;
		for(i=2;i<(num/2)+1;i++)
		{
			if(prime(i))
			if(prime(num-i))
			sum++;
		}
		printf("%d\n",sum);
	}
}
int prime(int m)
{
	int i;
	i=2;
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		return 0;
	}
	return 1; 
	
}
