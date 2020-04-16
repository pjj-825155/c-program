#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	double sum1,sum2;
	while(scanf("%d%d%d",&a,&b,&c) !=EOF)
	{
		sum1=(-b+sqrt(b*b-4.0*a*c))/(2.0*a);
		sum2=(-b-sqrt(b*b-4.0*a*c))/(2.0*a);
		if((b*b-4*a*c)<0)
		printf("NO SOLUTION\n");
		else
		printf("%.3lf~~~%.3lf\n",sum1,sum2);
	}
}
