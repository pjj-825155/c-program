#include<stdio.h>
main()
{
	int m,n,a,b,i1,i2,x,y;
	scanf("%d%d",&m,&n);
	if(m<n)
	{
		a=m;
		b=n;
	}
	else
	{
		a=n;
		b=m;
	}
	i1=a-1;
	while(i1>0)
	{
		x=a%i1;
		y=b%i1;
		if(x==0 && y==0)
		break;
		i1--;
	}
	printf("%d ",i1);
	i2=b;
	while(i2>=b)
	{
		x=i2%a;
		y=i2%b;
		if(x==0 && y==0)
		break;
		i2++;
	}
	printf("%d\n",i2);
}

