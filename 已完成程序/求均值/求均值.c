#include<stdio.h>
main()
{
	int i,num,a[100],sum;
	double junzhi,sum1,num1;
	while(scanf("%d",&num)!=EOF)
	{
		i=0;
		num1=(double)num;
		while(num>0)
		{
			scanf("%d",&a[i]);
			num--;
			i++; 
		}
		sum=0;
		i--;
		while(i>=0)
		{ 
			sum=sum+a[i];
			i--;
		}
		sum1=(double)sum;
		junzhi=sum1/num1;
		printf("%.2lf\n",junzhi);
	}
}
