#include<stdio.h>
main()
{
	char c;
	int flag,emt;
	while((c=getchar())!=EOF)
	{
		emt=1;
		flag=1;
		while(1)
		{
			if(c>=48 && c<=57)
			;
			else
			flag=0;
			if(c='\n')
			break;
		}
		if(flag==0)
		emt=0;
		if(emt==1)
		printf("YES\n");
	}
}
