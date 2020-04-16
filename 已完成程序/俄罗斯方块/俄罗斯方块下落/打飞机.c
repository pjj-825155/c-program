#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
void gotoxy(int x,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int m=78,n=15,i=0;
int zi_dan_x[50],zi_dan_y[50]; 

void plane(int x,int y)
{
	gotoxy(x,y);
	printf("¡ö");
	gotoxy(x-2,y+1);
	printf("¡ö¡ö¡ö");
	gotoxy(x-4,y+2);
	printf("¡ö¡ö¡ö¡ö¡ö");
	Sleep(50);
	gotoxy(x,y);
	printf("  ");
	gotoxy(x-2,y+1);
	printf("      ");
	gotoxy(x-4,y+2);
	printf("          ");
}

void fang_xiang(char c)
{
	if(c=='a'&&m!=54)
	m=m-2;
	if(c=='d'&&m!=100)
	m=m+2;
	if(c=='s'&&n!=36)
	n++;
	if(c=='w'&&n!=1)
	n--;
}

void bian_kuang()
{
	int i,y;
	gotoxy(51,0);
	for(i=0;i<56;i++)
	printf("-");
	gotoxy(51,39);
	for(i=0;i<56;i++)
	printf("-");
	for(i=0,y=1;i<38;i++,y++)
	{
		gotoxy(49,y);
		printf("|");
	}
	for(i=0,y=1;i<38;i++,y++)
	{
		gotoxy(106,y);
		printf("|");
	}
}

void qiang()
{
	int di;
	srand(time(NULL));
	di=(rand()%24)*2+54;
	gotoxy(di,1);
	printf("¡ö");
}

void fa_she(int m,int n)
{
	if(i==49)
		i=0;
	zi_dan_x[i]=m;
	zi_dan_y[i]=n;
	gotoxy(zi_dan_x[i],zi_dan_y[i]);
	printf("¡ö");
	i++;
}

main()
{
	int x,y,k,flag;
	char c;
	bian_kuang();
	for(k=0;k<=50;k++)
		zi_dan_y[k]=1;
	while(1)
	{
		c=27;
		if(kbhit())
		{
			c=getch();
			if(c==27)
			break; 
		}
		for(k=0;k<50;k++)
		{
			if(zi_dan_y[k]==1)
			{
				gotoxy(zi_dan_x[k],zi_dan_y[k]);
				printf("  ");
				continue;
			}
			gotoxy(zi_dan_x[k],zi_dan_y[k]);
			printf("  ");
			if(zi_dan_y[k]!=1) 
				zi_dan_y[k]--;
			gotoxy(zi_dan_x[k],zi_dan_y[k]);
			printf("¡ö");
		}
		fang_xiang(c);
		plane(m,n);
		//qiang();
		fa_she(m,n);
	} 
}

