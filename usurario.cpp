#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef char cadena [100];

struct registro
{
	cadena apeynomb;
	int dni; //del dueño
	int localidad;
	int edad; //calculada con la fecha de nacimiento registrada
	float peso; 
};

int Menu()
{
	int opc= 0;
	system ("color 5B");
	printf ("\n"); 
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	
	printf ("\t\t\t****************************************************************\n");
	printf ("\t\t\t****************************************************************\n");
	printf ("\t\t\t****************************************************************\n");
	printf ("\t\t\t****************************************************************\n");	
	printf ("\t\t\t***********************B I E V E N I D O************************\n");
	printf ("\t\t\t******************************A L*******************************\n");
	printf ("\t\t\t****************************M E N U*****************************\n");
	printf ("\t\t\t****************************************************************\n");
	printf ("\t\t\t****************************************************************\n");
	printf ("\t\t\t****************************************************************\n");
	printf ("\t\t\t****************************************************************\n");
	
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");


    system ("pause");
    system ("cls");
    printf ("\nIngrese la opcion que desea realizar");
	printf ("\n------------------------------------\n");
	printf ("\n1) Iniciar Sesion");
	printf ("\n2) Visualizar Lista de Espera de Turnos (informe)");
	printf ("\n3) Registrar Evolucion de la Mascota");
	printf ("\n4) Cerrar la aplicacion");
	printf ("\nOpcion: ");
	scanf ("%d", &opc);
	return opc;
	
}


int determinacion (int con);

main ()
{
	
  registro reg;
  int con, contrasena, det, determinar;
  int opc = 0;

  
  do
  {
  		system("cls");
		opc = Menu();
		system("cls");
		switch (opc)
		{
			case 1:
				{
					printf ("hola");
					system ("pause");
				}
		}
  	
  	
  	
  }while (opc != 0);
  //printf ("Ingrese la contraseña uwu (Conjunto numerico de 3 cifras)");
  //scanf ("%d", &con);
  printf ("Ingrese el nombre");
  _flushall();
  gets (reg.apeynomb);
   det = determinacion (con);
   con = contrasena; 
	printf ("%d", con);
}

int determinacion (int con)
{

  int  B=0;
  do
  {
  	printf ("Ingrese la contraseña uwu (Conjunto numerico de 3 cifras)");
    scanf ("%d", &con);
   if (con == 323)
    {  	
  	 printf ("La clave es correcta");
	 con = 323;
	 B = 1; 
    }
    else
     {	
	  printf ("\nLa clave es incorrecta, Por favor volver a ingresar");	
	  con = 0;
	  int B = 0; 
     }
  }while (B==0);

   return con;

}


