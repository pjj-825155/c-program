#include<stdio.h>

main()

{

	int m,n,i;

	while(scanf("%d",&m) !=EOF)

	{ 

		n=1;
        printf("\n"); 
		while(n<m+1)

		{

			i=0;

			while(i<n)

			{

				putchar('*');

				i++;

				if(i==n)

				break;

				putchar(' ');

			}

			printf("\n");

			n++;

		}

	}

}
