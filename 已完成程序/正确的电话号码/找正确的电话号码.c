#include<stdio.h>
#include<string.h>
main()
{
	int flag,i;
	char call[25];
	while(scanf("%s",call)!=EOF)
	{
		if(strlen(call)<11 || strlen(call)>11)
		printf("NO\n");
		else
		{
			flag=1;
			for(i=0;i<11;i++)
			{
				if((call[i]>='a' && call[i]<='z')||(call[i]>='A' && call[i]<='Z'))
				flag=0;
			}
			if(flag==0)
			printf("NO\n");
			else
			{
				if(call[0]=='1' && (call[1]=='3' || call[1]=='5' || call[1]=='7' || call[1]=='8'))
				printf("YES\n");
				else
				printf("NO\n");
			}
		}
	}
}
