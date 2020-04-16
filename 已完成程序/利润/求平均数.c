#include<stdio.h>
main()
{
	int m,sum,a;
	float b;
	m=getchar();
	sum=0;
	getchar();
	while((a=getchar()) !=EOF)
	{
		sum=sum+a;
		getchar();
	}
	b=sum/m;
	printf("%.2f\n",b);
}
