#include<stdio.h>
main()
{
	int n,i,a[100],max;
	while((scanf("%d",&n)) !=EOF)
	{
		i=0;
		while(i<n)
		{
			scanf("%d",&a[i]);
			i++;
		}
		i=1;
		max=a[0];
		while(i<n)
		{
			if(max<a[i])
			max=a[i];
			i++;
		}
		printf("%d\n",max);
	}
}
