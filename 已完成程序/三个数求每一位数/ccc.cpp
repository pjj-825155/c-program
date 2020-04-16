#include<stdio.h>
main()
{
 int a,b,c,d;
 scanf("%d",&d);
 a=d/100;
 b=(d%100)/10;
 c=(d%100)%10; 
 printf("%d,%d,%d\n",a,b,c);
 
}
