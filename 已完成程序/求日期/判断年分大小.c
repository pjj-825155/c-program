#include<stdio.h>
main()
{
	int nian1,nian2,yue1,yue2,ri1,ri2;
	scanf("%d-%d-%d",&nian1,&yue1,&ri1);
	scanf("%d-%d-%d",&nian2,&yue2,&ri2);
	if(nian1<nian2)
	printf("%d-%d-%d\n",nian2,yue2,ri2);
	else
	if(nian1>nian2)
	printf("%d-%d-%d\n",nian1,yue1,ri1);
	else
	if(yue1<yue2)
	printf("%d-%d-%d\n",nian2,yue2,ri2);
	else
	if(yue1>yue2)
	printf("%d-%d-%d\n",nian1,yue1,ri1);
	else
	if(ri1<ri2)
	printf("%d-%d-%d\n",nian2,yue2,ri2);
	else
	printf("%d-%d-%d\n",nian1,yue1,ri1);		
}
