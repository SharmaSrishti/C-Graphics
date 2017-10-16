#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#define ROUND(x) ((int)(x+0.5))

int  xa,ya,xb,yb;
void init()
{
	glOrtho(-100,100,-100,100,-1,1);
}
void display()
{
	double dx=xb-xa;
	double dy=yb-ya;
	double x=xa;
	double y=ya;
	double slope;
	double xi,yi;
	int  steps;
	glClearColor(0.0,0.0,0.0,0.0);

        glClear (GL_COLOR_BUFFER_BIT);
       glColor3f (1.0, 0.0, 0.0);
       glPointSize(3);
       glBegin(GL_POINTS);
     
     	if(abs(dx)>abs(dy))
	{
		slope=dx;
	}
	else
	{
		slope=dy;
	}
	 xi=dx/slope;
	 yi=dy/slope;
	 steps=(int)slope;
        for(int i=1;i<=steps;i++)
        {
        x=x+xi;
        y=y+yi;
        glVertex2d(ROUND(x),ROUND(y));
        }
        glEnd();
        glFlush();
 	
}

int main(int argc, char** argv)
{  
        printf("....Draw  line using DDA LINE DRAWING ALGORITHM....\n");
 	printf("Enter the starting point xa\n");
	scanf("%d",&xa);
	printf("Enter the starting point ya\n");
	scanf("%d",&ya);
	printf("Enter the last point xb\n");
	scanf("%d",&xb);
	printf("Enter the  last point yb\n");
	scanf("%d",&yb);
        glutInit(&argc, argv);
        glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize (500, 500);
        glutInitWindowPosition (100, 100);
        glutCreateWindow ("DDA Algorithm");
        init ();
        glutDisplayFunc(display);
        glutMainLoop();
        return 0;
}
