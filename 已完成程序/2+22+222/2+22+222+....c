#include<stdio.h>
main()
{
	int sum,a,i,n,m;
	a=2;
	i=0;
	sum=0;
	scanf("%d",&n);
	m=n;
	while(i<m)
	{
		sum=sum+a*n;
		n=n-1;
		i=i+1;
		a=a*10;
	}
	printf("%d\n",sum);
}
