#include<stdio.h>
main()
{
	int nian1,yue1,ri1,sun1;
	int nian2,yue2,ri2,sun2;
	int nian,a,b,c;
	int a1,b1,c1;
	int a2,b2,c2;
	scanf("%d-%d-%d",&nian1,&yue1,&ri1);
	scanf("%d-%d-%d",&nian2,&yue2,&ri2); 
	a1=nian1%4;
	b1=nian1%400;
	c1=nian1%100;
	a2=nian2%4;
	b2=nian2%400;
	c2=nian2%100;
	if(b1==0)
	{
		if(yue1>11)
			sun1=31+29+31+30+31+30+31+31+30+31+30+ri1;
		else
		if(yue1>10)
			sun1=31+29+31+30+31+30+31+31+30+31+ri1;
		else
		if(yue1>9)
			sun1=31+29+31+30+31+30+31+31+30+ri1;
		else
		if(yue1>8)
			sun1=31+29+31+30+31+30+31+31+ri1;
		else
		if(yue1>7)
			sun1=31+29+31+30+31+30+31+ri1;
		else
		if(yue1>6)
			sun1=31+29+31+30+31+30+ri1;
		else
		if(yue1>5)
			sun1=31+29+31+30+31+ri1;
		else
		if(yue1>4)
			sun1=31+29+31+30+ri1;
		else
		if(yue1>3)
			sun1=31+29+31+ri1;
		else
		if(yue1>2)
			sun1=31+29+ri1;
		else
		if(yue1>1)
			sun1=31+ri1;
		else
			sun1=ri1;
	}
	else
	if(a1==0 && c1!=0)
	{
		if(yue1>11)
			sun1=31+29+31+30+31+30+31+31+30+31+30+ri1;
		else
		if(yue1>10)
			sun1=31+29+31+30+31+30+31+31+30+31+ri1;
		else
		if(yue1>9)
			sun1=31+29+31+30+31+30+31+31+30+ri1;
		else
		if(yue1>8)
			sun1=31+29+31+30+31+30+31+31+ri1;
		else
		if(yue1>7)
			sun1=31+29+31+30+31+30+31+ri1;
		else
		if(yue1>6)
			sun1=31+29+31+30+31+30+ri1;
		else
		if(yue1>5)
			sun1=31+29+31+30+31+ri1;
		else
		if(yue1>4)
			sun1=31+29+31+30+ri1;
		else
		if(yue1>3)
			sun1=31+29+31+ri1;
		else
		if(yue1>2)
			sun1=31+29+ri1;
		else
		if(yue1>1)
			sun1=31+ri1;
		else
			sun1=ri1;
	}
	else
	{
		if(yue1>11)
			sun1=31+28+31+30+31+30+31+31+30+31+30+ri1;
		else
		if(yue1>10)
			sun1=31+28+31+30+31+30+31+31+30+31+ri1;
		else
		if(yue1>9)
			sun1=31+28+31+30+31+30+31+31+30+ri1;
		else
		if(yue1>8)
			sun1=31+28+31+30+31+30+31+31+ri1;
		else
		if(yue1>7)
			sun1=31+28+31+30+31+30+31+ri1;
		else
		if(yue1>6)
			sun1=31+28+31+30+31+30+ri1;
		else
		if(yue1>5)
			sun1=31+28+31+30+31+ri1;
		else
		if(yue1>4)
			sun1=31+28+31+30+ri1;
		else
		if(yue1>3)
			sun1=31+28+31+ri1;
		else
		if(yue1>2)
			sun1=31+28+ri1;
		else
		if(yue1>1)
			sun1=31+ri1;
		else
			sun1=ri1;
	}
	if(b2==0)
	{
		if(yue2>11)
			sun2=31+29+31+30+31+30+31+31+30+31+30+ri2;
		else
		if(yue2>10)
			sun2=31+29+31+30+31+30+31+31+30+31+ri2;
		else
		if(yue2>9)
			sun2=31+29+31+30+31+30+31+31+30+ri2;
		else
		if(yue2>8)
			sun2=31+29+31+30+31+30+31+31+ri2;
		else
		if(yue2>7)
			sun2=31+29+31+30+31+30+31+ri2;
		else
		if(yue2>6)
			sun2=31+29+31+30+31+30+ri2;
		else
		if(yue2>5)
			sun2=31+29+31+30+31+ri2;
		else
		if(yue2>4)
			sun2=31+29+31+30+ri2;
		else
		if(yue2>3)
			sun2=31+29+31+ri2;
		else
		if(yue2>2)
			sun2=31+29+ri2;
		else
		if(yue2>1)
			sun2=31+ri2;
		else
			sun2=ri2;
	}
	else
	if(a1==0 && c1!=0)
	{
		if(yue2>11)
			sun2=31+29+31+30+31+30+31+31+30+31+30+ri2;
		else
		if(yue2>10)
			sun2=31+29+31+30+31+30+31+31+30+31+ri2;
		else
		if(yue2>9)
			sun2=31+29+31+30+31+30+31+31+30+ri2;
		else
		if(yue2>8)
			sun2=31+29+31+30+31+30+31+31+ri2;
		else
		if(yue2>7)
			sun2=31+29+31+30+31+30+31+ri2;
		else
		if(yue2>6)
			sun2=31+29+31+30+31+30+ri2;
		else
		if(yue2>5)
			sun2=31+29+31+30+31+ri2;
		else
		if(yue2>4)
			sun2=31+29+31+30+ri2;
		else
		if(yue2>3)
			sun2=31+29+31+ri2;
		else
		if(yue2>2)
			sun2=31+29+ri2;
		else
		if(yue2>1)
			sun2=31+ri2;
		else
			sun2=ri2;
	}
	else
	{
		if(yue2>11)
			sun2=31+28+31+30+31+30+31+31+30+31+30+ri2;
		else
		if(yue2>10)
			sun2=31+28+31+30+31+30+31+31+30+31+ri2;
		else
		if(yue2>9)
			sun2=31+28+31+30+31+30+31+31+30+ri2;
		else
		if(yue2>8)
			sun2=31+28+31+30+31+30+31+31+ri2;
		else
		if(yue2>7)
			sun2=31+28+31+30+31+30+31+ri2;
		else
		if(yue2>6)
			sun2=31+28+31+30+31+30+ri2;
		else
		if(yue2>5)
			sun2=31+28+31+30+31+ri2;
		else
		if(yue2>4)
			sun2=31+28+31+30+ri2;
		else
		if(yue2>3)
			sun2=31+28+31+ri2;
		else
		if(yue2>2)
			sun2=31+28+ri2;
		else
		if(yue2>1)
			sun2=31+ri2;
		else
			sun2=ri2;
	}
	nian=nian2;
	while(nian!=nian1)
	{
		nian--;
		a=nian%4;
		b=nian%400;
		c=nian%100;
		if(b==0)
		sun2=sun2+366;
		else
		if(a==0 && c!=0)
		sun2=sun2+366;
		else
		sun2=sun2+365;
	}
	printf("%d\n",sun2-sun1);
}
