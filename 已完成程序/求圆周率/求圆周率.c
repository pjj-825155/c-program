#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	double pi=0.0,i=1.0,j=1.0;
	while(i<2*n)
	{
		pi=pi+1/(i*j);
		i=i+2;
		j=-j;
	}
	pi=pi*4;
	printf("%.10lf\n",pi);
}
