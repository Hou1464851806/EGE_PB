#include<graphics.h>

void menu_operation_draw(void)//draw the operations menu
{
	setcaption("δ����");
	clearviewport();
	setviewport(0, 0, 1080, 100);
	xyprintf(0, 0, "��ӭ����<δ����>����");
	xyprintf(0, 20, "1.����");
	xyprintf(0, 40, "2.����");
	xyprintf(0, 60, "3.�˳�");
}

void menu_painting_draw(void)//draw painting menu
{
	setviewport(0, 0, 1080, 100);
	clearviewport();
	xyprintf(0, 0, "��ӭ�滭");
	xyprintf(0, 20, "1.ֱ��");
	xyprintf(0, 40, "2.Բ");
	xyprintf(0, 60, "3.������");
	xyprintf(0, 80, "4.����");
}