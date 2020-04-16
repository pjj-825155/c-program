#include<stdio.h>

int main()

{

while('true')

{

int i,a[3][3],j,sum1,sum2,sum;

for(i=0;i<3;i++)

{

for(j=0;j<3;j++)

scanf("%d",&a[i][j]);

}

sum1=a[0][2]*a[1][0]*a[2][1]+a[0][1]*a[1][2]*a[2][0]+a[0][0]*a[1][1]*a[2][2];

sum2=a[2][2]*a[0][1]*a[1][0]+a[2][1]*a[1][2]*a[0][0]+a[0][2]*a[1][1]*a[2][0];

sum=sum1-sum2;

printf("%d",sum);

}

}

