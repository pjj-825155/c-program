#include<stdio.h>
main()
{
	int a;
	while((a=getchar())!=EOF)
	{
		if(a>=49 && a<=58)
		printf("%c",a);
		if(a>='a' && a<='z')
		printf("%c",a);
		if(a==92)
		printf("%c%c",a,a);
		if(a=='\n')
		{
			putchar('\\');
			putchar('n');
		}
	}
	putchar('\n'); 
}
