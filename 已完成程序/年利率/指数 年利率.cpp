#include<stdio.h>
#include<math.h>
main()
{
	int year;
	float sum,money,rate,sun;
	scanf("%f%d%f",&money,&year,&rate);
	sum=money*(pow(1+rate,year));
	printf("%.1f",sum);
}
