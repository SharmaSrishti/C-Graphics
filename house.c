#include <GL/glut.h>
void init()
{
	glOrtho(-1,1,-1,1,-1,1);
}
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
	glColor3f(0.0f,1.0f,0.0f);
	glBegin(GL_QUADS); 
	glVertex2f(0.2f,0.0f);
	glVertex2f(0.2f,-0.2f);
	glVertex2f(-0.2f,-0.2f);
	glVertex2f(-0.2f,0.0f);
	glEnd();
	glColor3f(1.0f,1.0f,0.0f);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f,0.2f);
	glVertex2f(0.2f,0.0f);
	glVertex2f(-0.2f,0.0f);
	glEnd();
	glColor3f(0.0f,0.0f,1.0f);
	 glBegin(GL_LINES);
	 glVertex2f(0.0f,0.2f);
	 glVertex2f(0.0f,0.4f);
	 glEnd();
	 glColor3f(1.0f,0.0f,0.0f);
	 glBegin(GL_TRIANGLES);
	 glVertex2f(0.0f,0.4f);
	 glVertex2f(0.1f,0.5f);
	 glVertex2f(0.1f,0.3f);
	 glEnd();
	 glColor3f(1.0f,0.0f,0.0f);
	 glBegin(GL_QUADS);
	 glVertex2f(0.1f,-0.1f);
	 glVertex2f(0.1f,-0.2f);
	  glVertex2f(-0.1f,-0.2f);
	 glVertex2f(-0.1f,-0.1f);
	 glEnd();
	glutSwapBuffers(); 
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400); 
	glutCreateWindow("House");
	init();
	glutDisplayFunc(drawScene);
	glutMainLoop();
	return 0;
}
