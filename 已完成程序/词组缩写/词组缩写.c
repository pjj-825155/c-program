#include<stdio.h>
#include<string.h>
main()
{
	int num,i,flag;
	char ci[100];
	scanf("%d",&num);
	getchar();
	while(num>0)
	{
		gets(ci);
		flag=0;
		for(i=0;i<strlen(ci);i++)
		{
			if((ci[i]>='a'&&ci[i]<='z')&&(flag==0))
			{
				printf("%c",ci[i]-32);
				flag=1;
			}
			if((ci[i]>='A'&&ci[i]<='Z')&&(flag==0))
			{
				printf("%c",ci[i]);
				flag=1;
			}
			if(ci[i]==' '||ci[i]=='\t')
			flag=0;
		}
		putchar('\n');
		num--;
	}
}
