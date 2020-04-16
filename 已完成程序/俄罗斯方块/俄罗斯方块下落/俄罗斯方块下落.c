#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void gotoxy(int x,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int m=24,n=25;

void plane(int x,int y)
{
	gotoxy(x,y);
	printf("\xa1\xf6");
	gotoxy(x-2,y+1);
	printf("\xa1\xf6\xa1\xf6\xa1\xf6");
	gotoxy(x-4,y+2);
	printf("\xa1\xf6\xa1\xf6\xa1\xf6\xa1\xf6\xa1\xf6");
	zi_dan(m,n);
	gotoxy(x,y);
	printf("        ");
	gotoxy(x-2,y+1);
	printf("                        ");
	gotoxy(x-4,y+2);
	printf("                                        ");
}

void fang_xiang(char c)
{
	if(c=='a'&&m!=4)
	m=m-2;
	if(c=='d'&&m!=50)
	m=m+2;
	if(c=='s'&&n!=25)
	n++;
	if(c=='w'&&n!=0)
	n--;
}

void zi_dan(int x,int y)
{
	while(y!=0)
	{
		y--;
		gotoxy(x,y);
		printf("\xa1\xf6");
		Sleep(100);
		gotoxy(x,y);
		printf("        ");
	}
}

main()
{
	int x,y;
	char c,c1;
	while(1)
	{
		c=27;
		if(kbhit())
		{
			c1=getch();
			if(c1==27)
			break;
			if(c!='d'&&c1=='a')
			c=c1;
			else if(c!='a'&&c1=='d')
			c=c1;
			else if(c!='w'&&c1=='s')
			c=c1;
			else if(c!='s'&&c1=='w')
			c=c1; 
		}
		fang_xiang(c);
		plane(m,n);
		
	} 
}

