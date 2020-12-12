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


void bienvenida()
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
}


int menuprin();

int menuprin ()
{
  	int opcion = -1;	
  
 	printf("\tMenu principal");
	printf("\n\t========================\n");
	
	
	printf("\n\t1.- Modulo Consultorio Veterinario");
	printf("\n\t2.- Modulo del Asistente");
	printf("\n\t3.- Modulo Administracion");
	printf("\n\n");
	printf("\n\t4- Cerrar la aplicacion.");

	printf("\n\n\tIngrese la opcion: ");
	scanf("%d", &opcion);
  	
  return opcion;
};


int modconsul();

int modconsul ()
{
  	int opcion = -1;	
  
 	printf("\tModulo Consultorio Veterinario");
	printf("\n\t========================\n");
	
	
	printf("\n\t1.- Iniciar Sesion");
	printf("\n\t2.- Visualizar Lista de Espera de Turnos (informe)");
	printf("\n\t3.- Registrar Evolucion de la Mascota");
	printf("\n\n");
	printf("\n\t4- Cerrar la aplicacion.");

	printf("\n\n\tIngrese la opcion: ");
	scanf("%d", &opcion);
  	
  return opcion;
};

int modasis();

int modasis ()
{
  	int opcion = -1;	
  
 	printf("\tModulo del Asistente");
	printf("\n\t========================\n");
	
	
	printf("\n\t1.- Iniciar Sesion");
	printf("\n\t2.- Registrar Mascota");
	printf("\n\t3.- Registrar Turno");
	printf("\n\t4.- Listado de Atenciones por Veterinario y Fecha");
	printf("\n\n");
	printf("\n\t5.- Cerrar la aplicacion.");
	printf("\n\n\tIngrese la opcion: ");
	scanf("%d", &opcion);
  	
  return opcion;
};


int modadmin();

int modadmin ()
{
  	int opcion = -1;	
  
 	printf("\tModulo Administracion");
	printf("\n\t========================\n");
	
	
	printf("\n\t1.- Registrar Veterinario");
	printf("\n\t2.- Registrar Usuario Asistente");
	printf("\n\t3.- Atenciones por Veterinarios");
	printf("\n\t4.- Ranking de Veterinarios por Atenciones");
	printf("\n\n");
	printf("\n\t5.- Cerrar la aplicacion.");
	printf("\n\n\tIngrese la opcion: ");
	scanf("%d", &opcion);
  	
  return opcion;
};



main ()
{
  bienvenida();
  
  mascota reg;
  int con, contrasena, det, determinar;
  int op = -1 , opcon = -1 , opsis = -1 , opadmin = -1;

	do{
		op = menuprin();
		system ("cls");
		switch (op)
		{
		case 1:
			{
			do{
				opcon = -1;
				opcon = modconsul();
				system ("cls");
				switch (opcon)
				{
				case 1:
					{	
					printf("\nIniciar Sesion\n");
					//system ("pause");
					break;	
					}
				
				case 2:
					{	
					printf("\nVisualizar Lista de Espera de Turnos (informe)\n");
					//system ("pause");
					break;	
					}
				case 3:
					{
					printf("\nRegistrar Evolucion de la Mascota\n");
				//system ("pause");
				    break;	
				  
					}
				case 4:
					{	
					printf ("\nEl programa ha finalizado\n");
					break;
					}
				default:
					{
					printf ("\nUsted selecciono una opcion incorrecta\n");
				//	system ("pause");
					break;	
					}
				
				}

			}while(opcon != 4);
			
			//system ("pause");
			break;	
			}
			
		case 2:
			{	
			do{
				opsis = -1;
				opsis = modasis();
				system ("cls");
				switch (opsis)
				{
				case 1:
					{	
					printf("Iniciar Sesion");
				//	system ("pause");
					break;	
					}
				case 2:
					{	
					printf("Registrar Mascota");
				//	system ("pause");
					break;	
					}
				case 3:
					{
					printf("Registrar Turno");
				//	system ("pause");
				   break;	
				  
					}
				case 4:
					{	
					printf ("Listado de Atenciones por Veterinario y Fecha");
					break;
					}
				case 5:
					{	
					printf ("\nEl programa ha finalizado\n");
					break;
					}
				default:
					{
					
					printf ("\nUsted selecciono una opcion incorrecta\n");
					break;	
					}
				
				}
			
			//system ("pause");
			}while(opsis != 5);
			break;	
			}
		case 3:
			{
			do{
				opadmin = -1;
				opadmin = modadmin();
				system ("cls");
				switch (opadmin)
				{
				case 1:
					{	
					printf("Registrar Veterinario");
				//	system ("pause");
					break;	
					}
				
				case 2:
					{	
					printf("Registrar Usuario Asistente");
				//	system ("pause");
					break;	
					}
				case 3:
					{
					printf("Atenciones por Veterinarios");
				//	system ("pause");
				    break;	
				  
					}
				case 4:
					{	
					printf ("Ranking de Veterinarios por Atenciones");
					break;
					}
				case 5:
					{	
					printf ("\nEl programa ha finalizado\n");
					break;
					}
				default:
					{
					
					printf ("\nUsted selecciono una opcion incorrecta\n");
					break;	
					}
				
				}
			
			//system ("pause");
		
			}while(opadmin != 5);
		    break;	
		  
			}
		case 4:
			{	
			printf ("\nEl programa ha finalizado\n");
			break;
			}
		default:
			{
			
			printf ("\nUsted selecciono una opcion incorrecta\n");
			break;	
			}
		
		}
	
	}while(op != 4);

  
}

