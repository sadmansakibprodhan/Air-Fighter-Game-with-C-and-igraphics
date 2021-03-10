# include "iGraphics.h"
int x=280,y=50;
int mx=330,my=116;
int ex=30,ey=400;
int e2x=100,e2y=850;
int e3x=200,e3y=700;
int e4x=300,e4y=450;
int e5x=400,e5y=1000;
int e6x=500,e6y=650;
int e7x=650,e7y=900;
int k=0;
int g=0;
int a=0,b=0,c=0,d=0,e=0,f=0,h=0,scr=1;
char str[4];
int cr=0,cr2=0,cr3=0,cr4=0,cr5=0,cr6=0,cr7=0;
void iDraw()
{
	if(g==0)
	{
		iShowBMP(0,0,"cover3.bmp");
		//iShowBMP(270,380,"play5.bmp");
		//iShowBMP(320, 200, "quit.bmp");
	}
	if(g==1)
	{
		iShowBMP(0,0,"nightsky7.bmp");
		iShowBMP(270,380,"play6.bmp");
		iShowBMP(310, 190, "quit1.bmp");
		iShowBMP(200, 500, "press.bmp");
	//iSetColor(255,0,0);
	//iText(300,500,"=> Press 's' to Shoot",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0, 255, 0);
	iText(5,770,"Sadman Sakib Prodhan",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(5,750,"ID:01115139",GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if(g==2)
	{

		iShowBMP(250,350,"play5.bmp");
		iShowBMP(0,0,"nightsky7.bmp");
		iShowBMP(mx,my,"misail.bmp");
		iShowBMP(x,y,"c1.bmp");
		iShowBMP(ex,ey,"enemy.bmp");
		iShowBMP(e2x,e2y,"enemy.bmp");
		iShowBMP(e3x,e3y,"enemy.bmp");
		iShowBMP(e4x,e4y,"enemy.bmp");
		iShowBMP(e5x,e5y,"enemy.bmp");
		iShowBMP(e6x,e6y,"enemy.bmp");
		iShowBMP(e7x,e7y,"enemy.bmp");
		iSetColor(255,0,0);
		iText(600,750,"SCORE:", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(690,750,str,GLUT_BITMAP_TIMES_ROMAN_24);
		if(cr==1||cr2==1||cr3==1||cr4==1||cr5==1||cr6==1||cr7==1)
		{
			//iShowBMP(0,0,"gameover.bmp");
			//iShowBMP(300, 100, "playagain.bmp");
			//iShowBMP(200, 200, "exit1.bmp");
			iShowBMP(0,0,"c.bmp");
			iShowBMP(x,y,"explosion.bmp");
			iShowBMP(110,350,"gameover5.bmp");
		}
	}
		
}
void enemymove()
{
	if(g==2)
	{
		ey -=20;
		e2y-=30;
		e3y-=20;
		e4y-=25;
		e5y-=20;
		e6y-=40;
		e7y-=35;
		if(ey<=0)
		{
			ey=800;
		}
		if(e2y<=0)
		{
			e2y=800;
		}
		if(e3y<=0)
		{
			e3y=800;
		}
		if(e4y<=0)
		{
			e4y=800;
		}
		if(e5y<=0)
		{
			e5y=800;
		}
		if(e6y<=0)
		{
			e6y=800;
		}
		if(e7y<=0)
		{
			e7y=800;
		}
	}
}
void misillemove()
{
	if(g==2)
	{
		if(k==1)
		{
			my+=100;
		}
		if(my>=800)
		{
			my=y+66;
			mx=x+50;
			k=0;
		}
	}
}
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
			if (mx >= 280 && mx <=550 && my >= 280 && my <= 450)
			{
				g=2;
	
			}
			else if(mx>=280 && mx<=550 && my>=150 && my<=250)
			{
			exit(0);
			}

	}
}
/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

void iKeyboard(unsigned char key)
{
	if(key=='s'||key=='S')
	{
		k=1;
	}
	if(key=='0')
	{
		k=1;
	}
	if(key=='1')
	{
		exit(0);
	}
}
void score()
{
	if(g==2)
	{
		if(my+60>=ey&&mx>=ex&&mx<=ex+80)
		{
		sprintf(str,"%d",scr);
		scr++;
		}
		if(my+60>=e2y&&mx>=e2x&&mx<=e2x+80)
		{
		sprintf(str,"%d",scr);
		scr++;
		}
	if(my+60>=e3y&&mx>=e3x&&mx<=e3x+80)
	{
		sprintf(str,"%d",scr);
		scr++;
	}
	if(my+60>=e4y&&mx>=e4x&&mx<=e4x+80)
	{
		sprintf(str,"%d",scr);
		scr++;
	}
	if(my+60>=e5y&&mx>=e5x&&mx<=e5x+80){
		sprintf(str,"%d",scr);
		scr++;}
	if(my+60>=e6y&&mx>=e6x&&mx<=e6x+80){
		sprintf(str,"%d",scr);
		scr++;}
	if(my+60>=e7y&&mx>=e7x&&mx<=e7x+80){
		sprintf(str,"%d",scr);
		scr++; }
	}
}
void iSpecialKeyboard(unsigned char key)
{
	if(key == GLUT_KEY_DOWN)
	{
		g=2;
	}
	if (key == GLUT_KEY_RIGHT)
	{
		x+=90;
		if(k==0)
		{
			mx+=90;
		if(mx+70>750)
			mx=750-70;
		}
		if(x+120>750)
		{
			x=750-120;
		}
		
	}
	if (key == GLUT_KEY_LEFT)
	{
		x-=90;
		if(k==0)
		{
			mx-=90;
		if(mx-50<=0)
			mx=50;
		}
		if(x<=0)
		{
			x=0;
		}
		
	}
	/*if(key==GLUT_KEY_UP)
	{
		y+=50;
		if(k==0)
		{
		my+=50;
		if(my+150-66>800)
			my=800-150+66;
		}
		if(y+150>800)
		{
			y=800-150;
		}

	}
	if(key==GLUT_KEY_DOWN)
	{
		y-=50;
		if(k==0){
			my-=50;
		if(my-66<=0)
			my=66;
		}
		if(y<=0)
		{
			y=0;
		}

	}*/

//place your codes for other keys here
}
void mslht()
{
	if(my+60>=ey&&mx>=ex&&mx<=ex+80)
		ey=1000;
	if(my+60>=e2y&&mx>=e2x&&mx<=e2x+80)
		e2y=1000;
	if(my+60>=e3y&&mx>=e3x&&mx<=e3x+80)
		e3y=1000;
	if(my+60>=e4y&&mx>=e4x&&mx<=e4x+80)
		e4y=1000;
	if(my+60>=e5y&&mx>=e5x&&mx<=e5x+80)
		e5y=1000;
	if(my+60>=e6y&&mx>=e6x&&mx<=e6x+80)
		e6y=1000;
	if(my+60>=e7y&&mx>=e7x&&mx<=e7x+80)
		e7y=1000;
}

void crash()
{
	if((ey<=y+146&&ex>=x&&ex<=x+120)||(ey<y+146&&ex==x+120&&ey+100>y)||(ey<y+150&&ex+60==x&&ey+100>y))
	{		
		cr=1;
	}
	if((e2y<=y+146&&e2x>=x&&e2x<=x+120)||(e2y<y+146&&e2x==x+120&&e2y+100>y)||(e2y<y+146&&e2x+60==x&&e2y+100>y))
	{
		cr2=1;
	}
if((e3y<=y+146&&e3x>=x&&e3x<=x+120)||(e3y<y+146&&e3x==x+120&&e3y+100>y)||(e3y<y+146&&e3x+60==x&&e3y+100>y))
	{
		cr3=1;
}
if((e4y<=y+150&&e4x>=x&&e4x<=x+100)||(e4y<y+146&&e4x==x+120&&e4y+100>y)||(e4y<y+146&&e4x+60==x&&e4y+100>y))
	{
		cr4=1;
}
if((e5y<=y+146&&e5x>=x&&e5x<=x+120)||(e5y<y+146&&e5x==x+120&&e5y+100>y)||(e5y<y+146&&e5x+60==x&&e5y+100>y))
	
		{
	
		cr5=1;}

if((e6y<=y+146&&e6x>=x&&e6x<=x+120)||(e6y<y+146&&e6x==x+120&&e6y+80>y)||(e6y<y+146&&e6x+60==x&&e6y+100>y))
{
	cr6=1;
}
if((e7y<=y+146&&e7x>=x&&e7x<=x+120)||(e7y<y+146&&e7x==x+120&&e7y+100>y)||(e7y<y+146&&e7x+60==x&&e7y+100>y))
	
		{
		cr7=1;}



}
void stop()
{
     if(cr==1||cr2==1||cr3==1||cr4==1||cr5==1||cr6==1||cr7==1)
		g=2;
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
void run()
{
	if(g==0)
	{
		g+=1;
	}
}

int main()
{
	//place your own initialization codes here..
	iSetTimer(50,enemymove);
	iSetTimer(10,misillemove);
	iSetTimer(10,mslht);
	iSetTimer(5,score);
	iSetTimer(10,crash);
	iSetTimer(1500,run);
	//iSetTimer(10,stop);
	//PlaySound("song\\abs",NULL,SND_LOOP|SND_ASYNC);
	iInitialize(750, 800, "demooo");
	return 0;
}	