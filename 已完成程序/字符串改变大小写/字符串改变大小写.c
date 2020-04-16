#include<stdio.h>
#include<string.h>
main()
{
	int num,i,k;
	char chuan[100];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%s",chuan);
		for(k=0;k<strlen(chuan);k++)
		{
			if(chuan[k]>='A' && chuan[k]<='Z')
			chuan[k]=chuan[k]-'A'+'a';
			if(chuan[k]=='a' || chuan[k]=='e' || chuan[k]=='i' || chuan[k]=='o' || chuan[k]=='u')
			chuan[k]=chuan[k]-'a'+'A';
		}
		printf("%s\n",chuan);
	} 
}
