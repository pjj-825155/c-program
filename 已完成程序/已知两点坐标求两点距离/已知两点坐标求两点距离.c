#include<stdio.h>
#include<math.h>
int a,b,x1,y,x2,y2;
float c;
main()
{
	printf("������x1 y1 x2 y2\n");
	scanf("%d%d%d%d",&x1,&y,&x2,&y2);
	a=(x2-x1);
	b=(y2-y);
	c=sqrt(a*a+b*b);
	printf("����ľ���Ϊ%f\n",c);
}
