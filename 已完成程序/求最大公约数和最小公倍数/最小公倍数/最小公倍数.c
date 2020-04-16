#include<stdio.h>
main()
{
	int m,n,a,b,i,x,y;
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
	i=b;
	while(i>=b)
	{
		x=i%a;
		y=i%b;
		if(x==0 && y==0)
		break;
		i++;
	}
	printf("%d\n",i);
}
