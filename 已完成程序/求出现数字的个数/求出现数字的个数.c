#include<stdio.h>
main()
{
	int n,i,x,a[10000],sum[10000]; 
	scanf("%d",&n);
	i=0;
	//¼�� 
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	} 
	//�жϸ��� 
	x=1;
	while(x<=10000)
	{
		sum[x]=0;
		i=0;
		while(i<n)
		{
			if(x==a[i])
			sum[x]++;
			i++;
		}
		x++;
	}
	//�ж�sun[x]�Ƿ�Ϊ�� ���
	x=1;
	while(x<=10000)
	{
		if(sum[x]!=0)
		printf("%d %d\n",x,sum[x]);
		x++;
	} 
}
