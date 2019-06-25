#include<GL/glut.h>
void display()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	for(i=1;i<=100;i++)
	{
	glTranslatef(-0.1,0,0);
	glVertex2f(i+0.2,0.0);
	glVertex2f(i+0.4,0.0);
	glEnd();
	}
	glFLush();
	
}
int main(int argc, char**argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(400,400);
glutInitWindowPosition(0,0);
glutCreateWindow("My");
glutDisplayFunc(display);
glutMainLoop();

}
