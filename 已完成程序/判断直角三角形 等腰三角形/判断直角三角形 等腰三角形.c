#include<stdio.h>
main()
{
	int t,a,b,c,d,i; 
	scanf("%d",&t);
	i=0;
	while(i<t)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(a<b)
		{
			d=a; 
			a=b; 
			b=d; 
		}
		if(b<c)
		{
			d=b;
			b=c;
			c=d;
		}
		if(a<b)
		{
			d=a;
			a=b;
			b=d;
		} 
		if(a == b || b == c || c == a)
		printf("perfect\n");
		else if(c*c+b*b==a*a)
		printf("good\n");
		else
		printf("just a triangle\n");
		i++;
	}
}
