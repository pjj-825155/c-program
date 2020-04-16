#include<stdio.h>
main()
{
	int num,a1,a2,a3;
	while(scanf("%d",&num)!=EOF)
	{
		a1=0;
		a2=0;
		a3=0;
		
		a1=num/100;
		num=num%100;
		a2=num/10;
		num=num%10;
		a3=num;
		
		if(a1==1)
		printf("Ò¼°Û");
		if(a1==2)
		printf("·¡°Û");
		if(a1==3)
		printf("Èþ°Û");
		if(a1==4)
		printf("ËÁ°Û");
		if(a1==5)
		printf("Îé°Û");
		if(a1==6)
		printf("Â½°Û");
		if(a1==7)
		printf("Æâ°Û");
		if(a1==8)
		printf("°Æ°Û");
		if(a1==9)
		printf("¾Á°Û"); 
		
		if(a2==0 && a3!=0)
		printf("Áã"); 
		if(a2==1)
		printf("Ò¼Ê°");
		if(a2==2)
		printf("·¡Ê°");
		if(a2==3)
		printf("ÈþÊ°");
		if(a2==4)
		printf("ËÁÊ°");
		if(a2==5)
		printf("ÎéÊ°");
		if(a2==6)
		printf("Â½Ê°");
		if(a2==7)
		printf("ÆâÊ°");
		if(a2==8)
		printf("°ÆÊ°");
		if(a2==9)
		printf("¾ÁÊ°");
		
		if(a3==1)
		printf("Ò¼");
		if(a3==2)
		printf("·¡");
		if(a3==3)
		printf("Èþ");
		if(a3==4)
		printf("ËÁ");
		if(a3==5)
		printf("Îé");
		if(a3==6)
		printf("Â½");
		if(a3==7)
		printf("Æâ");
		if(a3==8)
		printf("°Æ");
		if(a3==9)
		printf("¾Á");
		
		printf("ÔªÕû\n"); 
	}
}
