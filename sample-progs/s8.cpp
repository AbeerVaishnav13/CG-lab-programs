#define GL_SILENCE_DEPRECATION 1
#include<GLUT/glut.h>
void output(GLfloat x,GLfloat y,char *text)
{
  char *p;
  glPushMatrix();
  glTranslatef(x,y,0);
  glScaled(0.2,0.2,0);


  for(p=text;*p;p++)
    glutStrokeCharacter(GLUT_STROKE_ROMAN,*p);
  glPopMatrix();
}
void display()
{
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(0.0,1.0,1.0);
  output(100,300,"COMPUTER GRAPHICS");

  glColor3f(1.0, 0.0, 0.0);
  output(100,200,"I'm Abeer Vaishnav");
  glFlush();
}
void myinit()
{
  glClearColor(0.0,0.0,0.0,0.0);
  gluOrtho2D(0.0,499.0,0.0,499.0);
}
int main(int argc,char ** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutCreateWindow("GAT");
  glutDisplayFunc(display);
  myinit();
  glutMainLoop();
  return 0;
}
