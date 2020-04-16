#include<stdio.h>
main()
{
	int k,n;
	double sn; 
	sn=0;
	n=1;
	scanf("%d",&k);
	while(sn<=k)
	{
		sn=sn+(1.0/n);
		n++;
	}
	n--;
	printf("%d\n",n);
}
