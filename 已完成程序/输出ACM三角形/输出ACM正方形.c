#include<stdio.h>

main()

{

	int m,n,i;
	
	int num;
	
	scanf("%d",&num);

	while(num>0)

	{ 
		scanf("%d",&m);

		n=0;
		 
		while(n<m*3)

		{

			i=0;

			while(i<m)

			{

				putchar('A');
				putchar('C');
				putchar('M');
				

				i++;


			}

			printf("\n");

			n++;

		}
		num--;

	}

}
