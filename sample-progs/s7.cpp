#define GL_SILENCE_DEPRECATION 1
#include<GLUT/glut.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);	
	glColor3f(1.0, 1.0, 0.0);
glBegin(GL_TRIANGLES); 
  		glVertex2i(100,100);
glVertex2i(250,100);
glVertex2i(250,300);
	glEnd(); 
glFlush();
}
void myinit()
{
	glClearColor(0.0,0.0,0.0,0.0);
	gluOrtho2D(0.0,499.0,0.0,499.0);
}
int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("Triangle");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
    return 0;
}
