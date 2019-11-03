#include <GL/glut.h>
#include <iostream>
#include <ctime>
#include<stdio.h>
using namespace std;
#include <stdlib.h>
float y1=-20,y2=-30,y3=-30,y4=-20,y5=-24,y6=-26,y7=-26,y8=-24,y9=-20,y10=-30,y11=-30,y12=-20,m,o,lv=1;
time_t now ;
time_t now1;
time_t now2;
time_t now3;
int fl=0,wl;
int startflag=0,controlflag=0,htp=0,aboutflag=0,welflag=1,menuflag=0,chance=3,winflag=0,lflag=0;
int i,j,k,w;
char wel[100]="             WELCOME TO 'LIFT IT' GAME...";
char st[100]="Press S to Start";
char start[50]="1: START GAME.";
char controls[50]="2: HOW TO PLAY.";
char about[50]="3: ABOUT GAME.";
char levels[50]="4: LEVELS.";
char control1[500]="HI...\n TO START WITH GAME, AN OBJECT WILL AT THE BOTTOM.";
char control2[200]="YOU HAVE TO 'MOVE' THAT OBJECT BY CLICKING LEFT BUTTON OF THE MOUSE ";
char control3[200]="YOU HAVE TO CLICK THE MOUSE BUTTON WITH NOT MORE THAN 1 SEC OF DELAY ..";
char control4[200]="THERE WILL BE THREE CHANCES .";
char control5[200]="press '1' to START GAME and '3' to go 'ABOUT GAME' or LEFT CLICK to go back.";
char about1[100]="WELL, THE GAME NAME IS 'LIFT IT!!!'.";
char about2[100]="THIS GAME IS DEVELOPED BY GAURAV SHARMA AND PRAJWAL SHENOY ";
char about3[100]="FROM 6TH SEM CS USING OPENGL AS PART OF MINIPROJECT.";
char about4[100]="press '1' to START GAME or '2' to go 'HOW TO PLAY GAME' or B to go back.";
char win[100]="You Won";
char lose[100]="You Lose";
char bl[100]="Better Luck Next Time!";
char chances[20]="Chance = ";
char timetaken[20]="Time Taken : ";
char se[20]=" seconds";
char ch;
int t1,t2,t3,t4;
void welcome()
{
        controlflag=0,htp=0,aboutflag=0,startflag=0;
        glColor3f(0.0,0.0,0.0);											//to  display the score on the display window
        glRasterPos2f(-40,0);
        for(k=0;k<sizeof(wel);k++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,wel[k]);
        glColor3f(0.0,0.0,0.0);											//to  display the score on the display window
        glRasterPos2f(-20,-20);
        for(k=0;k<sizeof(st);k++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,st[k]);
        glEnd();
        glFlush();
}

void menug()
{
        y1=-20,y2=-30,y3=-30,y4=-20,y5=-24,y6=-26,y7=-26,y8=-24,y9=-20,y10=-30,y11=-30,y12=-20;
        t1=0;t2=0;t3=0;t4=0;
        now=now1=now2=now3=0;
        startflag=0,controlflag=0,htp=0,aboutflag=0,welflag=0,menuflag=1,chance=3,winflag=0,lflag=0;
        glColor3f(0.5,0.1,0.7);
        glRasterPos2f(0,30);
        for(w=0;w<sizeof(start);w++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,start[w]);
        glColor3f(0.5,0.1,0.7);
        glRasterPos2f(0,20);
        for(w=0;w<sizeof(controls);w++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,controls[w]);
        glColor3f(0.5,0.1,0.7);
        glRasterPos2f(0,10);
        for(w=0;w<sizeof(about);w++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,about[w]);
        glEnd();
        glFlush();
}

void startg()
{
        glBegin(GL_POLYGON);
        glColor3f(25/255,25/255,112/255);
        glVertex2f(-30,y1);
        glVertex2f(-20,y4);
        glVertex2f(-20,y3);
        glVertex2f(-30,y2);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex2f(-20,y5);
        glVertex2f(-20,y6);
        glVertex2f(20,y7);
        glVertex2f(20,y8);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex2f(30,y9);
        glVertex2f(30,y10);
        glVertex2f(20,y11);
        glVertex2f(20,y12);
        glEnd();

        glColor3f(47/255,79/255,79/255);
        glBegin(GL_POLYGON);
        glVertex2f(-60,-45);
        glVertex2f(-55,-45);
        glVertex2f(-55,45);
        glVertex2f(-60,45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-55,43);
        glVertex2f(55,43);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex2f(60,-45);
        glVertex2f(55,-45);
        glVertex2f(55,45);
        glVertex2f(60,45);
        glEnd();

        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(65,40);
        for(w=0;w<sizeof(chances);w++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,chances[w]);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,chance+48);
        glEnd();

        glFlush();
}

void controlsg()
{
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-40,40);
        for(w=0;w<sizeof(control1);w++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,control1[w]);
        glRasterPos2f(-40,30);
        for(w=0;w<sizeof(control2);w++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,control2[w]);
        glRasterPos2f(-40,20);
        for(w=0;w<sizeof(control3);w++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,control3[w]);
        glRasterPos2f(-40,10);
        for(w=0;w<sizeof(control4);w++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,control4[w]);
        glRasterPos2f(-40,0);
        for(w=0;w<sizeof(control5);w++)
        glEnd();

        glFlush();
}

void aboutg()
{
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-40,45);
        for(w=0;w<sizeof(about1);w++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,about1[w]);
        glRasterPos2f(-40,40);
        for(w=0;w<sizeof(about2);w++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,about2[w]);
        glRasterPos2f(-40,30);
        for(w=0;w<sizeof(about3);w++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,about3[w]);
        glRasterPos2f(-40,20);
        for(w=0;w<sizeof(about4);w++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,about4[w]);
        glEnd();

        glFlush();
}

void wing()
{
        startflag=0,controlflag=0,htp=0,aboutflag=0,welflag=0,menuflag=0,chance=3,lflag=0;

        glRasterPos2f(0,0);
        for(w=0;w<sizeof(win);w++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,win[w]);
        glEnd();

        glRasterPos2f(-2,-5);
        for(w=0;w<sizeof(timetaken);w++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,timetaken[w]);

        t2=t1%10;
        t4=t1/10;
        t3=t4%10;

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t3+48);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t2+48);

        for(w=0;w<sizeof(se);w++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,se[w]);

        y1=-20,y2=-30,y3=-30,y4=-20,y5=-24,y6=-26,y7=-26,y8=-24,y9=-20,y10=-30,y11=-30,y12=-20;
        now=0;
        now1=0;
        now2=0;
        now3=0;

        glEnd();

        glFlush();
}

void loseg()
{
        startflag=0,controlflag=0,htp=0,aboutflag=0,welflag=0,menuflag=0,chance=3;
        glRasterPos2f(0,0);
        for(w=0;w<sizeof(lose);w++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,lose[w]);
        glEnd();

        glRasterPos2f(-2,-5);
        for(w=0;w<sizeof(bl);w++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,bl[w]);
        y1=-20,y2=-30,y3=-30,y4=-20,y5=-24,y6=-26,y7=-26,y8=-24,y9=-20,y10=-30,y11=-30,y12=-20;
        glEnd();

        glFlush();
}
void display()
{

     glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
     if(welflag==1)
    {
        welcome();
    }

    if(menuflag==1)
    {
        menug();
    }

   if(startflag==1)
    {
        startg();
    }

    if(controlflag==1)
    {
        controlsg();

    }
   if(aboutflag==1)
    {
        aboutg();

    }
    if(winflag==1)
    {

        wing();
    }
    if(lflag==1)
    {
        loseg();

    }

}

void keyboard(unsigned char key,int mx,int my)
{
if(key=='s' || key =='S')
{
    startflag=0,controlflag=0,htp=0,aboutflag=0,welflag=0,menuflag=1,winflag=0,lflag=0,chance=3;
    now=0;
        now1=0;
        now2=0;
        now3=0;
        t1=0;t2=0;t3=0;t4=0;
}
if(key=='1')
{
    startflag=1,controlflag=0,htp=0,aboutflag=0,welflag=0,menuflag=0,winflag=0,lflag=0,chance=3;
}
if(key=='2')
{
    startflag=0,controlflag=1,htp=0,aboutflag=0,welflag=0,menuflag=0,winflag=0,lflag=0;
}
if(key=='3')
{
    startflag=0,controlflag=0,htp=0,aboutflag=1,welflag=0,menuflag=0,winflag=0,lflag=0;
}
if(key=='b' || key=='B')
{
    startflag=0,controlflag=0,htp=0,aboutflag=0,welflag=0,menuflag=1,winflag=0,lflag=0,chance=3;
    now=0;
        now1=0;
        now2=0;
        now3=0;
        t1=0;t2=0;t3=0;t4=0;
}
glutPostRedisplay();
}



void mouse(int btn,int state,int x,int y)
{
    int i,j;
    if(chance>0&&startflag==1)
    {
        startflag=1,controlflag=0,htp=0,aboutflag=0,welflag=0,menuflag=0;


        if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
        {
            now = time(0);
            printf("%f",m);
            if(fl>0)
            {
                o=(now-now1);
                printf("%f\n",o);

                if(o>1)
                {

                   y1=-20,y2=-30,y3=-30,y4=-20,y5=-24,y6=-26,y7=-26,y8=-24,y9=-20,y10=-30,y11=-30,y12=-20;
                   chance-=1;
                   printf("Lose");
                   if(chance==0)
                   {
                       chance=3;
                       now=0;
        now1=0;
        now2=0;
        now3=0;
        t1=0;t2=0;t3=0;t4=0;
                    lflag=1;


                   }


               }
            else
            {

                if(lv==1)
            {
                y1+=2;y2+=2;y3+=2;y4+=2;y5+=2;y6+=2;y7+=2;y8+=2;y9+=2;y10+=2;y11+=2;y12+=2;
            }
            if(lv==2)
            {
                y1+=1;y2+=1;y3+=1;y4+=1;y5+=1;y6+=1;y7+=1;y8+=1;y9+=1;y10+=1;y11+=1;y12+=1;
            }
            if(lv==3)
            {
              y1+=0.5;y2+=0.5;y3+=0.5;y4+=0.5;y5+=0.5;y6+=0.5;y7+=0.5;y8+=0.5;y9+=0.5;y10+=0.5;y11+=0.5;y12+=0.5;
            }
                if(y5>=43)
                {
                    printf("Win");
                    glColor3f(0.0,0.0,0.0);
                    now3=time(0);
                    t1=int(now3-now2);
                    winflag=1;



                }
            }
        }
        else
        {
            if(lv==1)
            {
                y1+=2;y2+=2;y3+=2;y4+=2;y5+=2;y6+=2;y7+=2;y8+=2;y9+=2;y10+=2;y11+=2;y12+=2;
            }
            if(lv==2)
            {
                y1+=1;y2+=1;y3+=1;y4+=1;y5+=1;y6+=1;y7+=1;y8+=1;y9+=1;y10+=1;y11+=1;y12+=1;
            }
            if(lv==3)
            {
              y1+=0.5;y2+=0.5;y3+=0.5;y4+=0.5;y5+=0.5;y6+=0.5;y7+=0.5;y8+=0.5;y9+=0.5;y10+=0.5;y11+=0.5;y12+=0.5;
            }
            now2=time(0);
            fl=1;
        }
	}
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_UP)
    {
       now1= time(0);
         if(now1-now>1)
            {
                y1=-20,y2=-30,y3=-30,y4=-20,y5=-24,y6=-26,y7=-26,y8=-24,y9=-20,y10=-30,y11=-30,y12=-20;
                   chance-=1;
                   printf("Lose");

            }

    }
	}
	else if(chance<=0){
        lflag=1;
	}
	glutPostRedisplay();
}

void myReshape(int w,int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w<=h)
    {
        glOrtho(-50,50,-50*(GLfloat) h/(GLfloat) w,50*(GLfloat) h/(GLfloat) w,-10,10);

    }
    else
    {
        glOrtho(-50*(GLfloat) w/(GLfloat) h,50*(GLfloat) w/(GLfloat) h,-50,50,-10,10);
        glMatrixMode(GL_MODELVIEW);
        glutPostRedisplay();
    }
}

void menu(int id)
{
    switch(id)
    {
    case 1:
        menug();
        break;
    case 2:
        lv=1;
        menug();
        break;
    case 3:
        lv=2;
        menug();
        break;

 case 4:
        lv=3;
        menug();
        break;
 case 5:
        exit(0);
        break;



    }
    glutPostRedisplay();
}

int main(int argc,char **argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(640,480);
    glutCreateWindow("LIFT IT");
    glutReshapeFunc(myReshape);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutCreateMenu(menu);
    glutAddMenuEntry("    Main Menu    ",1);
    glutAddMenuEntry("     Level 1   ",2);
    glutAddMenuEntry("     Level 2   ",3);
    glutAddMenuEntry("     Level 3   ",4);
    glutAddMenuEntry("    Exit    ",5);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glClearColor(0.8,0.8,1,0.6);
    glutMainLoop();
    return 0;
}
