#include<stdio.h>
main()
{
	int m,i,flag;
	int n;
	while(scanf("%d",&m)!=EOF)
	{
		flag=1;
		i=2;
		while(i<m)
		{
			if(m%i==0)
			{
				flag=0;
				break;
			}
			i++;
		}
			if(flag==1)
		printf("%d\n",m);
		else
		{
			n=m-1;
			while(n>0)
			{
				
				flag=1;
				i=2;
				while(i<n)
				{
					if(n%i==0)
					{
						flag=0;
						break;
					}
					i++;
				}
			
				if((m%n)==0 && flag==1)
				break;
				n--;
			}
			printf("%d\n",n);
		}
	}
}
