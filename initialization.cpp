#include<graphics.h>

void initialization(void)
{
	//initialize the window
	initgraph(1080, 720);
	setbkcolor(WHITE);
	ege_enable_aa;//open special draw mode

	//initialize the welcome interface
	setcolor(BLACK);
	setfont(20, 0, "黑体");
	xyprintf(0, 0, "欢迎使用该画板程序：");
	xyprintf(0, 20, "1.读取文件");
	xyprintf(0, 40, "2.新建文件");
}

