#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int money,num,i,qian,a;
	int sheng,chu1,chu2;
	i=0;
	srand((unsigned int)(time(NULL)));
	printf("����:");
	scanf("%d",&num);
	printf("Ǯ��:");
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
		printf("��%d���˵�Ǯ��%d\n",i,qian);
		i++;
		sheng=sheng+qian;
		if(i==num)
		break;
	}
	printf("��%d���˵�Ǯ��%d\n",num,money-sheng);
}
