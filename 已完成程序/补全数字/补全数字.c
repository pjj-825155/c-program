#include<stdio.h>
main()
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10; 
	while(1)
	{
		scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
		if(n1==0 && n2==0 && n3==0 && n4==0 && n5==0)
		break;
		if((n2-n1)==(n3-n2) && (n4-n3)==(n3-n2) && (n5-n4)==(n4-n3))
		{
			n6=n5+(n2-n1);
			n7=n6+(n2-n1);
			n8=n7+(n2-n1);
			n9=n8+(n2-n1);
			n10=n9+(n2-n1);
		}
		if((n2/n1)==(n3/n2) && (n4/n3)==(n3/n2) && (n5/n4)==(n4/n3))
		{
			n6=n5*(n2/n1);
			n7=n6*(n2/n1);
			n8=n7*(n2/n1);
			n9=n8*(n2/n1);
			n10=n9*(n2/n1);
		}
		if((n3==(n1+n2)) && (n4==(n2+n3)) && (n5==(n3+n4)))
		{
			n6=n5+n4;
			n7=n6+n5;
			n8=n7+n6;
			n9=n8+n7;
			n10=n9+n8;
		} 
		printf("%d %d %d %d %d\n",n6,n7,n8,n9,n10);
	}
}
