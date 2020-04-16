#include<stdio.h>
main()
{
	int c1,c2,c3,c4,c5,c6,c7,c8;
	scanf("%d",&c1);
	scanf("%d",&c2);
	scanf("%d",&c3);
	scanf("%d",&c4);
	scanf("%d",&c5);
	scanf("%d",&c6);
	scanf("%d",&c7);
	scanf("%d",&c8);
	if(c1>=0)
	printf("%o %x\n",c1,c1);
	else
	printf("-%o -%x\n",abs(c1),abs(c1));
	if(c2>=0)
	printf("%o %x\n",c2,c2);
	else
	printf("-%o -%x\n",abs(c2),abs(c2));
	if(c3>=0)
	printf("%o %x\n",c3,c3);
	else
	printf("-%o -%x\n",abs(c3),abs(c3));
	if(c4>=0)
	printf("%o %x\n",c4,c4);
	else
	printf("-%o -%x\n",abs(c4),abs(c4));
	if(c5>=0)
	printf("%o %x\n",c5,c5);
	else
	printf("-%o -%x\n",abs(c5),abs(c5));
	if(c6>=0)
	printf("%o %x\n",c6,c6);
	else
	printf("-%o -%x\n",abs(c6),abs(c6));
	if(c7>=0)
	printf("%o %x\n",c7,c7);
	else
	printf("-%o -%x\n",abs(c7),abs(c7));
	if(c8>=0)
	printf("%o %x\n",c8,c8);
	else
	printf("-%o -%x\n",abs(c8),abs(c8));
 } 
