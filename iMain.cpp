#include "iGraphics.h"

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
//fot iSetColor
int r = 0;
int g = 0;
int b = 0;
bool musicOn = true;
#define screenWidth 1000
#define screenHeight 600


//for iCircle and iFilledCircle
/*int cx = 0;
int cy = 0;
int cr = 0;
int fcx = 0;
int fcy = 0;
int fcr = 0;
//for iLine and iFilledLine
int lx1 = 0;
int ly1 = 0;
int lx2 = 0;
int ly2 = 0;
int flx1 = 0;
int fly1 = 0;
int flx2 = 0;
int fly2 = 0;

//for iEllipse and iFilledEllipse
int ex = 0;
int ey = 0;
int ea = 0;
int eb = 0;
int fex = 0;
int fey = 0;
int fea = 0;
int feb = 0;

//for iRectangle and iFilledRectangle
int rx = 0;
int ry = 0;
int rdx = 0;
int rdy = 0;
int frx = 0;
int fry = 0;
int frdx = 0;
int frdy = 0;
*/

int x = 0;
int y = 0;


void iDraw()
{
	iClear();
	iSetColor(r, g, b);

	//iFilledCircle(x+50,y+50,15,1000);
	iSetColor(r, g, b);
	iText(x, y, "My First Project", GLUT_BITMAP_TIMES_ROMAN_24);
	//iRectangle(rx,ry, rdx, rdy);
	//iPoint(100, 200, 10);
	//iFilledCircle(x+10, y+27, 2,1000);
	//iFilledCircle(fcx, fcy, fcr,1000);
	//iLine(x+10, y+25, x+10, y+20);
	//iLine(x + 10, y + 25, x + 15, y + 20);
	//iLine(x+10, y+25, x+5, y+20);
	//iLine(x + 15, y + 20, x + 5, y + 15);
	//iLine(x + 15, y + 20, x + 15, y + 15 );
	//iEllipse(ex, ey, ea, eb, 1000);
	//iFilledEllipse(fex, fey, fea, feb);
	//iSetColor(r,g, b);


}






/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/

void iMouse(int button, int state, int mx, int my){
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		x = mx + 150;
		y = my + 20;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		r = 255;
		g = 0;
		b = 0;
	}


}
void iMouseMove(int mx, int my)
{
	x = mx - 150;
	y = my - 20;
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}
/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == 'w')
	{
		y += 10;
	}
	else if (key == 's'){
		y -= 10;
	}
	else if (key == 'a'){

		x -= 10;
	}
	else if (key == 'd'){
		x += 10;
	}
	else if (key == 'r'){
		 r = 255;
		 g = 0;
		 b = 0;

	}
	else if (key == 'g'){
		r = 0;
		g = 255;
		b = 0;
	}

	else if (key == 'b'){
		r = 0;
		g = 0;
		b = 255;
	}
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
		x += 10;
	}
	else if (key == GLUT_KEY_LEFT)
	{
		x -= 10;
	}
	
	else if (key == GLUT_KEY_UP)
	{
		//if(!musicOn)
			//PlaySound(0,0,0);
	}
	else if (key == GLUT_KEY_DOWN)
	{
		y -= 10;
	}
	else if (key == GLUT_KEY_INSERT)
	{
		r = 0;
		g = 0;
		b = 255;
	}
	else if (key == GLUT_KEY_F5)
	{
		r = 0;
		g = 255;
		b = 0;
	}

	
}
int dx = 10;
int dy = 10;
void change(){
	x = x + dx;
	y = y + dy;
	r = rand() % 255;
	g = rand() % 255;
	b = rand() % 255;
	if (x >= screenWidth-200|| x <= 0)
		dx = dx*(-1);
	if (y >= screenHeight-50|| y <= 0)
		dy = dy*(-1);

}


int main()
{
	///srand((unsigned)time(NULL));
	iSetTimer(20, change);
	//if (musicOn)
		//PlaySound("music\\whiplash1.wav", NULL, SND_LOOP);
	iInitialize(screenWidth,screenHeight , "Walking Man");
	///updated see the documentations
	iStart();
	return 0;
}