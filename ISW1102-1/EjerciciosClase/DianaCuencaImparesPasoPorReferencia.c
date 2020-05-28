/*
Crear un programa que permita realizar el cuadrado y la raíz de un numero

Crear un programa que permita realizar las operaciones matemáticas (suma y resta)
de dos numeros usando paso por valor y paso por referencia
crear un programa que realice la serie de n numeros pares usando paso por referencia

**********************************************************************************
ACTIVIDAD 26/05/2020

Crear un programa que permita determinar la cantidad de numeros impares que tiene el programa
Datos de entrada 
Cantidad de numeros (n)

Proceso
Establcer el prototipo de la función impares con parametros por referencia
Pedir al usuario que ingrese la candidad de numeros que quiere contabilizar
leer n
Validar, si el numero es menor o iguala cero, volver a pedir al usuario que ingrese un numero positivo
fin validacion
llamar a la función impares con dirección de memoria de la cantidad de numeros

Implementar y definir la función con parametro en dirección a la cantidad de numeros
declarar la variable para almacenar los numeros que ingresa (num), contador de la cantidad de numeros (i), contador de impares (c)
Inicio función repetitiva FOR para empezar un bucle
 	Pedir al usuario que ingrese el numero
 	leer numero
 	Validar, si el numero es menor o iguala cero, volver a pedir al usuario que ingrese un numero positivo
 	leer numero
 	fin validacion
 	Inicio función Si para que si el residuo del numero ingresado es diferente de 0
 	entonces aumentar uno al contador de impares (c+1)
 	fin funcion Si
Fin función para
Imprimir en pantalla la cantidad de numeros impares contabiliozador
fin del programa

Datos de salida 
Cantidad de numeros impares ingresado por teclado


*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void SumResValor(float,float);
void SumResRefe(float*,float*);
void funcionValor(float, float);
void tablaMult(int,int);
void funcionReferencia (float*,float*);
void numpa (int*);
int impares (int*);/*Establcer prototipo de la función*/
void main()
{
	float num1, num2;
	int n,op, limite;
	while(op!=4)
    {
    printf("1.Ejercicios paso por referencia\n2.Trabajo en clase punteros\n3.Ejercicios puntos extra\n4.Numeros impares clase 26/05/2020\n5.Tabla de multiplicar\n6.Salir\n");
    printf("Escoja una opcion:");
    scanf("%d",&op);
    
        switch(op)
        {
            case 1:
            {
			  	printf("Ingrese numero 1 = ");
					scanf("%f",&num1);
					printf("Ingrese numero 2 = ");
					scanf("%f",&num2);
					printf("Paso por valor");
					funcionValor(num1,num2);/*Solo se imprimen los resultados porque no hay una impresión que retorne a esta función*/
					printf("\nNumero 1= %.1f",num1);
					printf("\nNumero 2= %.1f",num2);
					printf("\nPaso por referencia");
					funcionReferencia(&num1,&num2);
					printf("\nNumero 1= %.1f",num1);
					printf("\nNumero 2= %.1f",num2);/*Para que no cambie el valor de la suma y la resta*/
			}
            break;
            case 2:
                {
               	SumResValor(num1,num2);
				printf("\nSuma= %.1f",num1);
				printf("\nResta= %.1f",num2);
				SumResRefe(&num1,&num2);
				printf("\nSuma= %.1f",num1);
				printf("\nResta= %.1f",num2);
				}
            break;
            case 3:
            {
                
				printf("Ingrese la cantidad de numeros para generar la serie: ");
				scanf("%d",&n);
				numpa (&n);
            }
            case 4:
                {
                printf("Ingrese la cantidad de numeros: ");/*Pedir al usuario que ingrese la cantidad de numeros que quire contabilizar*/
				scanf("%d",&n);/*Leer dato*/
				while(n<=0)/*Validación si el numero es menro o iguala cero*/
				{
					printf("Ingrese la cantidad de numeros positivos: ");/*Pedir que ingrese un numero positivo*/
					scanf("%d",&n);/*Leer dato*/
				}
				printf ("La cantidad de numeros impares es: %d", impares (&n));/*Llamada a la función paso por referencia, en dirección al valor de n*/
				}
            break;
            case 5:
            	{
                	printf("Ingrese la tabla a multiplicar:");
                	scanf("%d",&num1);
             	   	printf("Ingrese el limite:");
             	 	scanf("%d",&limite);
             	  	tablaMult(num1,limite);
             	}
             
            break;
            case 6:
                exit(0);
            break;
        }
    }
	

	
	
}


void funcionValor(float x, float y)
{
	x=x*x;
	y=sqrt(y);/*No hay retorno de algun dato, o de alguna impresión*/
}
void funcionReferencia(float *x, float *y)
{
	*x=(*x)*(*x);
	*y=sqrt(*y);
}
void SumResValor (float x,float y)
{
	x=x+y;
	y=x-y;
	
}
void tablaMult(int numero,int lim)
{
    int mult=1,cont;
    for(cont=1;cont<=lim;cont++)
    {
        mult=numero*cont;
        printf("%dX%d=%d\n",numero,cont,mult);
    }
}
void SumResRefe(float *x, float *y)
{
	int aux=*x;
	*x=(*x)+(*y);
	*y=aux-(*y);
}
void numpa (int *x)
{
	int s=2, i;
	for (i=1;i<=*x;i++)
	{
		printf ("%d",s);
		s=s+2;
	}
}
int impares (int*x)/*Definición de la función con punteros que tengan dirección al numero ingresado en el caso 4*/
{
	int num, c=0, i;/*Declaración de variables*/
	for (i=1;i<=*x;i++)/*Inicio ciclo repetitivo para cantidad de numeros*/
	{
		printf("Ingrese el numero %d:", i);/*Pedir al usuario que ingrese el numero*/
		scanf ("%d",&num);/*Leer numero*/
		while (num<=0)/*Validación si el numero es menro o iguala cero*/
		{
			printf("Ingrese el numero positivo:");/*Pedir que ingrese un numero positivo*/
			scanf ("%d",&num);/*Leer dato*/
		}
		if (num%2!=0)/*Inicio función Si para contabilizar los impares*/
		{
			c++;/*Aumentar contador*/
		}
	}
	return c;/*Imprimir la cantidad de numeros*/
}

