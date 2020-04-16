#include<stdio.h>
main()
{
	int m,n,a,b,i1,i2,x,y,sum1,sum2,i,A,B;
	while(scanf("%d%d%d%d",&a,&m,&b,&n)!=EOF)
	{
		i2=n;
		while(i2>=n)
		{
			x=i2%m;
			y=i2%n;
			if(x==0 && y==0)
			break;
			i2++;
		}
		sum1=a*(i2/m);
		sum2=b*(i2/n);
		i1=sum1+sum2;
		if(i1<i2)
		{
			A=i1;
			B=i2;
		}
		else
		{
			A=i2;
			B=i1;
		}
		i=A;
		while(i>0)
		{
			x=A%i;
			y=B%i;
			if(x==0 && y==0)
			break;
			i--;
		}
		i1=i1/i;
		i2=i2/i;
		printf("%d/%d\n",i1,i2);
	}
}

