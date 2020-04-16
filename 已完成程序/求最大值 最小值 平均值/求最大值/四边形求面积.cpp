#include<stdio.h>
#include<math.h>
main()
{
	/*通过斜率确定对角线*/
	int a,b,c,min,mid,max;
	scanf("%d%d%d%d%d%d%d%d",&x1,&y,&x2,&y2,&x3,&y3,&x4,&y4);
	a=(y2-y)/(x2-x1);
	b=(y3-y)/(x3-x1);
	c=(y4-y)/(x4-x1);
	if(a<b)
	min=a;
	
	printf("最大值是：%d",max);
 } 
