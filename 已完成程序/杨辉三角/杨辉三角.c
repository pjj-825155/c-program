#include<stdio.h>
main()
{
	int n;
	//xΪ�� yΪ�� 
	int x,y;
	//�����ά���� 
	int a[100][100];
	while(scanf("%d",&n) !=EOF)
	{
		x=0;
		y=0;		
		//�������� Ϊ1ʱ 
		if(n==1)
		printf("1\n");
		else
		//�������� Ϊ2ʱ 
		if(n==2)
		printf("1\n1 1\n");
		//Ϊ2���ϵ���ʱ 
		else
		{
			//����ߵ�1��ֵ 
			x=3;
			y=1;
			while(x<=n)
			{
				a[x][1]=1;
				x++;
			}
			//���ұߵ�1��ֵ
			x=3;
			y=3;
			while(x<=n)
			{
				a[x][y]=1;
				x++;
				y++;
			}
			a[2][1]=1;
			a[2][2]=1;
			x=3;
			y=2;
			//���м丳ֵ 
			while(x<=n)
			{
				y=2;
				while(y<x)
				{
					a[x][y]=a[(x-1)][y]+a[(x-1)][(y-1)];
					y++;
				}
				x++;
			} 
			printf("1\n1 1\n");
			//��� 
			x=3;
			y=1;
			while(x<=n)
			{
				y=1;
				while(y<=x)
				{
					printf("%d",a[x][y]);
					if(y==x)
					break;
					putchar(' ');
					y++;
				}
				putchar('\n');
				x++;
			}
		}
		putchar('\n'); 
	}	
}
