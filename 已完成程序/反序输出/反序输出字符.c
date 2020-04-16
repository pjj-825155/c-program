#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char chuan[100];
	while(scanf("%s",chuan)!=EOF)
	{
		for(i=strlen(chuan)-1;i>=0;i--)
		{
			printf("%c",chuan[i]);
		}
		putchar('\n'); 
	}
}
