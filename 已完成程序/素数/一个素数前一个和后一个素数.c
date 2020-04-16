#include<stdio.h>
main()
{
	int i,num;
	while(scanf("%d",&num)!=EOF)
	{
		for(i=num-1;i>=2;i--)
		{
			if(prime(i)!=0)
			{
				printf("%d",i);
				break;
			}
		}
		printf("<%d<",num);
		for(i=num+1;1;i++)
		{
			if(prime(i)!=0)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
}
int prime(int m)
{
	int i,flag;
	flag=1;
	i=2;
	while(i<m)
	{
		if(m%i==0)
		{
			flag=0;
			return 0;
		}
		i++;
	}
	return m; 	
}
