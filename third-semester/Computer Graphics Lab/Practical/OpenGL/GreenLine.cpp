#include <GL/glut.h>

using namespace std;

void init(void)
{
  glClearColor(1.0, 1.0, 1.0, 0.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void greenline(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0, 1, 0);

  glBegin(GL_LINES);
  glVertex2i(180, 75);
  glVertex2i(10,135);
  glEnd();
  glFlush();
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(50, 100);
  glutInitWindowSize(400, 300);
  glutCreateWindow("Green Line");
  glLineWidth(5.0);
  init();
  glutDisplayFunc(greenline);
  glutMainLoop();
  return 0;
}