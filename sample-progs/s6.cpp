#define GL_SILENCE_DEPRECATION 1
#include<GLUT/glut.h>
void display()
{
  glClear(GL_COLOR_BUFFER_BIT);	

  glBegin(GL_POLYGON); 
  glColor3f(0.0, 1.0, 0.0);  // Green
  glVertex2f(100, 100);
  glColor3f(1.0,0.0,0.0); // Red
  glVertex2f(300, 100);
  glColor3f(0.0,0.0,1.0); // Blue
  glVertex2f(300, 300);
  glColor3f(1.0,1.0,0.0); // Yellow
  glVertex2f(100, 300);
  glEnd(); 
  glFlush();
}
void myinit()
{
  glClearColor(0.0,0.0,0.0,1.0);
  gluOrtho2D(0.0,499.0,0.0,499.0);
}


int main(int argc, char** argv)
{	glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutCreateWindow("Coloured Square");
  glutDisplayFunc(display);
  myinit();
  glutMainLoop();
  return 0;
}
