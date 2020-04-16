#include<stdio.h>
main()
{
	int nian;
	int a,b,c;
	int run;
	nian=1900;
	while(nian<2001) 
	{
		run=nian;
		a=nian%4;
		b=nian%400;
		c=nian%100;
		if(b==0)
		printf("%d\n",run);
		else
		if(a==0 && c!=0)
		printf("%d\n",run);
		nian++;
	}
	
}
