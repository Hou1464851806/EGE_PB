/*
class:2021211317
number:2021211440
version:lab 2
*/

//import lib
#include <graphics.h>
#include "initialization.h"
#include "menu_draw.h"
#include "function_draw.h"
#include "variables.h"
#include "function_createfile.h"
#include "function_readfile.h"

int main()
{
	//initialize the window
	initialization();
	k = getch();//get a keyboard

	if (k == '2')//create a new file
	{
		createfile();
	}
	else
	{
		readfile();//function read files is not ready
	}

	closegraph();//exit
	return 0;
}