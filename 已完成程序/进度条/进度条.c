//光标的处理
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void gotoxy(int x,int y){
 COORD coord;
 coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), coord );
}

int main()
{
	int m,n,i;
	m=0;
	n=13;
	i=1;
	while(n>0 && n<25 &&i<101)
	{
		srand(time(NULL));
		gotoxy(m,n);
		printf("\xa1\xf6%d%%",i);
		Sleep(100+rand()%901);
		m=m+2;;
		i=i+3;
	 } 

 
 return 0;
}
