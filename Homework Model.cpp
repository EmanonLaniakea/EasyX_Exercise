//To do:
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main() {
	_getch();
	initgraph(500, 500,EX_NOCLOSE);

	_getch();
	closegraph();
	initgraph(600, 500,EX_NOCLOSE);

	_getch();
	setbkcolor(BLUE);
	cleardevice();
	_getch();
	setfillcolor(GREEN);
	setlinecolor(RED);
	fillrectangle(10, 10, 50, 50);
	_getch();
	closegraph();


	return 0;
}