#include <cstdio>
#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <unistd.h>
#include<cmath>
# define PI   3.14159265358979323846
using namespace std;

#include<windows.h>
#include<mmsystem.h>


float _nt = 0.0;


bool rainday = false;
bool night = false;


int start_flag=0;


const int font1=(int)GLUT_BITMAP_TIMES_ROMAN_24;
const int font2=(int)GLUT_BITMAP_HELVETICA_18 ;
const int font3=(int)GLUT_BITMAP_8_BY_13;


void renderBitmapString(float x, float y, void *font,const char *string)
{
    const char *c;
    glRasterPos2f(x, y);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}



GLfloat cloudPosition = 0.0f;
GLfloat cloudSpeed = 0.005f;

GLfloat cloud1Position = 0.0f;
GLfloat cloud1Speed = 0.007f;


void updateCloud(int value)
{
    if(cloudPosition > 0.9)
        {
            cloudPosition = -1.4;
        }
    cloudPosition += cloudSpeed;

	glutPostRedisplay();

	glutTimerFunc(100, updateCloud, 0);
}

void updateCloud1(int value)
{
    if(cloud1Position > 1.3)
        {
            cloud1Position = -1.4;
        }

    cloud1Position += cloudSpeed;

	glutPostRedisplay();

	glutTimerFunc(100, updateCloud1, 0);
}



void tree()
{
    ////////////tree house

        glPushMatrix();
        glTranslatef(0.4,-0.1,0);
        glPushMatrix();

        glScalef(0.15,0.35,0);
        glBegin(GL_TRIANGLES);
        glColor3f(1.0f,1.0f,0.9f);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(-0.3f, 0.7f );
        glVertex2f(0.3f, 0.7f );
        glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.7f);
		glVertex2f(-0.4f, 0.5f);
		glVertex2f(0.4f, 0.5f);
        glVertex2f(0.2f, 0.7f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.5f);
		glVertex2f(-0.5f, 0.2f);
		glVertex2f(0.5f, 0.2f);
		glVertex2f(0.2f, 0.5f);

		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.1f, 0.0f);
		glVertex2f(-0.1f, 0.2f);
		glVertex2f(0.1f, 0.2f);
		glVertex2f(0.1f, 0.0f);
		glEnd();


                glPointSize(6);
		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.3f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.2f, 0.4f);
		glEnd();



		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.11f, 0.67f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.15f, 0.4f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.2f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.255f, 0.62f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.01f, 0.45f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.09f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.42f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.11f, 0.6f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.15f, 0.58f);
		glEnd();

        glPopMatrix();
        glPopMatrix();

    /////////////////

     ////////////tree road

        glPushMatrix();
        glTranslatef(0.1,-0.8,0);
        glPushMatrix();

        glScalef(0.2,0.45,0);
        glBegin(GL_TRIANGLES);
        glColor3f(1.0f,1.0f,0.9f);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(-0.3f, 0.7f );
        glVertex2f(0.3f, 0.7f );
        glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.7f);
		glVertex2f(-0.4f, 0.5f);
		glVertex2f(0.4f, 0.5f);
        glVertex2f(0.2f, 0.7f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.5f);
		glVertex2f(-0.5f, 0.2f);
		glVertex2f(0.5f, 0.2f);
		glVertex2f(0.2f, 0.5f);

		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.1f, 0.0f);
		glVertex2f(-0.1f, 0.2f);
		glVertex2f(0.1f, 0.2f);
		glVertex2f(0.1f, 0.0f);
		glEnd();


                glPointSize(6);
		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.3f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.2f, 0.4f);
		glEnd();



		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.11f, 0.67f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.15f, 0.4f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.2f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.255f, 0.62f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.01f, 0.45f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.09f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.42f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.11f, 0.6f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.15f, 0.58f);
		glEnd();

        glPopMatrix();
        glPopMatrix();

    /////////////////

     ////////////tree santa 2

        glPushMatrix();
        glTranslatef(-0.7,-0.18,0);
        glPushMatrix();

        glScalef(0.2,0.4,0);
        glBegin(GL_TRIANGLES);
        glColor3f(1.0f,1.0f,0.9f);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(-0.3f, 0.7f );
        glVertex2f(0.3f, 0.7f );
        glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.7f);
		glVertex2f(-0.4f, 0.5f);
		glVertex2f(0.4f, 0.5f);
        glVertex2f(0.2f, 0.7f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.5f);
		glVertex2f(-0.5f, 0.2f);
		glVertex2f(0.5f, 0.2f);
		glVertex2f(0.2f, 0.5f);

		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.1f, 0.0f);
		glVertex2f(-0.1f, 0.2f);
		glVertex2f(0.1f, 0.2f);
		glVertex2f(0.1f, 0.0f);
		glEnd();


                glPointSize(6);
		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.3f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.2f, 0.4f);
		glEnd();



		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.11f, 0.67f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.15f, 0.4f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.2f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.255f, 0.62f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.01f, 0.45f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.09f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.42f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.11f, 0.6f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.15f, 0.58f);
		glEnd();



        glPopMatrix();
        glPopMatrix();

        //tree santa 1


        glPushMatrix();
        glTranslatef(-0.50,-0.2,0);
        glPushMatrix();

        glScalef(0.2,0.4,0);
        glBegin(GL_TRIANGLES);
        glColor3f(1.0f,1.0f,0.9f);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(-0.3f, 0.7f );
        glVertex2f(0.3f, 0.7f );
        glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.7f);
		glVertex2f(-0.4f, 0.5f);
		glVertex2f(0.4f, 0.5f);
        glVertex2f(0.2f, 0.7f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.5f);
		glVertex2f(-0.5f, 0.2f);
		glVertex2f(0.5f, 0.2f);
		glVertex2f(0.2f, 0.5f);

		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.1f, 0.0f);
		glVertex2f(-0.1f, 0.2f);
		glVertex2f(0.1f, 0.2f);
		glVertex2f(0.1f, 0.0f);
		glEnd();


                glPointSize(6);
		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.3f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.2f, 0.4f);
		glEnd();



		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.11f, 0.67f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.15f, 0.4f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.2f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.255f, 0.62f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.01f, 0.45f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.09f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.42f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.11f, 0.6f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.15f, 0.58f);
		glEnd();

        glPopMatrix();
        glPopMatrix();

    /////////////////

     ////////////tree left down 2

        glPushMatrix();
        glTranslatef(-0.90,-0.70,0);
        glPushMatrix();

        glScalef(0.2,0.4,0);
        glBegin(GL_TRIANGLES);
        glColor3f(1.0f,1.0f,0.9f);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(-0.3f, 0.7f );
        glVertex2f(0.3f, 0.7f );
        glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.7f);
		glVertex2f(-0.4f, 0.5f);
		glVertex2f(0.4f, 0.5f);
        glVertex2f(0.2f, 0.7f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.5f);
		glVertex2f(-0.5f, 0.2f);
		glVertex2f(0.5f, 0.2f);
		glVertex2f(0.2f, 0.5f);

		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.1f, 0.0f);
		glVertex2f(-0.1f, 0.2f);
		glVertex2f(0.1f, 0.2f);
		glVertex2f(0.1f, 0.0f);
		glEnd();


                glPointSize(6);
		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.3f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.2f, 0.4f);
		glEnd();



		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.11f, 0.67f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.15f, 0.4f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.2f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.255f, 0.62f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.01f, 0.45f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.09f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.42f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.11f, 0.6f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.15f, 0.58f);
		glEnd();



        glPopMatrix();
        glPopMatrix();


        ///////

        //tree middle


        glPushMatrix();
        glTranslatef(-0.10,-0.5,0);
        glPushMatrix();

        glScalef(0.2,0.4,0);
        glBegin(GL_TRIANGLES);
        glColor3f(1.0f,1.0f,0.9f);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(-0.3f, 0.7f );
        glVertex2f(0.3f, 0.7f );
        glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.7f);
		glVertex2f(-0.4f, 0.5f);
		glVertex2f(0.4f, 0.5f);
        glVertex2f(0.2f, 0.7f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.5f);
		glVertex2f(-0.5f, 0.2f);
		glVertex2f(0.5f, 0.2f);
		glVertex2f(0.2f, 0.5f);

		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.1f, 0.0f);
		glVertex2f(-0.1f, 0.2f);
		glVertex2f(0.1f, 0.2f);
		glVertex2f(0.1f, 0.0f);
		glEnd();


                glPointSize(6);
		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.3f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.2f, 0.4f);
		glEnd();



		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.11f, 0.67f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.15f, 0.4f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.2f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.255f, 0.62f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.01f, 0.45f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.09f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.42f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.11f, 0.6f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.15f, 0.58f);
		glEnd();

        glPopMatrix();
        glPopMatrix();

    /////////////////

     ////////////tree left down

        glPushMatrix();
        glTranslatef(-0.76,-0.80,0);
        glPushMatrix();

        glScalef(0.2,0.4,0);
        glBegin(GL_TRIANGLES);
        glColor3f(1.0f,1.0f,0.9f);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(-0.3f, 0.7f );
        glVertex2f(0.3f, 0.7f );
        glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.7f);
		glVertex2f(-0.4f, 0.5f);
		glVertex2f(0.4f, 0.5f);
        glVertex2f(0.2f, 0.7f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.3f,0.5f,0.3f);
		glVertex2f(-0.2f, 0.5f);
		glVertex2f(-0.5f, 0.2f);
		glVertex2f(0.5f, 0.2f);
		glVertex2f(0.2f, 0.5f);

		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.1f, 0.0f);
		glVertex2f(-0.1f, 0.2f);
		glVertex2f(0.1f, 0.2f);
		glVertex2f(0.1f, 0.0f);
		glEnd();


                glPointSize(6);
		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.3f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.2f, 0.4f);
		glEnd();



		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.11f, 0.67f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(0.15f, 0.4f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.2f, 0.3f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.255f, 0.62f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.01f, 0.45f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.09f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(-0.42f, 0.25f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.8f,0.4f,0.0f);
		glVertex2f(-0.11f, 0.6f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.9f,0.9f,0.0f);
		glVertex2f(0.15f, 0.58f);
		glEnd();



        glPopMatrix();
        glPopMatrix();

        ////////

}


void river ()
{
    glColor3ub(240,248,255);
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f, -0.1f);
    glVertex2f(-0.8f, -0.1f);
    glVertex2f(-0.68f, -0.13f);
    glVertex2f(-0.3f, -0.13f);
    glVertex2f(-0.4f, -0.32f);
    glVertex2f(-0.19f, -0.49f);
    glVertex2f(-0.25f, -0.67f);
    glVertex2f(-0.04f, -0.79f);
    glVertex2f(0.016f, -0.86f);
    glVertex2f(0.019f, -0.90f);
    glVertex2f(0.021f, -0.905f);
    glVertex2f(0.02f, -0.91f);
    glVertex2f(0.025f, -0.915f);
    glVertex2f(0.023f, -0.920f);
    glVertex2f(0.025f, -0.925f);
    glVertex2f(0.027f, -1.0f);
    glVertex2f(-1.0, -1.0f);
    glEnd();
}


void hills()
{
    //Hills 1
    glColor3ub (0, 102, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.55f, 0.36f);
    glVertex2f(-0.8f, -0.1f);
    glVertex2f(-0.68f, -0.13f);
    glEnd();
    glColor3ub (3, 182, 10);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.55f, 0.36f);
    glVertex2f(-0.68f, -0.13f);
    glVertex2f(-0.3f, -0.13f);
    glEnd();

    //Hills 2
    glColor3ub (0, 102, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.15f, 0.3f);
    glVertex2f(-0.4f, -0.32f);
    glVertex2f(-0.24f, -0.38f);
    glEnd();
    glColor3ub (3, 182, 10);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.15f, 0.3f);
    glVertex2f(-0.24f, -0.38f);
    glVertex2f(0.1f, -0.38f);
    glEnd();

    //HILLS 3
    glColor3ub (0, 102, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.85f, 0.12f);
    glVertex2f(-1.0f, -0.25f);
    glVertex2f(-1.0f, -0.55f);
    glEnd();
    glColor3ub (3, 182, 10);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.85f, 0.12f);
    glVertex2f(-1.0f, -0.55f);
    glVertex2f(-0.69f, -0.55f);
    glEnd();

    //Hills 4
    glColor3ub (0, 102, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.25f, 0.28f);
    glVertex2f(-0.045f, -0.0f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.1f, -0.07f);
    glVertex2f(0.2f, -0.05f);
    glEnd();

    glColor3ub (3, 182, 10);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.15f, 0.3f);
    glVertex2f(-0.24f, -0.38f);
    glVertex2f(0.1f, -0.38f);
    glEnd();
    glColor3ub (3, 182, 10);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.25f, 0.28f);
    glVertex2f(0.2f, -0.05f);
    glVertex2f(0.38f, -0.05f);
    glEnd();

    //Hills 5
    glColor3ub (0, 102, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.11f, 0.03f);
    glVertex2f(-0.12f, -0.4f);
    glVertex2f(-0.0f, -0.45f);
    glEnd();
    glColor3ub (3, 182, 10);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.11f, 0.03f);
    glVertex2f(0.0f, -0.45f);
    glVertex2f(0.28f, -0.45f);
    glEnd();

    //Hills 6
    glColor3ub (0, 102, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.31f, -0.13f);
    glVertex2f(-0.0f, -0.55f);
    glVertex2f(0.18f, -0.57f);
    glEnd();
    glColor3ub (3, 182, 10);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.31f, -0.13f);
    glVertex2f(0.18f, -0.57f);
    glVertex2f(0.4f, -0.57f);
    glEnd();

    //Hills 7
    glColor3ub (0, 102, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.55f, 0.4f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.45f, -0.04f);
    glEnd();
    glColor3ub (3, 182, 10);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.55f, 0.4f);
    glVertex2f(0.45f, -0.04f);
    glVertex2f(0.7f, -0.04f);
    glEnd();
    glColor3ub (3, 182, 10);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.25f, 0.28f);
    glVertex2f(0.2f, -0.05f);
    glVertex2f(0.38f, -0.05f);
    glEnd();

    //Hills 8
    glColor3ub (0, 102, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.75f, 0.47f);
    glVertex2f(0.55f, -0.04f);
    glVertex2f(0.65f, -0.08f);
    glEnd();
    glColor3ub (3, 182, 10);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.75f, 0.47f);
    glVertex2f(0.65f, -0.08f);
    glVertex2f(0.9f, -0.08f);
    glEnd();

    //Hills 8
    glColor3ub (0, 102, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.978f, 0.3f);
    glVertex2f(0.8f, -0.08f);
    glVertex2f(0.87f, -0.12f);
    glEnd();
    glColor3ub (3, 182, 10);
    glBegin(GL_POLYGON);
    glVertex2f(0.978f, 0.3f);
    glVertex2f(0.87f, -0.12f);
    glVertex2f(1.0f, -0.16);
    glVertex2f(1.0f, 0.2f);
    glEnd();
}


void clouds1()
{
    glPushMatrix();
    glTranslatef(cloud1Position,0.0f, 0.0f);
    float x1,y1,x2,y2;
    float x3,y3,x4,y4;
    float x5,y5,x6,y6;
    float x7,y7,x8,y8;
    float x9,y9,x0,y0;
    float x11,y11,x12,y12;
    float x13,y13,x14,y14;
    float a;
    double radius=0.07;

    x1=-0.4, y1= 0.65;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x2 = x1+sin(a)*radius;
            y2 = y1+cos(a)*radius;
            glVertex2f(x2,y2);
        }
        glEnd();

    x3=-0.35, y3= 0.56;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x4 = x3+sin(a)*radius;
            y4 = y3+cos(a)*radius;
            glVertex2f(x4,y4);
        }
        glEnd();

    x5=-0.35, y5= 0.7;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x6 = x5+sin(a)*radius;
            y6 = y5+cos(a)*radius;
            glVertex2f(x6,y6);
        }
        glEnd();

    x7=-0.26, y7= 0.56;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x8 = x7+sin(a)*radius;
            y8 = y7+cos(a)*radius;
            glVertex2f(x8,y8);
        }
        glEnd();

    x9=-0.26, y9= 0.7;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x0 = x9+sin(a)*radius;
            y0 = y9+cos(a)*radius;
            glVertex2f(x0,y0);
        }
        glEnd();

    x11=-0.18, y11= 0.63;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x12 = x11+sin(a)*radius;
            y12 = y11+cos(a)*radius;
            glVertex2f(x12,y12);
        }
        glEnd();

    x13=-0.3, y13= 0.63;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x14 = x13+sin(a)*radius;
            y14 = y13+cos(a)*radius;
            glVertex2f(x14,y14);
        }
        glEnd();

    glPopMatrix();
}



void clouds2()
{
    glPushMatrix();
    glTranslatef(cloudPosition,0.0f, 0.0f);
    float x1,y1,x2,y2;
    float x3,y3,x4,y4;
    float x5,y5,x6,y6;
    float x7,y7,x8,y8;
    float x9,y9,x0,y0;
    float x11,y11,x12,y12;
    float x13,y13,x14,y14;
    float a;
    double radius=0.07;

    x1=0.5, y1= 0.65;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x2 = x1+sin(a)*radius;
            y2 = y1+cos(a)*radius;
            glVertex2f(x2,y2);
        }
        glEnd();

    x3=0.45, y3= 0.56;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x4 = x3+sin(a)*radius;
            y4 = y3+cos(a)*radius;
            glVertex2f(x4,y4);
        }
        glEnd();

    x5=0.45, y5= 0.7;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x6 = x5+sin(a)*radius;
            y6 = y5+cos(a)*radius;
            glVertex2f(x6,y6);
        }
        glEnd();

    x7=0.36, y7= 0.56;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x8 = x7+sin(a)*radius;
            y8 = y7+cos(a)*radius;
            glVertex2f(x8,y8);
        }
        glEnd();

    x9=0.36, y9= 0.7;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x0 = x9+sin(a)*radius;
            y0 = y9+cos(a)*radius;
            glVertex2f(x0,y0);
        }
        glEnd();

       x11=0.28, y11= 0.63;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x12 = x11+sin(a)*radius;
            y12 = y11+cos(a)*radius;
            glVertex2f(x12,y12);
        }
        glEnd();

    x13=0.4, y13= 0.63;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(239,255,84);
    for (a=0.0f; a<360.0f; a+=0.2)
        {
            x14 = x13+sin(a)*radius;
            y14 = y13+cos(a)*radius;
            glVertex2f(x14,y14);
        }
        glEnd();

        glPopMatrix();
}



void grass1()
{
    glColor3ub(28,230,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.69f, -0.55f);
    glVertex2f(-1.0f, -0.55f);
    glVertex2f(-1.0,-1.0);
    glVertex2f(-0.57,-1.0);
    glVertex2f(-0.57,-0.72);
    glVertex2f(-0.55,-0.69);
    glVertex2f(-0.53,-0.67);
    glVertex2f(-0.51,-0.65);
    glVertex2f(-0.55,-0.63);
    glVertex2f(-0.59,-0.6);
    glEnd();
}


void grass2()
{
    glColor3ub(34,139,34);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glColor3ub(50,205,50);
    glVertex2f(-0.4f, -0.33f);
    glColor3ub(28,230,0);
    glVertex2f(-0.4f,-1.0);
    glVertex2f(1.0f,-1.0);
    glVertex2f(1.0f,0.05f);
    glEnd();
}


void santa()
{


        glPushMatrix();
        glTranslatef(-0.55f,0.4f,0);
        glScalef(0.1f,0.2f,0);



        //shoe
        glBegin(GL_POLYGON);
        glColor3f(0.0f,0.0f,0.2);
        glVertex2f(0.0f, -0.7f);
        glVertex2f(0.0f, -0.8f );
        glVertex2f(0.2f, -0.8f );
        glVertex2f(0.2f,-0.7f );
        glEnd();


        glBegin(GL_POLYGON);
        glColor3f(1.0f,1.0f,1.0);
        glVertex2f(0.0f, -0.7f);
        glVertex2f(0.0f, -0.72f );
        glVertex2f(0.2f, -0.72f );
        glVertex2f(0.2f,-0.7f );
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.0f,0.0f,0.2);
        glVertex2f(-0.1f, -0.7f);
        glVertex2f(-0.1f, -0.8f );
        glVertex2f(-0.3f, -0.8f );
        glVertex2f(-0.3f,-0.7f );
        glEnd();


        glBegin(GL_POLYGON);
        glColor3f(1.0f,1.0f,1.0);
        glVertex2f(-0.1f, -0.7f);
        glVertex2f(-0.1f, -0.72f );
        glVertex2f(-0.3f, -0.72f );
        glVertex2f(-0.3f,-0.7f );
        glEnd();


        //feet
        glBegin(GL_POLYGON);
        glColor3f(1.0f,0.1f,0.0f);
        glVertex2f(0.0f, -0.5f);
        glVertex2f(0.0f, -0.7f );
        glVertex2f(0.2f, -0.7f );
        glVertex2f(0.2f,-0.5f );
        glEnd();


        glBegin(GL_POLYGON);
        glColor3f(1.0f,0.1f,0.0f);
        glVertex2f(-0.1f, -0.5f);
        glVertex2f(-0.1f, -0.7f );
        glVertex2f(-0.3f, -0.7f );
        glVertex2f(-0.3f,-0.5f );
        glEnd();



//pant
        glBegin(GL_POLYGON);
        glColor3f(1.0f,0.1f,0.0f);
        glVertex2f(0.0f, -0.5f);
        glVertex2f(0.3f, -0.5f );
        glVertex2f(0.3f, -0.3f );
        glVertex2f(0.0f,-0.3f );
        glEnd();


        glBegin(GL_POLYGON);
        glColor3f(1.0f,0.1f,0.0f);
        glVertex2f(0.0f, -0.3f);
        glVertex2f(0.0f, -0.5f );
        glVertex2f(-0.4f, -0.5f );
        glVertex2f(-0.4f,-0.3f );
        glEnd();


        glBegin(GL_POLYGON);
        glColor3f(1.0f,1.0f,1.0);
        glVertex2f(-0.4f, -0.5f);
        glVertex2f(-0.4f, -0.47f );
        glVertex2f(0.3f, -0.47f );
        glVertex2f(0.3f,-0.5f );
        glEnd();


        //belt
        glBegin(GL_POLYGON);
        glColor3f(0.0f,0.0f,0.1f);
        glVertex2f(0.3f, -0.2f);
        glVertex2f(0.3f, -0.3f );
        glVertex2f(-0.4f, -0.3f );
        glVertex2f(-0.4f,-0.2f );
        glEnd();


        //body
        glBegin(GL_POLYGON);
        glColor3f(1.0f,0.1f,0.0f);
        glVertex2f(-0.4f, -0.2f);
        glVertex2f(-0.3f, 0.2f );
        glVertex2f(0.2f, 0.2f );
        glVertex2f(0.3f,-0.2f );
        glEnd();


        //left hand
        glBegin(GL_POLYGON);
        glColor3f(1.0f,0.1f,0.0f);
        glVertex2f(-0.3f, 0.0f);
        glVertex2f(-0.5f,-0.2f );
        glVertex2f(-0.6f, -0.1f );
        glVertex2f(-0.3f,0.2f );
        glEnd();


        glBegin(GL_POLYGON);
        glColor3f(1.0f,1.0f,1.0);
        glVertex2f(-0.5f, -0.2f);
        glVertex2f(-0.52f,-0.21f );
        glVertex2f(-0.625f, -0.12f );
        glVertex2f(-0.6f,-0.1f );
        glEnd();


        //right hand
        glBegin(GL_POLYGON);
        glColor3f(1.0f,0.1f,0.0f);
        glVertex2f(0.25f, 0.0f);
        glVertex2f(0.4f,-0.2f );
        glVertex2f(0.5f, -0.1f );
        glVertex2f(0.2f,0.2f );
        glEnd();


        glBegin(GL_POLYGON);
        glColor3f(1.0f,1.0f,1.0);
        glVertex2f(0.4f,-0.2f);
        glVertex2f(0.41f,-0.21f );
        glVertex2f(0.51f, -0.12f );
        glVertex2f(0.5f, -0.1f );
        glEnd();

        //head
        glBegin(GL_POLYGON);
        glColor3f(1.0f,0.9f,0.7f);
        glVertex2f(-0.15f, 0.2f);
        glVertex2f(-0.3f,0.4f );
        glVertex2f(-0.2f, 0.5f );
        glVertex2f(0.15f,0.5f );
        glVertex2f(0.2f,0.4f );
        glVertex2f(0.1f,0.2f );
        glEnd();


        //hat
        glBegin(GL_POLYGON);
        glColor3f(1.0f,1.0f,1.0f);
        glVertex2f(-0.25f, 0.5f);
        glVertex2f(-0.25f,0.55f );
        glVertex2f(0.2f, 0.55f );
        glVertex2f(0.2f,0.5f );
        glEnd();




        glBegin(GL_TRIANGLES);
        glColor3f(1.0f,0.1f,0.0f);
        glVertex2f(-0.2f, 0.55f);
        glVertex2f(-0.05f,0.85f );
        glVertex2f(0.17f, 0.55f );
        glEnd();



        glBegin(GL_POLYGON);
        glColor3f(1.0f,1.0f,1.0f);
        glVertex2f(0.0, -0.2f);
        glVertex2f(-0.1f,-0.2f );
        glVertex2f(-0.1f, 0.2f );
        glVertex2f(0.0f,0.2f );
        glEnd();


        //bottomplate
        glPointSize(10);
		glBegin(GL_POINTS);
		glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(-0.05f, 0.85f);
		glEnd();


		//eye
		glBegin(GL_POINTS);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(-0.1f, 0.4f);
		glEnd();


		glBegin(GL_POINTS);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(0.0f, 0.4f);
		glEnd();


        //nose
		glPointSize(6);
		glBegin(GL_POINTS);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(-0.05f, 0.33f);
		glEnd();


        //beard
		glBegin(GL_TRIANGLES);
        glColor3f(1.0f,1.0f,1.0f);
        glVertex2f(-0.22, 0.3f);
        glVertex2f(0.15f,0.3f );
        glVertex2f(-0.04f, -0.03f );
        glEnd();

        glPopMatrix();
}

void house ()
{

        //house blue
        glPushMatrix();
        glTranslatef(0.9f,-0.2f,0);
        glScalef(0.6f,0.6f,0);

        glBegin(GL_POLYGON);
        glColor3f (0.1f,0.2f,1.0f);
        glVertex2f(0.2f, 0.2f);
        glVertex2f(-0.2f, 0.2f );
        glVertex2f(-0.2f, -0.2f );
        glVertex2f(0.2f, -0.2f);
        glEnd();


		glBegin(GL_TRIANGLES);
		glColor3f (1.0f,1.0f,1.0f);
		glVertex2f(-0.3f, 0.2f);
		glVertex2f(0.0f, 0.6f);
		glVertex2f(0.3f, 0.2f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,0.0f);
		glVertex2f(-0.085f, 0.1f);
		glVertex2f(-0.125f, 0.1f);
		glVertex2f(-0.125f, 0.165f);
		glVertex2f(-0.085f, 0.165f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,0.0f);
		glVertex2f(-0.085f, -0.01f);
		glVertex2f(-0.125f, -0.01f);
		glVertex2f(-0.125f, -0.075f);
		glVertex2f(-0.085f, -0.075f);
		glEnd();




		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,0.0f);

		glVertex2f(0.085f, 0.1f);
		glVertex2f(0.125f, 0.1f);
		glVertex2f(0.125f, 0.165f);
		glVertex2f(0.085f, 0.165f);

		glEnd();



		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,0.0f);
		glVertex2f(0.085f, -0.01f);
		glVertex2f(0.125f, -0.01f);
		glVertex2f(0.125f, -0.075f);
		glVertex2f(0.085f, -0.075f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f (0.8f,0.6f,0.2f);
		glVertex2f(-0.05f, -0.12f);
		glVertex2f(0.05f, -0.12f);
		glVertex2f(0.05f, -0.2f);
		glVertex2f(-0.05f, -0.2f);

		glEnd();




		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,1.0f);

		glVertex2f(-0.1f, 0.25f);
		glVertex2f(-0.2f, 0.25f);
		glVertex2f(-0.2f, 0.7f);
		glVertex2f(-0.1f, 0.7f);

		glEnd();

		glPopMatrix();

		//house red
        glPushMatrix();
        glTranslatef(0.2f,-0.05f,0);
        glScalef(0.2f,0.2f,0);

        glBegin(GL_POLYGON);
        glColor3f (0.1f,0.2f,1.0f);
        glVertex2f(0.2f, 0.2f);
        glVertex2f(-0.2f, 0.2f );
        glVertex2f(-0.2f, -0.2f );
        glVertex2f(0.2f, -0.2f);
        glEnd();


		glBegin(GL_TRIANGLES);
		glColor3f (1.0f,1.0f,1.0f);
		glVertex2f(-0.3f, 0.2f);
		glVertex2f(0.0f, 0.6f);
		glVertex2f(0.3f, 0.2f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,0.0f);
		glVertex2f(-0.085f, 0.1f);
		glVertex2f(-0.125f, 0.1f);
		glVertex2f(-0.125f, 0.165f);
		glVertex2f(-0.085f, 0.165f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,0.0f);
		glVertex2f(-0.085f, -0.01f);
		glVertex2f(-0.125f, -0.01f);
		glVertex2f(-0.125f, -0.075f);
		glVertex2f(-0.085f, -0.075f);
		glEnd();




		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,0.0f);

		glVertex2f(0.085f, 0.1f);
		glVertex2f(0.125f, 0.1f);
		glVertex2f(0.125f, 0.165f);
		glVertex2f(0.085f, 0.165f);

		glEnd();



		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,0.0f);
		glVertex2f(0.085f, -0.01f);
		glVertex2f(0.125f, -0.01f);
		glVertex2f(0.125f, -0.075f);
		glVertex2f(0.085f, -0.075f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f (0.8f,0.6f,0.2f);
		glVertex2f(-0.05f, -0.12f);
		glVertex2f(0.05f, -0.12f);
		glVertex2f(0.05f, -0.2f);
		glVertex2f(-0.05f, -0.2f);

		glEnd();




		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,1.0f);

		glVertex2f(-0.1f, 0.25f);
		glVertex2f(-0.2f, 0.25f);
		glVertex2f(-0.2f, 0.7f);
		glVertex2f(-0.1f, 0.7f);

		glEnd();

		glPopMatrix();

		        //house orange
        glPushMatrix();
        glTranslatef(0.7f,-0.18f,0);
        glScalef(0.55f,0.55f,0);

        glBegin(GL_POLYGON);
        glColor3f (0.1f,0.2f,1.0f);
        glVertex2f(0.2f, 0.2f);
        glVertex2f(-0.2f, 0.2f );
        glVertex2f(-0.2f, -0.2f );
        glVertex2f(0.2f, -0.2f);
        glEnd();


		glBegin(GL_TRIANGLES);
		glColor3f (1.0f,1.0f,1.0f);
		glVertex2f(-0.3f, 0.2f);
		glVertex2f(0.0f, 0.6f);
		glVertex2f(0.3f, 0.2f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,0.0f);
		glVertex2f(-0.085f, 0.1f);
		glVertex2f(-0.125f, 0.1f);
		glVertex2f(-0.125f, 0.165f);
		glVertex2f(-0.085f, 0.165f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,0.0f);
		glVertex2f(-0.085f, -0.01f);
		glVertex2f(-0.125f, -0.01f);
		glVertex2f(-0.125f, -0.075f);
		glVertex2f(-0.085f, -0.075f);
		glEnd();




		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,0.0f);

		glVertex2f(0.085f, 0.1f);
		glVertex2f(0.125f, 0.1f);
		glVertex2f(0.125f, 0.165f);
		glVertex2f(0.085f, 0.165f);

		glEnd();



		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,0.0f);
		glVertex2f(0.085f, -0.01f);
		glVertex2f(0.125f, -0.01f);
		glVertex2f(0.125f, -0.075f);
		glVertex2f(0.085f, -0.075f);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f (0.8f,0.6f,0.2f);
		glVertex2f(-0.05f, -0.12f);
		glVertex2f(0.05f, -0.12f);
		glVertex2f(0.05f, -0.2f);
		glVertex2f(-0.05f, -0.2f);

		glEnd();




		glBegin(GL_POLYGON);
		glColor3f (1.0f,1.0f,1.0f);

		glVertex2f(-0.1f, 0.25f);
		glVertex2f(-0.2f, 0.25f);
		glVertex2f(-0.2f, 0.7f);
		glVertex2f(-0.1f, 0.7f);

		glEnd();

		glPopMatrix();


}


void snowman()
{
       //body
    glPushMatrix();
    glTranslatef(0.51,-0.20,0);
    glScalef(0.25,0.25,0);

    glPushMatrix();
    glTranslatef(0,-0.4,0);
    glScalef(0.7,1,0);
    glColor3f(1.0,1.0,1.0);
    glutSolidSphere(0.3,100,10);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,0);
    glScalef(0.7,1,0);
    glColor3f(1.0,1.0,1.0);
    glutSolidSphere(0.2,100,10);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0.3,0);
    glScalef(0.7,1,0);
    glColor3f(1.0,1.0,1.0);
    glutSolidSphere(0.15,100,10);
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);
	glColor3f (1.0f,0.0f,0.1f);
    glVertex2f(0.08f, 0.17f);
    glVertex2f(-0.08f, 0.17f );
    glVertex2f(-0.08f, 0.19f );
    glVertex2f(0.08f, 0.19f);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3f (1.0f,0.0f,0.1f);
    glVertex2f(-0.04f, 0.17f);
    glVertex2f(-0.05f, 0.17f );
    glVertex2f(-0.1f, 0.11f);
    glVertex2f(-0.09f, 0.1f );
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f (1.0f,0.0f,0.1f);
    glVertex2f(-0.03f, 0.17f);
    glVertex2f(-0.04f, 0.17f );
    glVertex2f(-0.03f, 0.11f);
    glVertex2f(-0.02f, 0.1f );
    glEnd();


    glPushMatrix();
    glTranslatef(-0.03,0.35,0);
    glScalef(0.7,1,0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.02,100,10);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.03,0.35,0);
    glScalef(0.7,1,0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.02,100,10);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.075,0);
    glScalef(0.7,1,0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.02,100,10);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.0,0);
    glScalef(0.7,1,0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.02,100,10);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,-0.075,0);
    glScalef(0.7,1,0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.02,100,10);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.02,0.23,0);
    glScalef(0.7,1,0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.01,100,10);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.05,0.25,0);
    glScalef(0.7,1,0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.01,100,10);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.02,0.23,0);
    glScalef(0.7,1,0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.01,100,10);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.05,0.25,0);
    glScalef(0.7,1,0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.01,100,10);
    glEnd();
    glPopMatrix();

    //hand


    glBegin(GL_POLYGON);
	glColor3f (0.7f,0.4f,0.0f);
    glVertex2f(0.14f, 0.01f);
    glVertex2f(0.3f, 0.01f );
    glVertex2f(0.3f, -0.01f );
    glVertex2f(0.14f, -0.01f);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3f (0.7f,0.4f,0.0f);
    glVertex2f(-0.14f, 0.01f);
    glVertex2f(-0.3f, 0.01f );
    glVertex2f(-0.3f, -0.01f );
    glVertex2f(-0.14f, -0.01f);
    glEnd();


    //nose

    glBegin(GL_TRIANGLES);
    glColor3f (1.0f,0.5f,0.0f);
    glVertex2f(-0.01f, 0.275f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(0.15f, 0.275f);
    glEnd();


    //hat

    glBegin(GL_POLYGON);
	glColor3f (0.0f,0.0f,0.0f);
    glVertex2f(0.125f, 0.41f);
    glVertex2f(-0.125f, 0.41f );
    glVertex2f(-0.125f, 0.46f );
    glVertex2f(0.125f, 0.46f);
    glEnd();



    glBegin(GL_POLYGON);
	glColor3f (0.0f,0.0f,0.0f);
    glVertex2f(0.08f, 0.46f);
    glVertex2f(-0.08f, 0.46f );
    glVertex2f(-0.08f, 0.65f );
    glVertex2f(0.08f, 0.65f);
    glEnd();

    glPopMatrix();



}





void fristDesign()
{
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.28,-.5);
    glVertex2f(.28,-0.5);
    glVertex2f(0.28,0.5);
    glVertex2f(-0.28,0.5);
    glEnd();

    glColor3ub(165, 42, 42);
    renderBitmapString(-.21, 0.4,(void *)font1,"Computer Graphics Project");

    glColor3ub(188, 143, 143);
    renderBitmapString(-.15, 0.26,(void *)font1,"Christmas Day");

    glColor3ub(0, 179, 0);
    renderBitmapString(-.18, 0.06,(void *)font1,"Press SPACE to START");

    glColor3ub(211, 211, 211);
    renderBitmapString(-0.189, -0.048,(void *)font2,"Group - 9");
}

void LastDesign()
{
    glClearColor(0.5f, 0.5f, 0.5f, 1);
    //menu
    glColor3ub(105,105,105);
    glBegin(GL_POLYGON);
    glVertex2f(-.28,-.5);
    glVertex2f(.28,-0.5);
    glVertex2f(0.28,0.5);
    glVertex2f(-0.28,0.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-.28,-.5);
    glVertex2f(0.28,0.5);
    glVertex2f(-0.38,0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-.28,-.5);
    glVertex2f(0.28,0.5);
    glVertex2f(0.38,0.05);
    glEnd();

    glColor3ub(20, 222, 100);
    renderBitmapString(-.11,0.06,(void *)font1,"Thank You !");
}


void myDisplay(void)
{
      glClear (GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPointSize(2.0);
    if(start_flag ==0 )
        {
            fristDesign();
        }
    else if(start_flag == 1)
        {

            grass2();

            river();

            hills();

            grass1();

            clouds1();

            clouds2();

            tree();

            santa();

            house ();

            snowman();


        }

     else if(start_flag == 2)
        {
            LastDesign();
        }

    glFlush ();
}

void Night(int value){

if(night){

    glClearColor(0.0,0.0,0.2,0.0);
	glutPostRedisplay();
    glutTimerFunc(5, Night, 0);
    glFlush();

}
}

void myKeyboard(unsigned char key, int x, int y)
{
    switch(key)
    {

case 'n':
        night = true;
        Night(_nt);
        break;

    case 'd':
        night = false;
        glClearColor(0.5,0.8,1.0,0.0);
        break;



        case ' ':
            if(start_flag==0)
                {
                    start_flag = 1;
                }
            else if(start_flag == 1)
                {
                    start_flag = 2;
                }
            break;

        case 10 :
            exit(0);
            break;

        default:
            break;

        glutPostRedisplay();

    }

}


void myInit (void)
{
    glClearColor(0.5,0.8,1.0,0.0);
}



int main(int argc, char** argv)
{
    cout << "Press N : For Night " << endl << endl;
    cout << "Press D : For Day" << endl << endl;

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1200, 680);
    glutInitWindowPosition (50, 10);
    glutCreateWindow ("Christmas Day");

    myInit();

    glutDisplayFunc(myDisplay);

    glutKeyboardFunc(myKeyboard);


    glutTimerFunc(1000, updateCloud, 0);
    glutTimerFunc(1000, updateCloud1, 0);



    glutMainLoop();
}

