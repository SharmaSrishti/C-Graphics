#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
int xa,ya,xb,yb;
void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glOrtho(-100,100,-100,100,-1,1);
}
void display()
{
	double dx;
	double dy;
	double slope;
	double pk;
	int x,y;
	int k;
	glClear (GL_COLOR_BUFFER_BIT);
 	glColor3f (1.0, 0.0, 0.0);
 	x=xa;
 	y=yb;
 	dx=xb-xa;
 	dy=yb-ya;
 	slope=dy/dx;
	if(slope<0)
	{   pk=2*dy-dx;
		for(k=1;k<=dx;k++)
		{
		
		if(pk<0)
			{
				pk=pk+2*dy;	
			}
		else
			{
				pk=pk+2*(dy-dx);
				y++;
			}
			x++;
			glBegin(GL_POINTS);
 			glVertex2d(x,y);
		}
	
	}
	else
	{
		pk=2*dx-dy;
		for(k=1;k<=dy;k++)
		{
		
		if(pk<0)
			{
				pk=pk+2*dx;	
			}
		else
			{
				pk=pk+2*(dx-dy);
				x++;
			}
			y++;
		glBegin(GL_POINTS);
 		glVertex2d(x,y);
		}
	}
		glEnd();
		glFlush();
}
int main(int argc, char** argv)
{  
	printf("....Draw  line using Bresenham LINE DRAWING ALGORITHM....\n");
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
 	glutCreateWindow ("Bresenham's algorithm... ");
	init ();
 	glutDisplayFunc(display);
 	glutMainLoop();
 	return 0;
}
