#include<stdio.h>
main()
{
	int sum,a;
	int num,m,n;
	while(scanf("%d",&num)!=EOF)
	{
		sum=0;
		m=1;
		a=0; 
		while(m<=num)
		{
			n=m;
			while(1)
			{
				a=n%10;
				if(a==1)
				sum++;
				n=n/10;
				if(n==0)
				break;
			}
			m++;
		}
		printf("%d\n",sum);
	}
}
