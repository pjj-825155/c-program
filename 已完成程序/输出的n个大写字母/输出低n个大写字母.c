#include<stdio.h>
main()
{
	int num;
	char i;
	while(scanf("%d",&num)!=EOF)
	{
		i=65;
		while(i<=(64+num))
		{
			putchar(i);
			if(i==(64+num))
			break;
			putchar(',');
			i++;
		}
		putchar('\n'); 
	}
}
