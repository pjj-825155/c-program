#include<stdio.h>
#include<math.h>
int a1,b1,x1,y,x2,y2,x3,y3,x4,y4;
int a2,b2;
int a3,b3;
int a4,b4;
int a5,b5;
float c1;
float c2;
float c3;
float c4;
float c5;
float s,s1,s2;
float p1,p2;
main()
{
	printf("请按顺时针输入四边形坐标\n");
	scanf("%d%d%d%d%d%d%d%d",&x1,&y,&x2,&y2,&x3,&y3,&x4,&y4);
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
	a4=(x4-x3);
	b4=(y4-y3);
	c4=(a4*a4+b4*b4);
	printf("两点的距离为%f\n",c4);
	a5=(x4-x1);
	b5=(y4-y);
	c5=(a4*a4+b4*b4);
	printf("两点的距离为%f\n",c5);
	p1=(c1+c2+c3)/2;
	p2=(c3+c4+c5)/2;
	s1=sqrt(p1*(p1-c1)*(p1-c2)*(p1-c3));
	s2=sqrt(p2*(p2-c3)*(p2-c4)*(p2-c5));
	printf("三角形的面积为%f\n",s1);
	printf("三角形的面积为%f\n",s2);
	s=s1+s2;
	printf("该四边形的面积为%f\n",s);
}

