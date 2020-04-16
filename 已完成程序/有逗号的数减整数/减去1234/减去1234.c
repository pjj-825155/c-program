#include<stdio.h>
#include<string.h>
main()
{
	int i,sum,a;
	char shu[100];
	while(scanf("%s",shu)!=EOF)
	{
		a=1;
		sum=0;
		for(i=strlen(shu);i>=0;i--)
		{
			if(shu[i]>='0' && shu[i]<='9')
			{
				sum=sum+(shu[i]-'0')*a;
				a=a*10;
			}
		}
		sum=sum-1234;
		printf("%d\n",sum);
	} 
}
