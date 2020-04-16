#include<stdio.h>
main()
{
	int flag=0;
	char a;
	while((a=getchar())!=EOF)
	{
		if(a!=' ')
		flag=0;
		if(flag==1)
		continue;
		if(a==' ')
		{
			flag=1;
		}
		putchar(a);
	}
}
