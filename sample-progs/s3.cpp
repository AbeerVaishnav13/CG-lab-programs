#define GL_SILENCE_DEPRECATION 1
#include<GLUT/glut.h>
void display()
{
  glClear(GL_COLOR_BUFFER_BIT);	
  glLineWidth(3.0); 		// Thickness of line
  glBegin(GL_LINES);
  glVertex2i (50,50);	      	 // to draw horizontal line in magenta color
  glVertex2i (150,50);

  glColor3f(0.0,0.0,1.0);        	//draw the line with blue color
  glVertex2i (200,200);	       	// to draw vertical line in blue color
  glVertex2i (200,300);
  glEnd();
  glFlush();
}
void myinit()
{
  glClearColor(1.0,1.0,1.0,1.0);
  glColor3f(1.0,0.0,1.0);
  gluOrtho2D(0.0,499.0,0.0,499.0);
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(500,500);
  glutCreateWindow("Line");
  glutDisplayFunc(display);
  myinit();
  glutMainLoop();
  return 0;
}
