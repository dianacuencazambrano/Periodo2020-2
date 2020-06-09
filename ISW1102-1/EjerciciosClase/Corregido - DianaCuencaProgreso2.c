/*                     EXAMEN PROGRESO 2

Datos de entrada
Votos, ya sea 1 para el candidato 1, 2 al candidato 2...

Proceso
establecer el propotitpo de la funcion ingreso de datos

en el caso 1, llamar a la funcion Ingreso de datos con parámetros de tipo arreglo
en el caso 2 llamar a la funcion conteo de datos con parámetros de tipo arreglo

definir la funcion Ingreso de datos con un parametro entero de tipo arreglo llamada voto
declara variables enteras
iniciar funcion mientaras el arreglo en lña psicion i sea distinto de 0
validar si no es un numero0 mayor a 5 o menor a 0
aumentar el contador

retornar el arreglo con los votos


defniri funcion impresion de datos
declarar varibale de tipo enteros
abrir funcion mientas y funcion Si anidadas
para contabilizar votos
imprimir votos

Datos de salida
Cantidad de votos de cada candidato
*/
#include <stdio.h>
#include <stdlib.h>
#define tam 30/*Se deine un tamañao general para utilizar en diferentes variables*/
void ingresoDatos (int []);/*Definición del prototipo de la funcion para ingresar los votos con parámetro de tipo arreglo*/
void impresionDatos (int[]);/*Definición del prototipode  la funcion para contabilizar los votos con parámetro de tipo arreglo*/


void main()/*Inicio función principal*/
{
	int num=0, *num2, op, n=1, voto[n];/*Delcaración de variables de tipo entero*//*definición de una variabvle de tipo arreglo con tamaño definido antes*/
	while(op!=3)/*Validación de la función switch*/
    {
    printf("\n\t\tMenu\n");
    printf("1.Ingreso de votos\n2.Conteo de votos\n3.Salir\n");
    printf("Escoja una opcion:");/*Pedir al usuario que ingrese una de las opciones mostradas*/
    scanf("%d",&op);/*Leer la opción ingresada*/
    
        switch(op)/*Inicio función switch con los ejercicios*/
        {
            case 1:/*Inicio caso 1 Ingreso de votos*/
            	{          						
					printf("\tIngreso de Votos\n");
					ingresoDatos(voto);/*Llamada a la función ingreso de votos*/
				}
            break;
            case 2:/*Inicio caso 2 Ingreso de votos*/
                {
                	printf("\tConteo de Votos\n");
					impresionDatos(voto);/*Llamada a la función conteo de votos*/	
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
}/*Fin de la función principal*/

void ingresoDatos (int votos[])/*Definición de la funcion para ingresar los votos*/
{
	int i=0;/*Declaracion de variables*/
	do
	{
		printf ("\nPresione 0 para finalizar.");
		printf ("\n\nIngrese el voto : ");
		scanf ("%d",&votos[i]);//ingreo de datos
		while (votos[i]<0||votos[i]>5)
		{
			printf ("Ingrese nuevamente: ");
			scanf ("%d",&votos[i]);//validacion
		}
		if(votos[i]==0)//fin del bucle
		{
			i=-1;
		}
		i=i+1;
	}while(i!=0);
}

void impresionDatos (int votos [])//funcion impresion de datos
{
	int i,n=0, uno=0, dos=0, tres=0, cuatro=0, cinco=0;//delcaracion de variabkles
	float p1=0, p2=0, p3=0, p4=0, p5=5;
	do //inicio funciones if anidadas
	{
		if(votos[i]==1)
		{
			uno=uno+1;// contador candidato 1
		}
		else
		{
			if (votos[i]==2)
			{
				dos=dos+1;// contador candidato 2
			}
			else
			{
				if (votos[i]==3)
				{
					tres=tres+1;// contador candidato 3
				}
				else
				{
					if(votos[i]==4)
					{
						cuatro=cuatro+1;// contador candidato 4
					}
					else
					{
						cinco=cinco+1;// contador candidato 5
					}
				}
			}
		}
		n=n+1;
		i=i+1;
	}while(votos[i]!=0);
	p1=(uno*100/n);/* Cálculo de porcentrajes*/
	p2=(dos*100/n);
	p3=(tres*100/n);
	p4=(cuatro*100/n);
	p5=(cinco*100/n);
	for(i=0;i<n;i++)
	{
		printf("\nVoto %d: %d\n", i+1, votos[i]);//impresion de voto ingresados por teclado
	}
	printf("Candidato 1: %d votos, porcentaje %.1f\n", uno,p1);//imprimir votos
	printf("Candidato 2: %d votos, porcentaje %.1f\n", dos,p2);
	printf("Candidato 3: %d votos, porcentaje %.1f\n", tres,p3);
	printf("Candidato 4: %d votos, porcentaje %.1f\n", cuatro,p4);
	printf("Candidato 5: %d votos, porcentaje %.1f\n", cinco,p5);
}


