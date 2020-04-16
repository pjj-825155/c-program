#include<stdio.h>
main()
{
	int sum1,sum2,num,i;
	while(scanf("%d",&num)!=EOF)
	{
		sum1=0;
		sum2=0;
		if(ji_ou(num))//ÆæÊı 
		{
			for(i=1;i<=num;i=i+2)
			{
				sum1=sum1+jie(i);
			}
			for(i=2;i<num;i=i+2)
			{
				sum2=sum2+jie(i);
			} 
		}
		else//Å¼Êı 
		{
			for(i=2;i<=num;i=i+2)
			{
				sum2=sum2+jie(i);
			}
			for(i=1;i<num;i=i+2)
			{
				sum1=sum1+jie(i);
			}
		}
		printf("%d %d\n",sum1,sum2);
	}
}
int ji_ou(int num)
{
	if(num%2==0)
	return 0;
	return 1;
}
int jie(int num)
{
	int i,sum=1;
	for(i=1;i<=num;i++)
	{
		sum=sum*i;
	}
	return sum;
}
