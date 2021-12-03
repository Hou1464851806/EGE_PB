#include<graphics.h>

void draw_line(double x1, double y1, double x2, double y2)
{
	setviewport(0, 100, 1080, 720);
	setcolor(BLACK);
	setfillcolor(BLACK);
	ege_line(x1, y1, x2, y2);//draw a line
}

void draw_circle(double x, double y, double width, double height)
{
	setviewport(0, 100, 1080, 720);
	setcolor(BLACK);
	ege_ellipse(x, y, width, height);//draw a circle
}

void draw_square(double x, double y, double width, double height)
{
	setviewport(0, 100, 1080, 720);
	setcolor(BLACK);
	ege_rectangle(x, y, width, height);//draw a square
}

void clear(void)
{
	setviewport(0, 100, 1080, 720);
	clearviewport();//clear the canavas
}