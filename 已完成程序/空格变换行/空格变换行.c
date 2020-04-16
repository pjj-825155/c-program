#include<stdio.h>
main()
{
	int flag=0;
	char a;
	while((a=getchar())!=EOF)
	{
		if(a!=' ' && a!='\n')
		flag=0;
		if(flag==1)
		continue;
		if(a=='\t')
		{
			a='\n';
			flag=1;
		}
		if(a==' ')
		{
			a='\n';
			flag=1;
		}
		putchar(a);
	}
}
