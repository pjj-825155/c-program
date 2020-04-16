#include<stdio.h>
main()
{
	int num,i,shu[100],cha;
	while(scanf("%d",&num)!=EOF)
	{
		for(i=0;i<num;i++)
		{
			scanf("%d",&shu[i]);
		}
		scanf("%d",&cha);
		if(cha<=shu[0])
		{
			printf("%d ",cha);
			for(i=0;i<num;i++)
			{
				printf("%d",shu[i]);
				if(i==num)
				break;
				putchar(' ');
			}
			putchar('\n');
		}
		else
		{
			if(cha>=shu[(num-1)])
			{
				for(i=0;i<num;i++)
				{
					printf("%d",shu[i]);
					putchar(' ');
				}
				printf("%d\n",cha);
			}
			else
			{
				for(i=0;i<num;i++)
				{
					printf("%d",shu[i]);
					if(i==num)
					break;
					putchar(' ');
					if(shu[i]<=cha && cha<=shu[(i+1)])
					printf("%d ",cha);
				}
				putchar('\n'); 
			}
		}
	}
}
