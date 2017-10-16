#include<GL/glut.h>
#include<stdio.h>

int r;
void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glOrtho(-100,100,-100,100,-1,1);
}
void display()
{
	int x,y;
	double p;
	x=0;
	y=r;
	glClearColor(0.0,0.0,0.0,0.0);
	glClear (GL_COLOR_BUFFER_BIT);
        glColor3f (1.0, 0.0, 0.0);
        glPointSize(1);
 	p=5/4-r;

	while(x!=y)
	{
	x++;
		if(p<0)
		{   
			p+=2*x+1;
			
		
		}
		else
		{
			y--;
			
			p+=2*(x-y)+1;
	
		
		}
		
		glBegin(GL_POINTS);
                glVertex2d(x,y);
		glVertex2d(-x,y);
		glVertex2d(-x,-y);
		glVertex2d(x,-y);
		glVertex2d(y,x);
		glVertex2d(-y,x);
		glVertex2d(-y,-x);
		glVertex2d(y,-x);
	
	}
	glEnd();
	glFlush();	
}
int main(int argc, char** argv)
{  
    printf("....Draw Circle using Bresenham MID POINT CIRCLE DRAWING ALGORITHM....\n");
    printf("Enter the radius of the circle...\n");
    scanf("%d",&r);
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("MidPoint Circle algorithm... ");
    init ();
   
    glutDisplayFunc(display);
    glutMainLoop();
}
