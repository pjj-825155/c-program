#include<stdio.h>
main()
{
	int h1,h2,h3,h4;
	while(scanf("%d%d%d%d",&h1,&h2,&h3,&h4)!=EOF)
	{
		if((h2%h1)==0&&(h3%h2)==0&&(h4%h3)==0)
		if((h2/h1)==(h3/h2)&&(h4/h3)==(h3/h2))
		printf("YES\n");
		else
		printf("NO\n");
		else
		printf("NO\n");
	}
}
