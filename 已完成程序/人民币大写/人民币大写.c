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
		printf("Ҽ��");
		if(a1==2)
		printf("����");
		if(a1==3)
		printf("����");
		if(a1==4)
		printf("����");
		if(a1==5)
		printf("���");
		if(a1==6)
		printf("½��");
		if(a1==7)
		printf("���");
		if(a1==8)
		printf("�ư�");
		if(a1==9)
		printf("����"); 
		
		if(a2==0 && a3!=0)
		printf("��"); 
		if(a2==1)
		printf("Ҽʰ");
		if(a2==2)
		printf("��ʰ");
		if(a2==3)
		printf("��ʰ");
		if(a2==4)
		printf("��ʰ");
		if(a2==5)
		printf("��ʰ");
		if(a2==6)
		printf("½ʰ");
		if(a2==7)
		printf("��ʰ");
		if(a2==8)
		printf("��ʰ");
		if(a2==9)
		printf("��ʰ");
		
		if(a3==1)
		printf("Ҽ");
		if(a3==2)
		printf("��");
		if(a3==3)
		printf("��");
		if(a3==4)
		printf("��");
		if(a3==5)
		printf("��");
		if(a3==6)
		printf("½");
		if(a3==7)
		printf("��");
		if(a3==8)
		printf("��");
		if(a3==9)
		printf("��");
		
		printf("Ԫ��\n"); 
	}
}
