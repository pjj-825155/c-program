#include<stdio.h>
main()
{
	int num1,num2,i,k,shu[100],sum1,sum2,sum3;
	scanf("%d",&num1);
	for(i=0;i<num1;i++)
	{
		sum1=0;
		sum2=0;
		sum3=0;
		scanf("%d",&num2);
		for(k=0;k<num2;k++)
		{
			scanf("%d",&shu[k]); 
			if(shu[k]==1)
			sum1++;
			if(shu[k]==5)
			sum2++;
			if(shu[k]==10)
			sum3++;
		}
		printf("%d %d %d\n",sum1,sum2,sum3);
	}
}
