#include<stdio.h>
#include<string.h>
main()
{
	char alabo[100];
	int flag,i; 
	while(scanf("%s",alabo)!=EOF)
	{
		flag=1;
		for(i=0;i<strlen(alabo);i++)
		{
			if(alabo[i]>='0' && alabo[i]<='9')
			;
			else
			flag=0;
		}
		if(flag==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
