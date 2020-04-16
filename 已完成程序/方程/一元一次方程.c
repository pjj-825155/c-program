#include<stdio.h>
main()
{
	int a,b;
	double sum;
	while(scanf("%d%d",&a,&b) !=EOF)
	{
		sum=(-4.0*b)/(3.0*a);
		printf("%.4lf\n",sum);
	}
}
