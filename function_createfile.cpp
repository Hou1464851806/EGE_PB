#include <graphics.h>
#include "menu_draw.h"
#include "function_draw.h"
#include "variables.h"

int createfile(void)
{
	//show information
	cleardevice();
	xyprintf(0, 0, "未读取，已新建");
	delay_ms(1500);

	do
	{
		menu_operation_draw();
		k = getch();
		//select operations
		switch (k)
		{
		case '1':
			do
			{
				menu_painting_draw();
				k = getch();
				//select shapes
				switch (k)
				{
				case '1':
					draw_line(100, 100, 300, 300);
					break;
				case '2':
					draw_circle(100, 100, 200, 200);
					break;
				case '3':
					draw_square(100, 100, 200, 200);
					break;
				}
			} while (k != '4');//if k = 4 return to the operation menu
			break;
			//clear the canvas
		case '2':
			clear();
			break;
		}
	} while (k != '3');//if k is 3 exit
	return 0;
}