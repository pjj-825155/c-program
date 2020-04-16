#include<stdio.h>
main()
{
	int n,m,k,a[1000],i,sum;
	while(scanf("%d%d%d",&n,&m,&k)!=EOF)
	{
		i=0;
		sum=0;
		while((n+i*k)<=m)
		{
			a[i]=n+i*k;
			sum=sum+a[i];
			i++;
		}
		printf("%d\n",sum);
	}
}
