#include "turboc.h"

void main() // 
{
	setcursortype(NOCURSOR); // no 커서

	int x = 0;
	int dir = 1; // 우 1, 좌 -1
	while (1)
	{
	
			clrscr(); //화면 청소
			gotoxy(x, 0);
			puts("#");
			delay(1);
			gotoxy(x, 1);
			puts(" ");
			x = x + dir;// x + = dir;
			if (x == 80)
				dir = -1;
			else if (x == 0)
				dir = 1;		

	}

}