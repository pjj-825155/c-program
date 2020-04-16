#include<stdio.h>
#include<math.h>
int a1,b1,x1,y,x2,y2,x3,y3;
int a2,b2;
int a3,b3;
float c1;
float c2;
float c3;
float s;
float p;
main()
{
	printf("请输入x1 y1 x2 y2 x3 y3\n");
	scanf("%d%d%d%d%d%d",&x1,&y,&x2,&y2,&x3,&y3);
	a1=(x2-x1);
	b1=(y2-y);
	c1=sqrt(a1*a1+b1*b1);
	printf("两点的距离为%f\n",c1);
	a2=(x3-x2);
	b2=(y3-y2);
	c2=sqrt(a2*a2+b2*b2);
	printf("两点的距离为%f\n",c2);
	a3=(x3-x1);
	b3=(y3-y);
	c3=sqrt(a3*a3+b3*b3);
	printf("两点的距离为%f\n",c3);
	p=(c1+c2+c3)/2;
	s=sqrt(p*(p-c1)*(p-c2)*(p-c3));
	printf("三角形的面积为%f\n",s);
}

