#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char chuan[100];
	while(scanf("%s",chuan)!=EOF)
	{
		for(i=0;i<strlen(chuan);i++)
		{
			printf("%c",chuan[i]);
			if(chuan[i]>='A' && chuan[i]<='Z')
			{
				if(chuan[i+1]>='0' && chuan[i+1]<='9')
				;
				else
				putchar('1');
			}
		}
		putchar('\n');
	}
}
