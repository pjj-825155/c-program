#include<stdio.h>
main()
{
	int a,sum,num;
	while((a=getchar())!=EOF)
	{
		sum=0;
		if(a!=',')
		sum=sum*10+a;
		scanf("%d",&num);
		printf("%d\n",sum-num);
	}
}
