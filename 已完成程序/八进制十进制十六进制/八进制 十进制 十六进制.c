#include<stdio.h>
int main(void)
{
	int x=567;
	int y=0123;
	int z=0xBD;
	printf("十进制%u转换为八进制%o十六进制%x\n",x,x,x);
	printf("八进制%o转换为十进制%u十六进制%x\n",y,y,y);
	printf("十六进制%x转换为八进制%o十进制%u\n",z,z,z);
	return 0;
}
