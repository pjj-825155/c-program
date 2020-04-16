#include<stdio.h>
#define max(a,b,c) (a>b?a:b)>(b>c?b:c)?(a>b?a:b):(b>c?b:c) 
float m(float a,float b,float c)
{
	float m;
	m=a;
	if(m<b)
	m=b;
	if(m<c)
	m=c;
	return m;
}
float m(float a,float b,float c);
main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	printf("%.3f\n",m(a,b,c));
	printf("%.3f\n",max(a,b,c));
}
