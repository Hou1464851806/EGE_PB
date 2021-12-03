#include<graphics.h>

void menu_operation_draw(void)//draw the operations menu
{
	setcaption("未命名");
	clearviewport();
	setviewport(0, 0, 1080, 100);
	xyprintf(0, 0, "欢迎进入<未命名>画板");
	xyprintf(0, 20, "1.作画");
	xyprintf(0, 40, "2.清屏");
	xyprintf(0, 60, "3.退出");
}

void menu_painting_draw(void)//draw painting menu
{
	setviewport(0, 0, 1080, 100);
	clearviewport();
	xyprintf(0, 0, "欢迎绘画");
	xyprintf(0, 20, "1.直线");
	xyprintf(0, 40, "2.圆");
	xyprintf(0, 60, "3.长方形");
	xyprintf(0, 80, "4.返回");
}