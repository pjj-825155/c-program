#include<stdio.h>
main()
{
	int a;
	while((a=getchar())!=EOF)
	{
		if(((a>='A') && (a<='Z')) || ((a>='a') && (a<='z')))
		printf("%c",a);
	}
}
