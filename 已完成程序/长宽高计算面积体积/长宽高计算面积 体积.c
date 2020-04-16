#include<stdio.h>
int a1,a2,a3;
int vol(int a,int b,int c)
{
	int v;
	v=a*b*c;
	a1=a*b;
	a2=b*c;
	a3=a*c;
	return v; 
 } 
 void main()
 {
 	int v,l,w,h;
	 printf("输入 长 宽 高\n");
	 scanf("%d%d%d",&l,&w,&h);
	 v=vol(l,w,h);
	 printf("体积=%d s1=%d s2=%d s3=%d\n",v,a1,a2,a3); 
  } 
