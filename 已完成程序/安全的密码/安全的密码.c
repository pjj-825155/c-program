#include<stdio.h>
#include<string.h>
main()
{
	int num;
	char mima[100];
	scanf("%d",&num);
	while(num>0)
	{
		scanf("%s",mima);
		if(is_right(mima)&&number(mima))
		printf("YES\n");
		else
		printf("NO\n");
		num--;
	}
}
int is_right(char mima[])
{
	if((is_daxie(mima)>0&&is_xiaoxie(mima)>0&&is_shuzi(mima)>0))
	return 1;
	if((is_daxie(mima)>0&&is_xiaoxie(mima)>0&&is_teshu(mima)>0))
	return 1;
	if((is_daxie(mima)>0&&is_teshu(mima)>0&&is_shuzi(mima)>0))
	return 1;
	if((is_teshu(mima)>0&&is_xiaoxie(mima)>0&&is_shuzi(mima)>0))
	return 1;
	return 0;
}
int number(char mima[])
{
	if(strlen(mima)>=8 && strlen(mima)<=16)
	return 1;
	return 0;
}
int is_daxie(char mima[])
{
	int i,sum=0;
	for(i=0;i<strlen(mima);i++)
	{
		if(mima[i]>='A'&&mima[i]<='Z')
		sum++;
	}
	return sum;
}
int is_xiaoxie(char mima[])
{
	int i,sum=0;
	for(i=0;i<strlen(mima);i++)
	{
		if(mima[i]>='a'&&mima[i]<='z')
		sum++;
	}
	return sum;
}
int is_shuzi(char mima[])
{
	int i,sum=0;
	for(i=0;i<strlen(mima);i++)
	{
		if(mima[i]>='0'&&mima[i]<='9')
		sum++;
	}
	return sum;
}
int is_teshu(char mima[])
{
	int i,sum=0;
	for(i=0;i<strlen(mima);i++)
	{
		if(mima[i]=='~')
		sum++;
		if(mima[i]=='!')
		sum++;
		if(mima[i]=='@')
		sum++;
		if(mima[i]=='#')
		sum++;
		if(mima[i]=='$')
		sum++;
		if(mima[i]=='%')
		sum++;
		if(mima[i]=='^')
		sum++; 
	}
	return sum;
}
