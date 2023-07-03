#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw a pentagon
    glBegin(GL_POLYGON);
        glVertex2f(-0.5, 0);
        glVertex2f(-0.25, 0.433);
        glVertex2f(0.25, 0.433);
        glVertex2f(0.5, 0);
        glVertex2f(0,-0.5);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Pentagon");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
