#include<GL/glut.h>

void display (void)

{

	glClearColor(0,0,0,0);

	glClear (GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);

		glColor3f(1.0,0.0,0.0);

		glVertex2f(0.0,0.2);

		glVertex2f(0.2,0.2);

		glVertex2f(0.2,0.0);

		glVertex2f(0.0,0.0);	

			

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

	glutDisplayFunc(display);



	glutMainLoop();

	return(0);

	

}
