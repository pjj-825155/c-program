#include<stdio.h>
main()
{
	int k,num,sum;
	while(scanf("%d",&num)!=EOF)
	{
		k=1;
		sum=0;
		while(k<num)
		{
			if(num%k==0)
			sum=sum+k;
			k++;
		}
		if(sum==num)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
