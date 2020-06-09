/*                     EXAMEN PROGRESO 2

Datos de entrada
Votos, ya sea 1 para el candidato 1, 2 al candidato 2...

Proceso
establecer el propotitpo de la funcion ingreso de datos

en el caso 1, llamar a la funcion Ingreso de datos con par�metros de tipo arreglo
en el caso 2 llamar a la funcion conteo de datos con par�metros de tipo arreglo

definir la funcion Ingreso de datos con un parametro entero de tipo arreglo llamada voto
declara variables enteras
iniciar funcion mientaras el arreglo en l�a psicion i sea distinto de 0
validar si no es un numero0 mayor a 5 o menor a 0
aumentar el contador

retornar el arreglo con los votos


defniri funcion impresion de datos
declarar varibale de tipo enteros
abrir funcion mientas y funcion Si anidadas


Datos de salida
Cantidad de votos de cada candidato
*/
#include <stdio.h>
#include <stdlib.h>
#define tam 30/*Se deine un tama�ao general para utilizar en diferentes variables*/
int ingresoDatos (int []);/*Definici�n del prototipo de la funcion para ingresar los votos con par�metro de tipo arreglo*/
void impresionDatos (int[]);/*Definici�n del prototipode  la funcion para contabilizar los votos con par�metro de tipo arreglo*/


void main()/*Inicio funci�n principal*/
{
	int num1, num2, op;/*Delcaraci�n de variables de tipo entero*/
	int voto[tam];/*definici�n de una variabvle de tipo arreglo con tama�o definido antes*/
	while(op!=6)/*Validaci�n de la funci�n switch*/
    {
    printf("\n\t\tMenu\n");
    printf("1.Ingreso de votos\n2.Conteo de votos\n3.Salir\n");
    printf("Escoja una opcion:");/*Pedir al usuario que ingrese una de las opciones mostradas*/
    scanf("%d",&op);/*Leer la opci�n ingresada*/
    
        switch(op)/*Inicio funci�n switch con los ejercicios*/
        {
            case 1:/*Inicio caso 1 Ingreso de votos*/
            	{          						
					printf("\tIngreso de Votos\n");
					ingresoDatos (voto);/*Llamada a la funci�n ingreso de votos*/			
				}
            break;
            case 2:/*Inicio caso 2 Ingreso de votos*/
                {
                	printf("\tConteo de Votos\n");
					impresionDatos(voto);/*Llamada a la funci�n conteo de votos*/	
				}
            break;
            case 3:
                exit(0);
            break;
            default:
                printf("Intente nuevamente. Opcion invalida.\n");
            break;
        }/*Fin funcion switch*/
    }/*Fin funcion while*/
}/*Fin de la funci�n principal*/

int ingresoDatos (int votos[])/*Definici�n de la funcion para ingresar los votos*/
{
	int i=0;/*Declaracion de variables*/
	do
	{
		printf ("Presione 0 para finalizar.\n");
		printf ("Ingrese el voto : ");
		scanf ("%d",&votos[i]);//ingreo de datos
		while (votos[i]<0 && votos[i]>5)
		{
			printf ("Ingrese nuevamente: ");
			scanf ("%d",&votos[i]);
		}
	}while(votos[i]!=0);
	return votos[i];//retornar valor
}

void impresionDatos (int votos [])
{
	int i=0, uno=0, dos=0, tres=0, cuatro=0, cinco=0;//delcaracion de variabkles
	while(i<=votos[uno])
	{
		if(votos[i]==1)
		{
			uno++;
		}
		else
		{
			if (votos[i]==2)
			{
				dos++;
			}
			else
			{
				if (votos[i]==3)
				{
					tres++;
				}
				else
				{
					if(votos[i]==4)
					{
						cuatro++;
					}
					else
					{
						cinco++;
					}
				}
			}
		}
		i++;
	}
	printf("Candidato 1: %d votos\n", uno);
	printf("Candidato 2: %d votos\n", dos);
	printf("Candidato 3: %d votos\n",tres);
	printf("Candidato 4: %d votos\n", cuatro);
	printf("Candidato 5: %d votos\n",cinco);
}


