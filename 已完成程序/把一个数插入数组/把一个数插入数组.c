#include<stdio.h>
main()
{
	int shu1,shu2,shu3,shu4,shu5,shu6,shu7,shu8,shu9,cha;
	scanf("%d%d%d%d%d%d%d%d%d",&shu1,&shu2,&shu3,&shu4,&shu5,&shu6,&shu7,&shu8,&shu9);
	scanf("%d",&cha);
	if(cha>=shu9)
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",shu1,shu2,shu3,shu4,shu5,shu6,shu7,shu8,shu9,cha);
	else
	if(cha>=shu8)
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",shu1,shu2,shu3,shu4,shu5,shu6,shu7,shu8,cha,shu9);
	else
	if(cha>=shu7)
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",shu1,shu2,shu3,shu4,shu5,shu6,shu7,cha,shu8,shu9);
	else
	if(cha>=shu6)
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",shu1,shu2,shu3,shu4,shu5,shu6,cha,shu7,shu8,shu9);
	else
	if(cha>=shu5)
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",shu1,shu2,shu3,shu4,shu5,cha,shu6,shu7,shu8,shu9);
	else
	if(cha>=shu4)
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",shu1,shu2,shu3,shu4,cha,shu5,shu6,shu7,shu8,shu9);
	else
	if(cha>=shu3)
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",shu1,shu2,shu3,cha,shu4,shu5,shu6,shu7,shu8,shu9);
	else
	if(cha>=shu2)
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",shu1,shu2,cha,shu3,shu4,shu5,shu6,shu7,shu8,shu9);
	else
	if(cha>=shu1)
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",shu1,cha,shu2,shu3,shu4,shu5,shu6,shu7,shu8,shu9);
	else
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",cha,shu1,shu2,shu3,shu4,shu5,shu6,shu7,shu8,shu9);
}
