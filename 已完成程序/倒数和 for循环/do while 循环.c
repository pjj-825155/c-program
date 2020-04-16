#include<stdio.h>
main()
{
	int i;
	double n,t;
	t=1;
	n=0;
	i=1;
	while(i<101)
	{
		n=n+(t/i);
		t=-t;
		i++;
	 } 
	printf("%.8f\n",n);
}
