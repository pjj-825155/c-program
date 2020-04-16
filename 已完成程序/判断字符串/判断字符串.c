#include<stdio.h>
#include<string.h>
main()
{
	char chuan[100];
	int i,flag;
	while(scanf("%s",chuan)!=EOF)
	{
		flag=2;
		for(i=0;i<strlen(chuan);i++)
		{
			if((chuan[0]>='A' && chuan[0]<='Z')||(chuan[0]>='a' && chuan[0]<='z')||chuan[0]=='_')
			{
				if((chuan[i]>='A' && chuan[i]<='Z')||(chuan[i]>='a' && chuan[i]<='z')||chuan[i]=='_'||(chuan[i]>='0' && chuan[i]<='9'))
				flag=1;
				else
				{
					flag=0;
					break;
				}
			}
			else
			{
				printf("NO\n");
				break;
			}
		}
		if(flag==1)
		printf("YES\n");
		if(flag==0)
		printf("NO\n");
	}
}
