#include<stdio.h>
int main(void)
{
	int x=567;
	int y=0123;
	int z=0xBD;
	printf("ʮ����%uת��Ϊ�˽���%oʮ������%x\n",x,x,x);
	printf("�˽���%oת��Ϊʮ����%uʮ������%x\n",y,y,y);
	printf("ʮ������%xת��Ϊ�˽���%oʮ����%u\n",z,z,z);
	return 0;
}
