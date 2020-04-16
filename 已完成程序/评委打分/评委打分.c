#include<stdio.h>
main()
{
	int num,sum,fen[100],i,k,max,min;
	double ping;
	while(scanf("%d",&num)!=EOF)
	{
		sum=0;
		for(i=0;i<num;i++)
		{
			scanf("%d",&fen[i]);
			sum=sum+fen[i];
		}
		max=fen[0];
		min=fen[0];
		for(k=1;k<i;k++)
		{
			if(max<fen[k])
			max=fen[k];
			if(min>fen[k])
			min=fen[k];
		}
		sum=sum-max-min;
		ping=sum*1.0/(num-2);
		printf("%.2lf\n",ping);
	}
}
