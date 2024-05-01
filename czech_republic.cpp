#include<GL/glut.h>
void init(){
	glClearColor(0, 0, 0, 1);
	glMatrixMode(GL_PROJECTION);
    glOrtho(-200,200,-200,200,-200,200);


}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	//white quad
	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex2i(-20,0);
	glVertex2i(-20, 15);
	glVertex2i(36, 15);
	glVertex2i(36, -15);
	glEnd();
	//red quad
	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(-20, -15);
	glVertex2i(-20,0);
	glVertex2i(36,0);
	glVertex2i(36, -15);
	glEnd();
	// blue triangle
	glColor3f(0, 0, 1);
	glBegin(GL_TRIANGLES);
	glVertex2i(-20, -15);
	glVertex2i(-20, 15);
	glVertex2i(-2, 0);
	glEnd();
	//pole 
	glColor3f(0, 1, 0);
	glBegin(GL_QUADS);
	glVertex2i(-25,-75);
	glVertex2i(-25,15);
	glVertex2i(-20,15 );
	glVertex2i(-20, -75);
	glEnd();
	//base height
	glColor3f(1, 1, 0);
	glBegin(GL_QUADS);
	glVertex2i(-35,-102);
	glVertex2i(-35,-75);
	glVertex2i(-10,-75);
	glVertex2i(-10,-102);
	glEnd();
	// top stand 
	glColor3f(1, 0.45, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(-40,-83);
	glVertex2i(-35,-75);
	glVertex2i(-10, -75);
	glVertex2i(-15,-83);
	glEnd();
	//stand hieght
	glColor3f(1, 0, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(-40, -87);
	glVertex2i(-40,-83);
	glVertex2i(-15,-83);
	glVertex2i(-15,-87);
	glEnd();
	//middle stand
	glColor3f(1, 0.45, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(-45,-92);
	glVertex2i(-40,-87);
	glVertex2i(-15,-87);
	glVertex2i(-20,-92);
	glEnd();
	glColor3f(1, 0, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(-45,-97);
	glVertex2i(-45,-92);
	glVertex2i(-20,-92);
	glVertex2i(-20,-97);
	glEnd();
	glColor3f(1, 0.45, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(-50,-102);
	glVertex2i(-45,-97);
	glVertex2i(-20,-97);
	glVertex2i(-25,-102);
	glEnd();

	glFlush();


}
int main(int argc,char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1000, 700);
	glutCreateWindow("day one");
	init();
	glutDisplayFunc(display );
	glutMainLoop();
	

	
}