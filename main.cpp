#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <math.h>

GLfloat angle=10;
GLfloat	tx	=  10.0;
GLfloat	tx1	=  10.0;
GLfloat	tx2	=  10.0;
GLfloat	tx3	=  10.0;
GLfloat	tx4	=  10.0;
GLfloat	tx5	=  10.0;
GLfloat	tx6	=  10.0;
GLfloat	tx7	=  10.0;

GLfloat	ty	=  10.0;
GLfloat c=2;

GLfloat c1=229;
GLfloat c2=249;
GLfloat c3=2;





void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);  //sets the color value to clear buffer
    glOrtho(-100,100,-100,100,-100,100); //left,right,bottom,top, near, far
}

void update(int value)
{

    angle+=30;
	glutPostRedisplay();
	glutTimerFunc(30,update,0);//delay
}








void circle(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)//radius_x,radius_y,certre_position_x,centre_position_y
{
    int i=0;
    float angle;
    GLfloat PI = 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<100;i++)
    {
        angle = 2 * PI * i /100;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();
}
void myDisplay(){

    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

    glColor3f(0.55f, 0.447f, 0.349f);
    //Green middle
    glBegin(GL_POLYGON);
    glVertex3f(-100.0, -60.0,0.0);
    glVertex3f(100.0, -60.0,0.0);
    glVertex3f(100.0, 20.0,0.0);
    glVertex3f(-100.0, 20.0,0.0);
    glEnd();
    ////////////////////////////
    ////////////////////////////////////
    //sky top
    glBegin(GL_POLYGON);
    glColor3f(0.317f, 0.0f, 0.313f);
    glVertex3f(-100.0, 20.0,0.0);
    glVertex3f(100.0, 20.0,0.0);
    glVertex3f(100.0, 100.0,0.0);
    glVertex3f(-100.0, 100.0,0.0);
    glEnd();
    //skt top
    ///
    //Flower

    glBegin(GL_POLYGON);
    glColor3ub(66, 0, 0);
    glVertex3f(85.0, -40.0,0.0);
    glVertex3f(95.0, -40.0,0.0);
    glVertex3f(97.0, -20.0,0.0);
    glVertex3f(82.0, -20.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(9, 71, 0);
    glVertex3f(89.0, -20.0,0.0);
    glVertex3f(91.0, -20.0,0.0);
    glVertex3f(90.0, 7.0,0.0);
    glVertex3f(89.0, 18.0,0.0);
    glVertex3f(87.0, 18.0,0.0);
    glVertex3f(88.0, 7.0,0.0);
    glEnd();

    glColor3ub(c1,c2,c3);
    glPushMatrix();
    glTranslatef(tx-10,ty-10,0);


    glBegin(GL_POLYGON);
    glVertex3f(86.0, 24.0,0.0);
    glVertex3f(90.0, 24.0,0.0);
    glVertex3f(88.0, 33.0,0.0);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(tx1-10,ty-10,0);

    glBegin(GL_POLYGON);

    glVertex3f(86.0, 24.0,0.0);
    glVertex3f(84.0, 19.0,0.0);
    glVertex3f(81.0, 25.0,0.0);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tx2-10,ty-10,0);

    glBegin(GL_POLYGON);

    glVertex3f(84.0, 19.0,0.0);
    glVertex3f(86.0, 13.0,0.0);
    glVertex3f(79.0, 17.0,0.0);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(tx3-10,ty-10,0);

    glBegin(GL_POLYGON);

    glVertex3f(86.0, 13.0,0.0);
    glVertex3f(84.0, 19.0,0.0);
    glVertex3f(83.0, 5.0,0.0);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tx4-10,ty-10,0);
    glBegin(GL_POLYGON);

    glVertex3f(86.0, 13.0,0.0);
    glVertex3f(90.0, 19.0,0.0);
    glVertex3f(88.0, 5.0,0.0);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tx5-10,ty-10,0);
    glBegin(GL_POLYGON);

    glVertex3f(86.0, 19.0,0.0);
    glVertex3f(92.0, 15.0,0.0);
    glVertex3f(93.0, 7.0,0.0);

    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(tx6-10,ty-10,0);

    glBegin(GL_POLYGON);

    glVertex3f(86.0, 16.0,0.0);
    glVertex3f(92.0, 21.0,0.0);
    glVertex3f(96.0, 17.0,0.0);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(tx7-10,ty-10,0);

    glBegin(GL_POLYGON);

    glVertex3f(92.0, 21.0,0.0);
    glVertex3f(90.0, 24.0,0.0);
    glVertex3f(94.0, 30.0,0.0);

    glEnd();
    glPopMatrix();

    glColor3ub(71, 47, 28);
    circle(4,6,88,18);

    //////////////////////////
    //FAN

	glPushMatrix();//static part static thakbe
    glTranslatef(1,80,0); // 3. Translate to the object's position.

    glRotatef(angle,0.0,0.0,1); // 2. Rotate the object.

    glTranslatef(-1,-80,0.0);

    glBegin(GL_POLYGON);
    glColor3ub(159, 232, 71);
    glVertex3f(-30.0, 90.0,0.0);
    glVertex3f(1, 80,0.0);
    glVertex3f(-30, 84.0,0.0);

    glEnd();

	//glRectf(0,0,-8,4);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(1,80,0); // 3. Translate to the object's position.

    glRotatef(angle,0.0,0.0,1); // 2. Rotate the object.

    glTranslatef(1,-80,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(159, 232, 71);
    glVertex3f(31, 90,0.0);
    glVertex3f(0, 80,0.0);
    glVertex3f(31, 84,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    //glRotatef(angle,0.0,1.0,0);
    glBegin(GL_POLYGON);

    glColor3ub(1, 232, 71);
    glVertex3f(-4, 79.5,0.0);
    glVertex3f(-2, 83,0.0);
    glVertex3f(3, 83,0.0);
    glVertex3f(5, 79.5,0.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3ub(159, 232, 1);
    glVertex3f(0, 83.5,0.0);
    glVertex3f(1, 83,0.0);
    glVertex3f(1, 99,0.0);
    glVertex3f(0, 99,0.0);
    glEnd();


    /////////////////////////////////////
    //dark buttom
    glBegin(GL_POLYGON);
    glColor3f(1.f, 0.591f, 1.0f);
    glVertex3f(-100.0, -100.0,0.0);
    glVertex3f(100.0, -100.0,0.0);
    glVertex3f(100.0, -60.0,0.0);
    glVertex3f(-100.0, -60.0,0.0);
    glEnd();
    //dark buttom
    ///////////////////////////////////
    //table
    glBegin(GL_POLYGON);
    glColor3f(0.203f, 0.31f, 0.105f);
    glVertex3f(-90.0, -2.0,0.0);
    glVertex3f(-70.0,   18.0,0.0);
    glVertex3f(-57.0, 18.0,0.0);
    glVertex3f(-71.0, -2.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11f, 0.176f, 0.25f);
    glVertex3f(-90.0, -2.0,0.0);
    glVertex3f(-90.0, -7.0,0.0);
    glVertex3f(-71.0, -7.0,0.0);
    glVertex3f(-71.0, -2.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11f, 0.176f, 0.25f);
    glVertex3f(-71.0, -2.0,0.0);
    glVertex3f(-57.0, 18.0,0.0);
    glVertex3f(-57.0, 15.0,0.0);
    glVertex3f(-71.0, -7.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11f, 0.176f, 0.25f);
    glVertex3f(-90.0, -2.0,0.0);
    glVertex3f(-88.0, -2.0,0.0);
    glVertex3f(-88.0, -30.0,0.0);
    glVertex3f(-90.0, -30.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11f, 0.176f, 0.25f);
    glVertex3f(-71.0, -2.0,0.0);
    glVertex3f(-69.0, -2.0,0.0);
    glVertex3f(-69.0, -30.0,0.0);
    glVertex3f(-71.0, -30.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11f, 0.176f, 0.25f);
    glVertex3f(-57.0, 15.0,0.0);
    glVertex3f(-59.0, 15.0,0.0);
    glVertex3f(-59.0, 00.0,0.0);
    glVertex3f(-57.0, 00.0,0.0);

    glEnd();
    /////////////////////////////////
    //chair
    glBegin(GL_POLYGON);
    glColor3f(0.203f, 0.31f, 0.105f);
    glVertex3f(-63.0, -13.0,0.0);
    glVertex3f(-52.0, -2.0,0.0);
    glVertex3f(-40.0, -2.0,0.0);
    glVertex3f(-51.0, -13.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11f, 0.176f, 0.25f);
    glVertex3f(-63.0, -13.0,0.0);
    glVertex3f(-63.0, -15.0,0.0);
    glVertex3f(-51.0, -15.0,0.0);
    glVertex3f(-51.0, -13.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11f, 0.176f, 0.25f);
    glVertex3f(-40.0, -2.0,0.0);
    glVertex3f(-40.0, -4.0,0.0);
    glVertex3f(-51.0, -15.0,0.0);
    glVertex3f(-51.0, -13.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11f, 0.176f, 0.25f);
    glVertex3f(-63.0, -15.0,0.0);
    glVertex3f(-61.5, -15.0,0.0);
    glVertex3f(-61.5, -25.0,0.0);
    glVertex3f(-63.0, -25.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11f, 0.176f, 0.25f);
    glVertex3f(-52.0, 15.0,0.0);
    glVertex3f(-50.5, 15.0,0.0);
    glVertex3f(-50.5, -25.0,0.0);
    glVertex3f(-52.0, -25.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11f, 0.176f, 0.25f);
    glVertex3f(-40.5, 15.0,0.0);
    glVertex3f(-39.0, 15.0,0.0);
    glVertex3f(-39.0, -15.0,0.0);
    glVertex3f(-40.5, -15.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11f, 0.176f, 0.25f);
    glVertex3f(-52.0, 15.0,0.0);
    glVertex3f(-40.0, 15.0,0.0);
    glVertex3f(-40.0, 4.0,0.0);
    glVertex3f(-52.0, 4.0,0.0);

    glEnd();
    //////////////////////////////////
    //Teacher BODY

    //teacher neck
    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.988f, 0.494f);
    glVertex2f(-1, 30);
    glVertex2f(-2, 24);
    glVertex2f(1.75, 24);
    glVertex2f(.75, 30);

    glEnd();

    //hand
    glBegin(GL_POLYGON);
    glColor3f(0.427f, 0.262f, 0.0f);
    glVertex3f(8.0, 24.0,0.0);
    glVertex3f(11.0, 19.0,0.0);
    glVertex3f(11.0, 12,0.0);
    glVertex3f(8.0, 18.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.988f, 0.494f);
    glVertex3f(11.0, 19.0,0.0);
    glVertex3f(11.0, 12,0.0);
    glVertex3f(13.0, 7.0,0.0);
    glVertex3f(15.0, 8.0,0.0);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.427f, 0.262f, 0.0f);
    glVertex3f(-8.0, 24.0,0.0);
    glVertex3f(-12.0, 26,0.0);
    glVertex3f(-13.0, 21.0,0.0);
    glVertex3f(-8.0,19.0,0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.988f, 0.494f);
    glVertex3f(-12.0, 26.0,0.0);
    glVertex3f(-17.0, 33,0.0);
    glVertex3f(-19.0, 30.0,0.0);
    glVertex3f(-13.0,21.0,0.0);
    glEnd();

    /////////////////////////////////
    //Chest
    glBegin(GL_POLYGON);
    glColor3f(0.427f, 0.262f, 0.0f);
    glVertex3f(-8.0, 24.0,0.0);
    glVertex3f(-8.0, 0.0,0.0);
    glVertex3f(8.0, 0.0,0.0);
    glVertex3f(8.0, 24.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-8.0, 0.0,0.0);
    glVertex3f(8.0, 0.0,0.0);
    glVertex3f(8.0, -2,0.0);
    glVertex3f(-8.0, -2.0,0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.827f, 0.721f, 0.553f);
    glVertex3f(-1.0, 22.0,0.0);
    glVertex3f(1.0, 22,0.0);
    glVertex3f(2, 24.0,0.0);
    glVertex3f(-2, 24.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.50f, 0.0f);
    glVertex3f(-1.0, 22.0,0.0);
    glVertex3f(1.0, 22,0.0);
    glVertex3f(1, 8.0,0.0);
    glVertex3f(-1, 8.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.262f, 1.0f);
    glVertex3f(-1.0, 8.0,0.0);
    glVertex3f(1.0, 8,0.0);
    glVertex3f(0, 6.0,0.0);
    glVertex3f(0, 6.0,0.0);
    glEnd();

    //LEGS
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.262f, 1.0f);
    glVertex3f(-8.0, -2.0,0.0);
    glVertex3f(8.0, -2,0.0);
    glVertex3f(10.0, -26.0,0.0);
    glVertex3f(-10.0, -26.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.55f, 0.447f, 0.349f);
    glVertex3f(0.0, -10,0.0);
    glVertex3f(7.0, -26.0,0.0);
    glVertex3f(-7.0, -26.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(10.0, -26,0.0);
    glVertex3f(7.0, -26.0,0.0);
    glVertex3f(7.0, -30.0,0.0);
    glVertex3f(12.0, -30.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-7.0, -26,0.0);
    glVertex3f(-10.0, -26.0,0.0);
    glVertex3f(-12.0, -30.0,0.0);
    glVertex3f(-7.0, -30.0,0.0);
    glEnd();

    ///////////////////////////////////
    //White Board
    glBegin(GL_POLYGON);
    glColor3f(1.f, 1.0f, 1.0f);
    glVertex3f(25.0, 10.0,0.0);
    glVertex3f(69.0, 10.0,0.0);
    glVertex3f(69.0, 60.0,0.0);
    glVertex3f(25.0, 60.0,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 1.00f, 1.0f, 0.33f);
    glVertex2f(40, -30);
    glVertex2f(45, 10);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 1.00f, 1.0f, 0.33f);
    glVertex2f(41, -30);
    glVertex2f(46, 10);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 1.00f, 1.0f, 0.33f);
    glVertex2f(53, -30);
    glVertex2f(49, 10);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 1.00f, 1.0f, 0.33f);
    glVertex2f(54, -30);
    glVertex2f(50, 10);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0.33f, 0.33f, 0.33f);
    glVertex2f(28, 55);
    glVertex2f(65, 55);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0.33f, 0.33f, 0.33f);
    glVertex2f(28, 50);
    glVertex2f(65, 50);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0.33f, 0.33f, 0.33f);
    glVertex2f(28, 45);
    glVertex2f(65, 45);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0.00f, 0.0f, 0.33f);
    glVertex2f(56, -30);
    glVertex2f(50, -30);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0.00f, 0.0f, 0.33f);
    glVertex2f(37, -30);
    glVertex2f(43, -30);
    glEnd();

    ////////////////////////////////////////
    //book
    glBegin(GL_POLYGON);
    glColor3f(0.30f, 0.76f, 0.6210f);
    glVertex3f(-23.0, 30.0,0.0);
    glVertex3f(-23.0, 59.0,0.0);
    glVertex3f(-13.0, 59.0,0.0);
    glVertex3f(-13.0, 30.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-23.0, 30.0,0.0);
    glVertex3f(-23.0, 59.0,0.0);
    glVertex3f(-21.0, 59.0,0.0);
    glVertex3f(-21.0, 30.0,0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-18.0, 52.0,0.0);
    glVertex3f(-14.0, 52.0,0.0);
    glVertex3f(-16.0, 47.0,0.0);
    glVertex3f(-16.0, 47.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-16.0, 47.0,0.0);
    glVertex3f(-16.0, 47.0,0.0);
    glVertex3f(-18.0, 41,0.0);
    glVertex3f(-14.0, 41.0,0.0);
    glEnd();
    ////////////////////////////////////////
    //scenery

    circle(.5,1,-70,90);

    glBegin(GL_LINES);
    glColor3f(0.988f, 0.988f, 0.494f);
    glVertex2f(-70, 90);
    glVertex2f(-80, 75);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.988f, 0.988f, 0.494f);
    glVertex2f(-70, 90);
    glVertex2f(-60, 75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.301f, 0.867f, 0.917f);
    glVertex3f(-90.0, 75.0,0.0);
    glVertex3f(-90.0, 40.0,0.0);
    glVertex3f(-50.0, 40.0,0.0);
    glVertex3f(-50.0, 75.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.467f, 0.043f);
    glVertex3f(-90.0, 58.0,0.0);
    glVertex3f(-90.0, 40.0,0.0);
    glVertex3f(-50.0, 40.0,0.0);
    glVertex3f(-50.0, 58.0,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0.00f, 0.0f, 0.0f);
    glVertex2f(-65, 69);
    glVertex2f(-64, 68);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0.00f, 0.0f, 0.0f);
    glVertex2f(-64, 68);
    glVertex2f(-63, 69);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0.00f, 0.0f, 0.0f);
    glVertex2f(-67, 70);
    glVertex2f(-66, 69);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0.00f, 0.0f, 0.0f);
    glVertex2f(-66, 69);
    glVertex2f(-65, 70);
    glEnd();


    glBegin(GL_LINES);
    glColor3f( 0.00f, 0.0f, 0.0f);
    glVertex2f(-61, 69);
    glVertex2f(-60, 68);
    glEnd();

    glBegin(GL_LINES);
    glColor3f( 0.00f, 0.0f, 0.0f);
    glVertex2f(-60, 68);
    glVertex2f(-59, 69);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.467f, 0.0f);
    glVertex3f(-88.0, 55.0,0.0);
    glVertex3f(-75.0, 55.0,0.0);
    glVertex3f(-81.5, 72.0,0.0);

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.467f, 0.0f);
    glVertex3f(-80.0, 55.0,0.0);
    glVertex3f(-67.0, 55.0,0.0);
    glVertex3f(-73.5, 72.0,0.0);

    glEnd();

    ////////////////////////////////////////
    //techer head

    glColor3f(0.988f, 0.988f, 0.494f);
    circle(4.5,8,0,33);  //radius_x,radius_y,certre_position_x,centre_position_y
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex3f(-5, 35.0,0.0);
    glVertex3f(-5.0, 36.0,0.0);
    glVertex3f(-2, 42.0,0.0);
    glVertex3f(-2, 39.0,0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex3f(4, 35.0,0.0);
    glVertex3f(4.0, 38.0,0.0);
    glVertex3f(1, 42.0,0.0);
    glVertex3f(1, 41.0,0.0);
    glEnd();

         glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex3f(-2, 39.0,0.0);
    glVertex3f(-2, 41.5,0.0);
    glVertex3f(2, 41.5,0.0);
    glVertex3f(2, 39.0,0.0);
    glEnd();
    ////////////////////////////////////////
    //eyes

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3f(-3, 37.0,0.0);
    glVertex3f(-1, 37.0,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3f(3, 37.0,0.0);
    glVertex3f(1, 37.0,0.0);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    circle(.5,1,-2,35);

    glColor3f(0.0f, 0.0f, 0.0f);
    circle(.5,1,2,35);
    ////////////////////////////////////////
    //nose
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3f(0, 35.0,0.0);
    glVertex3f(0, 32.0,0.0);
    glEnd();
    ////////////////////////////////////////
    //mouth


    glColor3f(0.0f, 0.0f, 0.0f);
    circle(1,c,0,29);

    glColor3f(0.956f, 0.34f, 0.25f);
    circle(0.75,1.,0,29);
    //////
    //ear
    glColor3f(0.988f, 0.988f, 0.494f);
    circle(1,3,4.50,33);

    glColor3f(0.988f, 0.988f, 0.494f);
    circle(1,3,-4.50,33);

    ////////////////////////////////////////
    //hand
    glColor3f(0.988f, 0.988f, 0.494f);
    circle(1.5,3.5,14,5);

    //sun

    glColor3f(1.0f, 0.00f, 0.00f);
    circle(2.5,3.5,-55,70);

    ///////////////////////////
    //students
    glColor3f(0.129f, 0.325f, 0.439f);
    circle(6,9,54,-60);
    glColor3f(0.129f, 0.325f, 0.439f);
    circle(5,25,54,-90);

    glColor3f(0.12f, 0.88f, 0.439f);
    circle(6,9,45,-56);
    glColor3f(0.12f, 0.88f, 0.439f);
    circle(5,25,45,-90);

    glColor3f(0.12f, 0.88f, 0.0f);
    circle(6,9,36,-58);
    glColor3f(0.12f, 0.88f, 0.0f);
    circle(5,25,36,-92);

    glColor3f(0.12f, 0.88f, 1.0f);
    circle(6,9,29,-58);
    glColor3f(0.12f, 0.88f, 1.0f);
    circle(5,25,29,-92);

    glColor3f(0.99f, 0.88f, 1.0f);
    circle(6,9,23,-55);
    glColor3f(0.99f, 0.88f, 1.0f);
    circle(5,25,23,-89);
    glFlush();

    }
void spe_key(int key, int x, int y)
{

	switch (key) {


        		case GLUT_KEY_LEFT:

				angle -=30;

				glutPostRedisplay();
				break;



		case GLUT_KEY_RIGHT:



				glutPostRedisplay();
				break;



        case GLUT_KEY_UP:
            if(c==2){


				c-=1;
				}
				else{
				c+=1;
				}
				glutPostRedisplay();
				break;
        case GLUT_KEY_DOWN:
                if(c1==229 && c2==249 && c3==2){
                    c1=198;
                    c2=189;
                    c3=3;
                    }

                  else  if(c1==198 && c2==189 && c3==3){
                        c1=144;
                        c2=166;
                        c3=1;

                    }

                   else if(c1==144 && c2== 166 && c3==1){
                        c1=132;
                        c2=73;
                        c3=16;
                    }
                    else if(c1==132 && c2== 73 && c3==16){
                        if(tx7>-3){
                        ty-=5;
                        tx-=.25;
                        tx1-=.35;
                        tx2-=.50;
                        tx3-=.75;
                        tx4-=.80;
                        tx5-=.24;
                        tx6-=.90;
                        tx7-=1;}

                           else {

                               c1=229; c2=249 ; c3=2;

                        ty=10;
                        tx	=  10.0;
                        tx1	=  10.0;
                        tx2	=  10.0;
                        tx3	=  10.0;
                        tx4	=  10.0;
                        tx5	=  10.0;
                        tx6	=  10.0;
                        tx7	=  10.0;

}}
                glutPostRedisplay();
				break;
                default:
                break;
	}
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1000, 450);//glutInitWindowSize(int width, int height)
    glutInitWindowPosition (150, 150);
    glutCreateWindow("ClassRoom"); // Create window with this name
    init();
    glutSpecialFunc(spe_key);
    glutDisplayFunc(myDisplay);
     // call display function
    glutTimerFunc(100,update,0);
    glutMainLoop();//ager command gulo k execute kore


    return 0;
}
