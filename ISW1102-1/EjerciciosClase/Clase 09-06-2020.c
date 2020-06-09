/*
ARREGLOS BIDIMENSIONALES

Crear un programa que permita inicializar los elementos de una matriz
e imprima en pantalla FUNCION 1

***********************************************

Programa Ingreso e impresion de notas


*/
#include <stdio.h>/*Declaación de la biblioteca de cabecera*/
#include <stdlib.h>/*Declaración de la biblioteca estandar*/
#define tam 50/*Declaración de un tamaño geenral en el programa*/
void imprimeMatr(float[][tam]);/*Prototipo de funcion impresion de matriz con un parámetro de tipo arreglo bidimensional*/
void ingresoDatos(int,int,float[][tam]);/*Prototipo de funcion con un parámetro de tipo*/
void impresionDatos(int,int,float[][tam]);

void main()/*Inicio funcion principal*/
{
	int op, cantE, cantN;/*Delcaración de variables de tipo entero*/
	float notas[tam][tam], numeros[][tam]={{1.5,2.5},{-1.2,7.0},{5.3,6.7}};/*declaracion de variables flotantes*/
	while(op!=6)/*Validación de la función switch por medio de una función while, si op es distinto de 6*/
    {
    printf("\n\t\tMenu\n");/*Título*/
    printf("1.Imprimir una Matriz\n2.Ingreso de las calificaciones\n3.Impresion de las calificaciones\n4\n5.\n6.Salir\n");/*Impresión de las opciones en el menu*/
    printf("Escoja una opcion:");/*Pedir al usuario que ingrese una de las opciones mostradas*/
    scanf("%d",&op);/*Leer la opción ingresada*/
    
        switch(op)/*Inicio función switch con los ejercicios*/
        {
            case 1:/*Inicio caso 1 Producto de dos numeros*/
            	{          		
					imprimeMatr(numeros);
				}
            break;/*Fin caso 1*/
            case 2:/*Inicio caso 2*/
                {
                	do
                	{
                		printf("Ingrese la cantidad de estudiantes: ");
                		scanf("%d",&cantE);
					}while (cantE<=0);
					do
                	{
                		printf("Ingrese la cantidad de notas: ");
                		scanf("%d",&cantN);
					}while (cantN<=0);
                	ingresoDatos(cantE,cantN,notas);
				}
            break;/*Fin caso 2*/
            case 3:/*Inicio caso 3*/
            	{
            		impresionDatos(cantE,cantN,notas);
            	}
            break;/*Fin caso 3*/
            case 4:/*Inicio caso 4*/
                {
                	
				}
            break;/*Fin caso 4*/
            case 5:/*Inicio caso 5*/
            	{
            		
             	}
             
            break;/*Fin caso 5*/
            case 6:/*Inicio caso 6*/
                exit(0);/*Funcion terminar el programa*/
            break;/*Fin caso 6*/
            default:/*Sino*/
                printf("Intente nuevamente. Opcion invalida.\n");/*Imprimir en pantalla que ingrese otra opcion*/
            break;/*Fin del sino*/
        }/*Fin funcion switch*/
    }/*Fin funcion while*/
}/*Fin de la función principal*/


void imprimeMatr(float n[][tam])/*Implementación de la funcion imprime matriz*/
{
	int i=0,j=0;/*Declaración de variables de tipo entero*/
	printf("Elementos de la Matriz\n");
	for(i=0;i<3;i++)/*Inicio funcion repetitiva for para i*/
	{
		for(j=0;j<2;j++)/*Inicio funcion repetitiva for para j*/
		{
			printf("%.1f\t",n[i][j]);/*Imprimir en pantalla*/
		}
		printf("\n");/*Imprimir en pantalla*/
	}
}

void ingresoDatos(int cantE,int cantN,float n[][tam])
{
	int i=0, j=0;/*Declaración de variables de tipo entero*/
	printf("\n");
	printf("\tIngreso de notas");
	printf("\n");
	for (i=0;i<cantE;i++)
	{
		printf("Estudiante %d\n",i+1);
		for(j=0;j<cantN;j++)
		{
			printf("Ingrese la calificacion: ");
			scanf("%f",&n[i][j]);
			while(n[i][j]<0)/*Se pone while porque ncesita validar la primera nota que se ingresa*/
			{
				printf("Ingrese una calificacion positiva: ");
				scanf("%f",&n[i][j]);
			}
			
		}
	}
}

void impresionDatos(int cantE,int cantN,float n[][tam])
{
	int i=0,j=0;
	float suma=0, p;
	printf("\n");
	printf("\tImpresion de notas");
	printf("\n");
	for (i=0;i<cantE;i++)
	{
		printf("Notas estudiante %d\n",i+1);
		suma=0;
		for(j=0;j<cantN;j++)
		{
			suma=suma+n[i][j];
			printf("Calificacion %d = %.1f\n",j+1,n[i][j]);
			
		}
		p=suma/cantN;
		printf("El promedio del estudiante = %.1f\n",p);
	}
	
}
