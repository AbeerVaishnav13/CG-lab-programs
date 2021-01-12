#define GL_SILENCE_DEPRECATION 1
#include<GLUT/glut.h>
void display()
{
  glClear(GL_COLOR_BUFFER_BIT);	
  glColor3f(0.0, 1.0, 0.0);

  glBegin(GL_POLYGON); 
  glVertex2i(50, 50); 
  glVertex2i(200, 50);
  glVertex2i(200, 200);
  glVertex2i(50, 200);
  glEnd(); 
  glFlush();
}
void myinit()
{
  glClearColor(0.5,0.0,0.5,1.0);
  gluOrtho2D(0.0,499.0,0.0,499.0);
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutCreateWindow("Polygon");
  glutDisplayFunc(display);
  myinit();
  glutMainLoop();
  return 0;
}
