#include<stdio.h>
main()
{
    int x,y,z,n;
    int yue,nian;
    scanf("%d,%d,%d",&x,&y,&z);
    scanf("%d",&n);
    yue=(y+n)%12;
    nian=x+(y+n)/12;
    printf("%d-%d-%d\n",nian,yue,z);
}
