//Semestre 2018 - 1
//************************************************************//
//************************************************************//
//************** Alumno (s): Sotres Cataño Mario**************//
//*************	se usó Visual Studio 2015				******//
//*************											******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

														
	glPointSize(10);
	/**********  M  ************/
	glBegin(GL_LINE_LOOP);
		glColor3f(0.0f, 0.0f, 2.0f);
		glVertex3f(-23.0f, 27.0f, -1.2f);
		glVertex3f(-20.0f, 27.0f, -1.2f);
		glVertex3f(-16.0f, 24.0f, -1.2f);
		glVertex3f(-12.0f, 27.0f, -1.2f);
		glVertex3f(-9.0f, 27.0f, -1.2f);
		glVertex3f(-9.0f, 17.0f, -1.2f);
		glVertex3f(-12.0f, 17.0f, -1.2f);
		glVertex3f(-12.0f, 24.0f, -1.2f);
		glVertex3f(-16.0f, 21.0f, -1.2f);
		glVertex3f(-20.0f, 24.0f, -1.2f);
		glVertex3f(-20.0f, 17.0f, -1.2f);
		glVertex3f(-23.0f, 17.0f, -1.2f);
	glEnd();

	//********   S  *************//

	/*   Parte 1   */
	glBegin(GL_POLYGON);
	glColor3f(2.0f, 0.0f, 0.0f);

		glVertex3f(-5.0f, 27.0f, -1.2f);
		glVertex3f(5.0f, 27.0f, -1.2f);
		glVertex3f(5.0f, 25.0f, -1.2f);
		glVertex3f(-3.0f, 25.0f, -1.2f);

	glEnd();

	/*   Parte 2  */
	glBegin(GL_POLYGON);
	glColor3f(2.0f, 0.0f, 0.0f);

	glVertex3f(-5.0f, 27.0f, -1.2f);
	glVertex3f(-3.0f, 25.0f, -1.2f);
	glVertex3f(-3.0f, 23.5f, -1.2f);
	glVertex3f(-5.0f, 21.5f, -1.2f);

	glEnd();

	/*   Parte 3   */
	glBegin(GL_POLYGON);
	glColor3f(2.0f, 0.0f, 0.0f);

	glVertex3f(-3.0f, 23.5f, -1.2f);
	glVertex3f(5.0f, 23.5f, -1.2f);
	glVertex3f(3.0f, 21.5f, -1.2f);
	glVertex3f(-5.0f, 21.5f, -1.2f);

	glEnd();

	/*  Parte 4   */
	glBegin(GL_POLYGON);
	glColor3f(2.0f, 0.0f, 0.0f);

	glVertex3f(5.0f, 23.5f, -1.2f);
	glVertex3f(5.0f, 17.0f, -1.2f);
	glVertex3f(3.0f, 19.0f, -1.2f);
	glVertex3f(3.0f, 21.5f, -1.2f);

	glEnd();

	/* Parte 5 */
	glBegin(GL_POLYGON);
	glColor3f(2.0f, 0.0f, 0.0f);

	glVertex3f(-5.0f, 19.0f, -1.2f);
	glVertex3f(3.0f, 19.0f, -1.2f);
	glVertex3f(5.0f, 17.0f, -1.2f);
	glVertex3f(-5.0f, 17.0f, -1.2f);

	glEnd();

	/***********  C   ***********/

	glBegin(GL_LINE_LOOP);
	glColor3f(1.5f, 1.5f, 0.0f);

	glVertex3f(9.0f, 27.0f, -1.2f);
	glVertex3f(19.0f, 27.0f, -1.2f);
	glVertex3f(19.0f, 24.0f, -1.2f);
	glVertex3f(12.0f, 24.0f, -1.2f);
	glVertex3f(12.0f, 20.0f, -1.2f);
	glVertex3f(19.0f, 20.0f, -1.2f);
	glVertex3f(19.0f, 17.0f, -1.2f);
	glVertex3f(9.0f, 17.0f, -1.2f);

	glEnd();


	/*********  Estrella *********/
	glBegin(GL_POLYGON);
	glColor3f(1.5f, 2.0f, 0.0f);

	glVertex3f(-5.0f, 8.7f, -1.2f);
	glVertex3f(-2.5f, 13.0f, -1.2f);
	glVertex3f(0.0f, 8.7f, -1.2f);
	glVertex3f(5.0f, 8.7f, -1.2f);
	glVertex3f(2.5f, 4.4f, -1.2f);
	glVertex3f(5.0f, 0.1f, -1.2f);
	glVertex3f(0.0f, 0.1f, -1.2f);
	glVertex3f(-2.5f, -4.2f, -1.2f);
	glVertex3f(-5.0f, 0.1f, -1.2f);
	glVertex3f(-10.0f, 0.1f, -1.2f);
	glVertex3f(-7.5f, 4.4f, -1.2f);
	glVertex3f(-10.0f, 8.7f, -1.2f);

	glEnd();




	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-25,25,-30,30,0.1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

