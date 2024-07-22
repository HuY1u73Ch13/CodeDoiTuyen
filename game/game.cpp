#include<iostream>
#include "console.h"
void gotoXY (int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main ()
{
    gotoXY(20.5);
    cout<<"heloo";
    return 0;
}
