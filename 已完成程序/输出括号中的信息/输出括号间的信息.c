#include<stdio.h>
#include<string.h>
main()
{
	int k,flag,m,i,x;
	char chuan[100],fu[100];
	while(scanf("%s",chuan)!=EOF)
	{
		x=0;
		flag=2;
		for(i=0;i<strlen(chuan);i++)
		{
			if(chuan[i]=='<')
			{
				flag=1;
			}
			if(flag==1)
			{
				fu[x]=chuan[i];
				x++;
			}
			if(chuan[i]=='>' && flag==1)
			{
				flag=0;
			}
		}
		if(flag==2)
		printf("NO\n");
		else
		{
			if(flag==1)
			printf("NO\n");
			else
			{
				for(m=0;m<x;m++)
				{
					printf("%c",fu[m]);
					if(fu[m]=='>')
					putchar('\n');
				}
			}
		}
	}
}
