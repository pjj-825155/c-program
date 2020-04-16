#include<stdio.h>
main()
{
	int n,i;
	int num;
	while(scanf("%d",&num) !=EOF) 
	{
		n=0;
		while(n<num*3)
		{
			i=0;
			while(i<num)
			{
				putchar('A');
				putchar('C');
				putchar('M');
				i++;
			}
			printf("\n");
			n++;
		}
	}
}
