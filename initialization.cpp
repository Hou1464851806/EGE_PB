#include<graphics.h>

void initialization(void)
{
	//initialize the window
	initgraph(1080, 720);
	setbkcolor(WHITE);
	ege_enable_aa;//open special draw mode

	//initialize the welcome interface
	setcolor(BLACK);
	setfont(20, 0, "����");
	xyprintf(0, 0, "��ӭʹ�øû������");
	xyprintf(0, 20, "1.��ȡ�ļ�");
	xyprintf(0, 40, "2.�½��ļ�");
}

