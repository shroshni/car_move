#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

GLint b=300;
float  counter=0.0;

void SUN(int x,int y)
{
    glLoadIdentity();
    float th;
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for(int i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+1*cos(th),y+0.5*sin(th));
    }

    glEnd();

}
void initOpenGl()
{
    glClearColor(0.0,0.0,0.0,1); //Background Color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1,25,-5,5);
    glMatrixMode(GL_MODELVIEW);
}
void wheel(int x,int y)
{
   float th;
   glBegin(GL_POLYGON);
   glColor3f(0,0,0);
   for(int i=0;i<360;i++)
   {
       th=i*(3.1416/180);
       glVertex2f(x+.3*cos(th),y+.2*sin(th));
   }

   glEnd();

}


void field(){
glClear(GL_COLOR_BUFFER_BIT);
glLoadIdentity();
    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
    glVertex2f (-1, 2);
    glVertex2f (30, 2);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f (-1, -2);
    glVertex2f (30, -2);
    glEnd();

//2rd long line
    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f (-1, 0);
    glVertex2f (30, 0);
    glEnd();

    glColor3f (0.5, 0.7,0.6);
    glBegin(GL_POLYGON);
    glVertex2f (-1,0);
    glVertex2f (30,0);
    glVertex2f (30, -2);
    glVertex2f (-1, -2);
    glEnd();

    glColor3f (0.0, 0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f (-2,6);
    glVertex2f (-2,2);
    glVertex2f (27,2);
    glVertex2f (27,6);
    glEnd();
    for(int i=0; i<20; i++)
    {
        glTranslated(3,0,0);
        glColor3f (0.0, 0.8,0.0);

        glBegin(GL_POLYGON);
        glVertex2f (-4,2);
        glVertex2f (-2, 3);
        glVertex2f (0, 2);
        glEnd();

        glColor3f (1.0, 1.0, 1.0);
        glLineWidth(3.0f);
        glBegin(GL_LINES);
        glVertex2f (-4, 2);
        glVertex2f (-2, 3);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f (-2, 3);
        glVertex2f (0, 2);
        glEnd();
    }

    glFlush();
}
void gari(){
    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(6.0f);
    glLoadIdentity();
    counter=counter+0.003;
    glTranslated(counter,0,0.0);
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f (.5,-.5);
    glVertex2f (.5,-1);
    glVertex2f (5,-1);
    glVertex2f (5, -.5);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f (.5,-.5);
    glVertex2f (.5,-1);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f (.5,-1);
    glVertex2f (5, -1);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f (5,-1);
    glVertex2f (5, -.5);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f (5,-.5);
    glVertex2f (.5, -.5);
    glEnd();
//car 2
    glBegin(GL_POLYGON);
    glVertex2f (1,-.5);
    glVertex2f (2,-.2);
    glVertex2f (3,-.2);
    glVertex2f (4, -.5);

    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (2,-.3);
    glVertex2f (2.4,-.3);
    glVertex2f (2.4,-.4);
    glVertex2f (2, -.4);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (2.6,-.3);
    glVertex2f (3,-.3);
    glVertex2f (3,-.4);
    glVertex2f (2.6, -.4);

     glColor3f (1.0, 1.0, 1.0);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f (2.5,-.2);
    glVertex2f (2.5, -.5);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f (1,-.5);
    glVertex2f (2, -.2);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f (2,-.2);
    glVertex2f (3, -.2);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f (3,-.2);
    glVertex2f (4, -.5);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f (4,-.5);
    glVertex2f (1, -.5);
    glEnd();

    glEnd();

    /*glColor3f (1.0, 1.0, 1.0);
    glLineWidth(3.0f);
    glBegin(GL_POLYGON);
    glVertex2f (50,50);
    glVertex2f (70,70);
    glVertex2f (80,70);
    glVertex2f (100,50);
    glEnd();*/


   wheel(1,-1);
   wheel(4,-1);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,1.0,0.0);
    field();
    SUN(4,4);
    gari();

    glutSwapBuffers();
    glFlush();
}
int main()
{
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(700,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Car Moving");
    initOpenGl();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;
}
