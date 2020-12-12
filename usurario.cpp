#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//TRABAJO INTEGRADOR-ALBORNOZ-BEJAR-BRANDAN-CABRERA

typedef char cadena [100];


struct fecha
{
    int dia;
    int mes;
    int anio;
};

struct veterinario
{
    char apynom[60];
    int matricula;
    char contrasenia[10]; 
    int dni;
    char telefono[25];
};

struct usuario
{
    char usu[60];
    char contrasenia[60];
    char apynom[60];
    int cp;
};

struct turnos
{
    int mat;
    fecha fn;
    int dni;
    char detalle[380];
};

struct mascota
{
    char apynom[60];
    char domicilio[60];
    int dni;
    char localidad[60];
    fecha fec;
    float peso;
    char tel[25];
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
	
  mascota reg;
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
  
}

