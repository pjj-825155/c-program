#include<stdio.h>
#include<math.h>
#define s(a,b,c) (a+b+c)/2
#define area(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c))
main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	printf("%.3f\n",area(a,b,c,s(a,b,c)));
}
