#include<stdio.h>
main()
{
	int i1,i2,i3,m;
	i1=0;
	i2=0;
	i3=0;
	while((m=getchar()) !=EOF)
	{
		if(m==' ')
		i1++;
		if(m=='\n')
		i2++;
		if(m=='\t')
		i3++;
	}
	printf("%d\n",i1+i2+i3);
}
