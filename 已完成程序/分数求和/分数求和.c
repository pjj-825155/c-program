#include<stdio.h>
main()
{
	int num;
	float x,y,z;
	float sum;
	while(scanf("%d",&num) !=EOF)
	{
		sum=0;
		z=0;
		x=1.0;
		y=2.0;
		while(num>0)
		{
			sum=sum+x/y;
			z=y;
			y=x+y;
			x=z;
			num--;
		}
		printf("%.2f\n",sum);
	}
	
}
