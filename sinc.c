#include<GL/glut.h>
#include<cmath>
void init()
{
	glOrtho(-10,10,-10,10,-10,10);
}
void display()
{
   glClearColor(0,0,0,0);
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0,0.0,0.0);	
    glPointSize(5);
    glBegin(GL_LINE_STRIP);
    for(double d=-10;d<10;d=d+0.01)
    {
    glVertex2f(d, sin(d)/d);
}
    glEnd();
    glFlush();
}
int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitWindowSize(500,500);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowPosition(100,100);
	glutCreateWindow("OpenGLwindow");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return(0);
}
