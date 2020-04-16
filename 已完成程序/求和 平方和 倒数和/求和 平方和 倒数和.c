#include<stdio.h>
main()
{
	int a,b,c;
	double x,y,z;
	int i1,i2,i3;
	double s;
	x=y=z=0;
	i1=i2=i3=0;
	scanf("%d%d%d",&a,&b,&c);
	while(i1<a+1)
	{
		x=x+i1;
		i1++;
	}
	while(i2<b+1)
	{
		y=y+i2*i2;
		i2++;
	}
	while(i3<c)
	{
		i3++;
		z=z+(1.0/i3);
	}
	s=x+y+z;
	printf("%.2f\n",s);	
}
