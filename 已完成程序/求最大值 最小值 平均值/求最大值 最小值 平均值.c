#include<stdio.h>
main()
{
	int num,i,sco[100],max,min,sum;
	double sun;
	while(scanf("%d",&num)!=EOF)
	{
		for(i=0;i<num;i++)
		{
			scanf("%d",&sco[i]);
		}
		max=sco[0];
		for(i=1;i<num;i++)
		{
			if(max<sco[i])
			max=sco[i];
		}
		min=sco[0];
		for(i=1;i<num;i++)
		{
			if(min>sco[i])
			min=sco[i];
		}
		sum=0;
		for(i=0;i<num;i++)
		{
			sum=sum+sco[i];
		}
		sun=(sum*1.0)/num;
		printf("%d %d %.2lf\n",max,min,sun);
	}
}
