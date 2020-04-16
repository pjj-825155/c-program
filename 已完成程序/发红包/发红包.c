#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int money,num,i,qian,a;
	int sheng,chu1,chu2;
	i=0;
	srand((unsigned int)(time(NULL)));
	printf("人数:");
	scanf("%d",&num);
	printf("钱数:");
	scanf("%d",&money);
	i=1;
	sheng=0;
	while(i<num)
	{
		chu1=rand()%(num)+1;
		chu2=num/chu1*2;
		qian=money/chu2;
		qian=rand()%qian;
		a=money/num;
		if(qian>a)
		qian=qian*0.06;
		if(qian=='0')
		qian++; 
		printf("第%d个人的钱是%d\n",i,qian);
		i++;
		sheng=sheng+qian;
		if(i==num)
		break;
	}
	printf("第%d个人的钱是%d\n",num,money-sheng);
}
