#include<stdio.h>
int main()
{
	int i,a,b,k,num;
	a=1;
	k=0;
	while(scanf("%d",&num)!=EOF)
	{
		k=0;
		a=1;
		while(a<=100000)
		{
	 		i=2;
	 		while(i<=a)
			{
				if(a%i==0)
	  			{
					break;
	  			} 
	 			i=i+1;
			}
    		if(i==a)
			{
				b=i;
				k++;
				if(k==num)
				break;
    		}
   			a=a+1;
   		}
   		printf("%d\n",b);
	}
}
	
