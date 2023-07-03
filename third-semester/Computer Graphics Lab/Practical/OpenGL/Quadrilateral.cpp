#include<GL/glut.h>

void init(void)
{
  glClearColor(1.0, 1.0, 1.0, 0.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void quadrilateral(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0, 0, 0);

  glBegin(GL_QUADS);
  glVertex2i(50, 15);
  glVertex2i(10, 85);
  glVertex2i(110, 85);
  glVertex2i(110, 15);
  glEnd();
  glFlush();
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(50, 100);
  glutInitWindowSize(400, 300);
  glutCreateWindow("Green Quadrilateral");
  init();
  glutDisplayFunc(quadrilateral);
  glutMainLoop();
  return 0;
}