#include<stdio.h>
main()
{
	int fen,miao,min;
	while(scanf("%d:%d",&fen,&miao)!=EOF)
	{
		scanf("%d",&min);
		fen=(((miao+min)/60)+fen)%24;
		miao=(miao+min)%60;
		printf("%02d:%02d\n",fen,miao);
	}
}
