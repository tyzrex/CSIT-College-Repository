#include <GL/glut.h>

using namespace std;

void init(void)
{
  glClearColor(1.0, 1.0, 1.0, 0.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void line_polygon_point(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0, 0, 0);

  glBegin(GL_LINES);
  glVertex2i(180, 75);
  glVertex2i(10, 145);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(50, 15);
  glVertex2i(10, 85);
  glVertex2i(110, 85);
  glEnd();

  glBegin(GL_POINTS);
  glVertex2i(150, 100);
  glVertex2i(155, 100);
  glVertex2i(160, 100);
  glVertex2i(165, 100);
  glVertex2i(170, 100);
  glVertex2i(160, 105);
  glEnd();
  glFlush();
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(50, 100);
  glutInitWindowSize(400, 300);
  glutCreateWindow("An Example OpenGL Program");
  glPointSize(20.0);
  glLineWidth(5.0);
  init();
  glutDisplayFunc(line_polygon_point);
  glutMainLoop();
  return 0;
}