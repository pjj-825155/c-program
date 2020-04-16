#include<stdio.h>
#define PI 3.1415926
int main(void)
{
	float r;
	printf("请输入圆的半径： ");
	scanf("%f",&r);
	printf("圆的周长为：%f\n",2*PI*r);
	printf("圆的面积为：%f\n",PI*r*r);
	return 0;
}

