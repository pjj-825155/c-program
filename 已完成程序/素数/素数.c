#include<stdio.h>
main()
{
	int m,i,flag;
	flag=1;
	scanf("%d",&m);
	i=2;
	while(i<m)
	{
		if(m%i==0)
		{
			flag=0;
			break;
		}
		i++;
	}
	if(flag==0)
	printf("not prime\n");
	else
	printf("prime\n"); 
	
}
