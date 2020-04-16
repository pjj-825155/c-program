#include<stdio.h>
main()
{
	int n,i,k;
	while(scanf("%d",&n) !=EOF)
	{ 
        printf("\n"); 
        for(i=1;i<=n;i++)
		{
			for(k=1;k<i;k++)
			{
				putchar(' ');
				putchar(' ');
			}
			for(k=1;k<=n-i+1;k++)
			{
				putchar('*');
				if(k==n-i+1)
				break;
				putchar(' ');
			}
			putchar('\n');
		 } 
	}

}
