#include<glut.h>


/*
keys

p to get the ball back to the pink player
o to get the ball back to the teal player

l , a  kicks the ball in to the other player

k , d kicks the ball to face of the other player to triger an AMAZING animation


I wish i had more time to add other func to code but i only had 24h to do all of that 😣😐


*/














float spin = 0, spinn = 0,//apin ball
 spin1 = 0;
float spin2 = 0;//rotate leg
int x = 1;
int movex = 100, movey = 75; //move ball

int r1 = 141, g1 = 85, b1 = 36;
int r2 = 141, g2 = 85, b2 = 36;

float a2 = 1, a1 = 1;

void head1();

 




void head2() {
	glPushMatrix();

	glTranslated(830, 270, 0);

	glScaled(a2, a2, 1);

	glTranslated(-830, -270, 0);
	glBegin(GL_QUADS);	//head
	glColor3ub(r2, g2, b2);
	if (movex >= 800 && movex <= 900 && movey >= 100 && movey <= 300) {
		r2 += 30;
		g2 -= 10;
		b2++;
		a2 = 1.5;

	}
	else {
		r2 = 141, g2 = 85, b2 = 36;
		a2 = 1;
	}
	glVertex2f(810, 250);
	glVertex2f(810, 290);
	glVertex2d(850, 290);
	glVertex2d(850, 250);
	glEnd();
	glPopMatrix();


}



void head1() {
	glPushMatrix();

	glTranslated(70, 270, 0);

	glScaled(a1, a1, 1);

	glTranslated(-70, -270, 0);
	glBegin(GL_QUADS);	//head
	glColor3ub(r1, g1, b1);
	if (movex >= 25 && movex <= 100 && movey >= 100 && movey <= 300) {
		r1 += 30;
		g1 -= 10;
		b1++;
		a1 = 1.5;

	}
	else {
		r1 = 141, g1 = 85, b1 = 36;
		a1 = 1;
	}


	glVertex2f(50, 250);
	glVertex2f(50, 290);
	glVertex2d(90, 290);
	glVertex2d(90, 250);
	glEnd();
	glPopMatrix();


}



void display() {

	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();
	glTranslated(700, 195, 0);
	glRotated(spinn, 0, 0, 1);

	glScaled(1, 100, 1);
	glTranslated(-700, -195, 0);


	glColor3ub(r1, g2, b1);
	glLineWidth(100);

	glBegin(GL_LINES);
	glVertex2f(700, 140);
	glVertex2f(700, 250);


	glEnd();
	glPopMatrix();
	glPushMatrix();
	glLineWidth(3);

	glTranslatef(70, 140, 0);

	glRotatef(spin1, 0, 0, 1);//kcick animathion


	glTranslatef(-70, -140, 0);

	glBegin(GL_QUADS);   //right leg
	glColor3f(0, 0, 0);
	glVertex2d(70, 70);
	glVertex2f(90, 70);

	glVertex2f(70, 140);
	glVertex2d(90, 140);

	glEnd();

	glBegin(GL_QUADS);	//riggt foot

	glColor3f(1, 0, 0);
	glVertex2f(90, 70);
	glVertex2d(70, 70);

	glVertex2f(70, 50);
	glVertex2d(100, 50);
	glEnd();

	glBegin(GL_LINES); // right foot outline
	glColor3f(0, 0, 0);
	glVertex2f(90, 70);
	glVertex2d(70, 70);

	glVertex2f(70, 50);
	glVertex2d(100, 50);

	glVertex2f(90, 70);
	glVertex2d(100, 50);

	glVertex2f(70, 50);
	glVertex2d(70, 70);
	glEnd();
	glPopMatrix();


	glBegin(GL_QUADS);  // left leg
	glColor3f(0, 0, 0);
	glVertex2d(50, 70);
	glVertex2f(70, 70);

	glVertex2f(50, 140);
	glVertex2d(70, 140);
	glEnd();
	glBegin(GL_QUADS); //left foot
	glColor3f(1, 0, 0);
	glVertex2f(70, 70);
	glVertex2d(50, 70);

	glVertex2f(50, 50);
	glVertex2d(80, 50);

	glEnd();

	glBegin(GL_LINES); //left foot outline
	glColor3f(0, 0, 0);
	glVertex2f(70, 70);
	glVertex2d(50, 70);

	glVertex2f(50, 50);
	glVertex2d(80, 50);

	glVertex2f(70, 70);
	glVertex2d(80, 50);

	glVertex2f(50, 50);
	glVertex2d(50, 70);
	glEnd();

	glBegin(GL_QUADS);     //body
	glColor3ub(0, 128, 128);

	glVertex2f(50, 140);
	glVertex2f(50, 250);
	glVertex2d(90, 250);
	glVertex2d(90, 140);
	glEnd();


	glBegin(GL_LINES);  //body outline
	glColor3ub(0, 0, 0);

	glVertex2f(50, 140);
	glVertex2f(50, 250);
	glVertex2d(90, 250);
	glVertex2d(90, 140);

	glVertex2d(90, 250);
	glVertex2d(50, 250);

	glVertex2d(90, 140);
	glVertex2d(50, 140);

	glEnd();

	head1();

	/////////////////////////////////////////////////////////////////////////////player 1/////////////////////////////////////////





	glPushMatrix();

	glTranslatef(830, 140, 0);
	glRotated(spin2, 0, 0, 1);
	glTranslatef(-830, -140, 0);


	glBegin(GL_QUADS);   //left leg
	glColor3f(0, 0, 0);
	glVertex2f(830, 70);
	glVertex2d(810, 70);
	glVertex2d(830, 140);
	glVertex2f(810, 140);
	glEnd();



	glBegin(GL_QUADS); //left foot
	glColor3f(1, 0, 1);
	glVertex2f(830, 70);
	glVertex2d(810, 70);
	glVertex2f(800, 50);
	glVertex2d(830, 50);
	glEnd();

	glBegin(GL_LINES); // left leg outline
	glColor3f(0, 0, 0);
	glVertex2f(830, 70);
	glVertex2d(810, 70);
	glVertex2f(800, 50);
	glVertex2d(830, 50);
	glVertex2f(800, 50);
	glVertex2d(810, 70);
	glVertex2f(830, 70);
	glVertex2d(830, 50);
	glEnd();

	glPopMatrix();

	glBegin(GL_QUADS);   //right leg
	glColor3f(0, 0, 0);
	glVertex2f(850, 70);
	glVertex2d(830, 70);
	glVertex2d(850, 140);
	glVertex2f(830, 140);
	glEnd();

	glBegin(GL_QUADS); //left foot
	glColor3f(1, 0, 1);
	glVertex2f(850, 70);
	glVertex2d(830, 70);
	glVertex2f(820, 50);
	glVertex2d(850, 50);
	glEnd();

	glBegin(GL_LINES); // left leg outline
	glColor3f(0, 0, 0);
	glVertex2f(850, 70);
	glVertex2d(830, 70);
	glVertex2f(820, 50);
	glVertex2d(850, 50);
	glVertex2f(820, 50);
	glVertex2d(830, 70);
	glVertex2f(850, 70);
	glVertex2d(850, 50);
	glEnd();


	glBegin(GL_QUADS);     //body
	glColor3ub(255, 128, 128);

	glVertex2f(810, 140);
	glVertex2f(810, 250);
	glVertex2d(850, 250);
	glVertex2d(850, 140);
	glEnd();
	
	glLineWidth(3);

	glBegin(GL_LINES); //body outline
	glColor3ub(0, 0, 0);
	glVertex2f(810, 140);
	glVertex2f(810, 250);
	glVertex2d(850, 250);
	glVertex2d(850, 140);
	glVertex2d(850, 250);
	glVertex2d(810, 250);
	glVertex2d(850, 140);
	glVertex2d(810, 140);
	glEnd();

	head2();
	////////////////////////////////////////////////player2//////////////////////////////////////////////////////////////////
	glPushMatrix();
	glTranslated(movex, movey, 0);

	glRotated(spin, 0, 0, 1);

	glTranslated(-125, -75, 0);

	glBegin(GL_QUADS);


	glColor3f(0, 0, 0);

	glVertex2f(100, 50);
	glVertex2f(150, 50);
	glVertex2f(150, 100);
	glVertex2f(100, 100);
	glEnd();
	glPopMatrix();

	glFlush();
	////////////////////////////////////////////////ball//////////////////////////////////////////////////////////////////

}

void rot()
{
	
	spin += 1;
	spinn += 0.01;
	glutPostRedisplay();
}

void kick(unsigned char key, int x, int y)
{
	switch (key) {
	case 'a':
		if (spin1 <= 20) {
			spin1 += 20;
		}
		movex += 10;
		x = -1;
		break;


	case 'd':
		if (spin1 <= 20) {
			spin1 += 20;
		}
		movex += 10;
		movey += 3;
		break;

	case 'f':
		movex -= 10;
		movey -= 1;
		break;


	case 'k':
		if (spin2 >= -20) {
			spin2 -= 20;
		}

		movex -= 10;
		movey += 3;

		break;

	case 'p':
		movex = 100;
		movey = 75;
		spin1 = 0;
		spin2 = 0;

		break;
	case 'o':
		movex = 800;
		movey = 75;
		spin1 = 0;
		spin2 = 0;
		break;

	case'l':
		if (spin2 >= -20) {
			spin2 -= 20;
		}
		movex -= 10;

	default:
		break;
	}
	glutPostRedisplay();
}




void main() {



	glutInitWindowSize(900, 1000);
	glutInitWindowPosition(0, 0);
	glutInitDisplayMode(GLUT_SINGLE |
		GLUT_RGB);
	glutCreateWindow("tringles");
	glutDisplayFunc(display);
	
	glutIdleFunc(rot);
	
	glutKeyboardFunc(kick);
	glClearColor(1, 1, 1, 1);
	gluOrtho2D(0, 900, 0, 1000);
	glutMainLoop();

}