#include<stdio.h>
main()
{
	int num1,num2,num3,num4,num5,m1,m2,m3,m4,m5,n,i;
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
		m1=num2-num1;
		m2=num3-num2;
		m3=num4-num3;
		m4=num5-num4;
		if((m1==m2) && (m2==m3) && (m3==m4)) 
		printf("YES\n");
		else
		printf("NO\n");
		i++;
	}
}
