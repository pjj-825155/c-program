#include<stdio.h>
main()
{
	int n;
	//x为行 y为列 
	int x,y;
	//定义二维数组 
	int a[100][100];
	while(scanf("%d",&n) !=EOF)
	{
		x=0;
		y=0;		
		//分类讨论 为1时 
		if(n==1)
		printf("1\n");
		else
		//分类讨论 为2时 
		if(n==2)
		printf("1\n1 1\n");
		//为2以上的数时 
		else
		{
			//给左边的1赋值 
			x=3;
			y=1;
			while(x<=n)
			{
				a[x][1]=1;
				x++;
			}
			//给右边的1赋值
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
			//给中间赋值 
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
			//输出 
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
