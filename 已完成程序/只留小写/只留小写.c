#include<stdio.h>
main()
{
	int i,m; 
	char a[100];
	i=0;
	while((a[i]=getchar()) !=EOF)
	{
		i++;
	}
	m=i;
	i=0;
	while(i<m)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		putchar(a[i]);
		i++;
	}
	printf("\n");
}
