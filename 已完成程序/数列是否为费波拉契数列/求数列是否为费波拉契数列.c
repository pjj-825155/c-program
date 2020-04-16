#include<stdio.h>
main()
{
	int num,n1,n2,n3,n4,n5;
	scanf("%d",&num);
	while(num>0)
	{
		scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
		if(n3==(n1+n2) && n4==(n2+n3) && n5==(n4+n3))
		printf("YES\n");
		else
		printf("NO\n");
		num--;
	}
	 
}
