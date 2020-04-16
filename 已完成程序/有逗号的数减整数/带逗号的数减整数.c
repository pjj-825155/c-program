#include<stdio.h>
#include<string.h> 
main()
{
	int i,sum,a,jian;
	char bei[100];
	while(scanf("%s",bei)!=EOF)
	{
		a=1;
		sum=0;
		scanf("%d",&jian);
		for(i=strlen(bei);i>=0;i--)
		{
			if(bei[i]>='0' && bei[i]<='9')
			{
				sum=sum+(bei[i]-'0')*a;
				a=a*10;
			} 
		}
		printf("%d\n",sum-jian);
	}
}
