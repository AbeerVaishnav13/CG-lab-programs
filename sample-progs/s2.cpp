#define GL_SILENCE_DEPRECATION 1
#include<GLUT/glut.h>
void display()
{
  glClear(GL_COLOR_BUFFER_BIT);	
  glBegin(GL_POINTS);
  glColor3f(1.0,1.0,0.0); // set the centre point color to YELLOW
  glVertex2i(250,250);
  glColor3f(1.0,0.0,0.0); // set the 1st point color to RED
  glVertex2i(10,10);
  glColor3f(0.0,1.0,0.0); // set the 2nd point color to GREEN
  glVertex2i(10,490);
  glColor3f(1.0,0.0,1.0); // set the 1st point color to MAGENTA
  glVertex2i(490,10);
  glColor3f(0.0,1.0,1.0); // set the 1st point color to CYAN
  glVertex2i(490,490);
  glEnd();
  glFlush();
}
void myinit()
{
  glClearColor(0.0,0.0,1.0,0.0);  // set the window color to BLUE
  glPointSize(10.0);
  gluOrtho2D(0.0,499.0,0.0,499.0);
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(500,500);
  glutCreateWindow("Activity 2");
  glutDisplayFunc(display);
  myinit();
  glutMainLoop();
  return 0;
}

