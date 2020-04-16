#include<stdio.h>
int gongyue(int p1,int q1);
int gongbei(int p2,int q2);
main()
{
	int x,y,p,q,i,gy,gb,i1,i2;
	scanf("%d%d",x,y);
	i=0;
	p=x;
	while(x<=p && p<=y)
	{
		q=x;
		while(x<=q && q<=y)
		{
			gy=gongyue(p,q);
			gb=gongbei(p,q);
			if(gy==x && gb==y)
			i++;
			q++;
		}
		p++;
	}
	printf("%d\n",i);
}

int gongyue(int p1,int q1)
{
	int i1,x1,y1; 
	i1=p1-1;
	while(i1>0)
	{
		x1=p1%i1;
		y1=q1%i1;
		if(x1==0 && y1==0)
		break;
		i1--;
	}	
	return(i1);
}

int gongbei(int p2,int q2)
{
	int i2,x2,y2;
	i2=q2;
	while(i2>=q2)
	{
		x2=p2%p2;
		y2=q2%q2;
		if(x2==0 && y2==0)
		break;
		i2++;
	}
	return(i2);
}
