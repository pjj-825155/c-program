#include<stdio.h>
#include<string.h>
main()
{
	int num;
	char shu[100];
	scanf("%d",&num);
	while(num>0)
	{
		scanf("%s",shu);
		if(pan_duan(shu))
		printf("YES\n");
		else
		printf("NO\n");
		num--;
	}
}

int  pan_duan(int shu[])
{
	if(!point(shu))
	return 0;
	if(!have(shu))
	return 0;
	if(!number(shu))
	return 0;
	if(!shou_wei(shu))
	return 0;
	return 1;
}

int point(char shu[])
{
	int sum=0,i;
	for(i=0;i<strlen(shu);i++)
	{
		if(shu[i]=='.')
		sum++;
	}
	if(sum==3)
	return 1;
	return 0;
}

int have(char shu[])
{
	int i;
	for(i=0;i<strlen(shu);i++)
	{
		if((shu[i]<'0' || shu[i]>'9') && (shu[i]!='.'))
		return 0;
	}
	return 1;
}

int number(char shu[])
{
	int sum=0,i,a=1;
	for(i=strlen(shu)-1;i>0;i--)
	{
		if(shu[i]=='.')
		{
			sum=0;
			a=1;
			continue;
		}
		sum=sum+(shu[i]-'0')*a;
		a=a*10;
		if(sum>255)
		return 0;
	}
	return 1;
}

int shou_wei(char shu[])
{
	int i;
	for(i=0;i<strlen(shu);i++)
	{
		if(shu[i]==shu[i+1] && shu[i]=='.')
		return 0;
		if(shu[i]=='.' && shu[i+1]=='0')
		return 0;
	}
	if(shu[0]=='0')
	return 0;
	if(shu[0]=='.')
	return 0;
	if(shu[i-1]=='.')
	return 0;
	return 1;
}
