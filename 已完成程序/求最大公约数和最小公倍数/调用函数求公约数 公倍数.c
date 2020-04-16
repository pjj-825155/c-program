#include<stdio.h>
int gongyue(int a1,int b1);
int gongbei(int a2,int b2);
main()
{
	int m,n,a,b,i1,i2,x,y,gy,gb;
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
	gy=gongyue(a,b);
	gb=gongbei(a,b);
	printf("%d %d\n",gy,gb);
}

int gongyue(int a1,int b1)
{
	int i1,x1,y1; 
	i1=a1-1;
	while(i1>0)
	{
		x1=a1%i1;
		y1=b1%i1;
		if(x1==0 && y1==0)
		break;
		i1--;
	}	
	return(i1);
}

int gongbei(int a2,int b2)
{
	int i2,x2,y2;
	i2=b2;
	while(i2>=b2)
	{
		x2=i2%a2;
		y2=i2%b2;
		if(x2==0 && y2==0)
		break;
		i2++;
	}
	return(i2);
}
