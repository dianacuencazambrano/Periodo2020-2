/*
Crear un programa que permita ingresar a cantidad de numeros enteros positivos
y realice la suma de dichos numeros.

crear un programa que permita determinar si un numero es par o impar

ingrese un n�mero: -2
ingresa un numero positivo: 2
el numero es par.
**********************************************************
Crear una funci�n que permita ingresar la cantidad de n�meros positivos
para generar la serie de Fibonacci, y realice la suma de dichos numeros

Ingrese la cantidad de numeros: -6
Ingrese la cantidad de numeros positivos: 4
1 1 2 3
la suma es: 7

*************************************************************************
CRear una funcion que permite determinar la cantidad de numeros positivos, negativos y cero existe.
datos de entrada
Numeros sea positivos, negativos o cero
n=numero (flotante)
cPo=contador de positivos(entero)
cNe=contador negativos(entero)
cRo=contador de ceros(entero)
lim=cantidad de numeros(entero)
cont=contador de numeros(entero)

Proceso 
(Se necesita una sentencia repetitiva para que ingrese cuantos n�meros quiera)
Se establece un prototipo de tipo void que se llame tipoNum con un parametro entero.
Dentro del caso 8, realizar lo siguiente:
Pedir al ususario que ingrese la cantidad de numeros que quiere contabilizar
leer lim
Validar el si es positivo o negativo con una funci�n while
mientras (lim<=0
	pedir al ususario que ingrese nuevamente
	leer lim
fin mientras
llamar a la funci�n tipo de numeros

Definir la funci�n que se va utilizar con un parametro de tipo entero llamado cant (cantidad)
Declarar variables 
flotante n
enteros cPo=0,cNe=0,cRo=0, cont=1 (los contadores se inicalizan en cero para contabilizar los numeros pero el contador en uno para terminar el bucle)
Mientras (cont sea menor o igual a lim)
	Pedir al usuario que ingrese el n�mero
	leer n
	Si (n es mayor a 0)
		cPo=cPo+1 para contabilizar positivos
	sino
		si (n menor a 0)
			cNe=cNe+1 para contabilizar negativos
		sino
			Cro=Cro+1 para contabilizar ceros
 imprimir en pantalla cantidad de numeros positivos, negativos y ceros

fin de la funci�n
 
Datos de salida
cantidad de numeros positivos, negativos y ceros

********************************************************************************
Crear una funci�n para un grupo de numeros enteros positivos y determinar
cuantos son pares e impares

Ingrese el numero: -1
Ingrese nuevamente el numnero: -4
Ingrese nuevamente el numnero: 7
Ingrese  el numnero: 4
Ingrese  el numnero: 2

Numeros pares: 2
Numeros impares: 1






*/
#include <stdio.h>
#include <stdlib.h>

int sumaPositivos(int);
int factorial(int);
void tablaMult(int,int);
int sumaNum(int);
void serie(int);
void tipoNumero(int);
int serieFibonacci (int);
void tipoNum (int);/*Prototipo de la funci�n tipo de numeros*/
void tipoVNum(int);
void main()
{
    int num,nume,n,limite,lim,op;
    while(op!=9)
    {
    printf("\n1.Factorial\n2.Tabla de Multiplicar\n3.Suma de Numeros\n4.Serie de numeros pares\n5.Suma de cualquier numero\n6.Tipo de numero\n7.Serie Fibonacci\n8.Tipos de Numeros\n9.Par e Impar\n10.Salir\n");
    printf("Escoja una opcion:");
    scanf("%d",&op);
    
        switch(op)
        {
            case 1:
                printf("Ingrese el numero:");
                scanf("%d",&num);
                while(num<0 )
                {
                    printf("Ingrese un numero positivo:");
                    scanf("%d",&num);
    
                }
                printf("El factorial de %d es %d\n",num,factorial(num));
            break;
            case 2:
                printf("Ingrese la tabla a multiplicar:");
                scanf("%d",&num);
                printf("Ingrese el limite:");
                scanf("%d",&limite);
                tablaMult(num,limite);
            break;
            case 3:
            {
                printf("Ingrese la cantidad de numeros:");
                scanf("%d",&num);
                while(num<0)
                {
                    printf("Ingrese un numero positivo:");
                    scanf("%d",&num);
                }
                printf("La suma es: %d", sumaNum(num));
            }
            break;
            case 4:
            {
                printf("Ingrese la cantidad de numeros para generar la serie:");
                scanf("%d",&n);
                if(n<=0)
                {
                    printf("N�mero invalido. Ingrese Nuevamente: ");
                    scanf("%d",&n);
                }
                serie(n);
            }
            break;
            case 5:
            	{
            		printf("Ingrese la cantidad de numeros: ");
                	scanf("%d",&lim);
                	while(lim<=0)
                	{
                		printf("Ingrese la cantidad de numeros positivos: ");
                		scanf("%d",&lim);
					}
					printf("La suma de los %d numeros es: %d\n",lim, sumaPositivos(lim));
				}
            break;
            case 6:
                {
                	printf("Ingrese el numero: ");
                	scanf("%d",&n);
                	while(n<=0)
                	{
                		printf("Ingrese un numero positivo: ");
                		scanf("%d",&n);
					}
                	tipoNumero(n);
				}
            break;
            case 7:
                {
                	printf("Ingrese la cantidad de numeros:");
                	scanf ("%d",&lim);
                	while(lim<=0)
                	{
                		printf("Ingrese un numero positivo: ");
                		scanf("%d",&lim);
                	}
					printf("\nLa suma es: %d\n",serieFibonacci (lim));
				}
            break;
            case 8:/*Inicio caso 8*/
                {
                	printf("Ingrese la cantidad de numeros que quiere contabilizar: ");/*Pedir al usuario que ingrese la cantidad de numeros que quiere contabilizar*/
                	scanf("%d",&lim);/*Leer la cantidad de numeros*/
                	while(lim<=0)/*Inicio funci�n while para validar*/
                	{
                		printf("Ingrese un numero positivo: ");/*Validaci�n de un numero positivo*/
                		scanf("%d",&lim);/*leer cantidad ingresada*/
                	}
                	tipoNum (lim);/*Llamada de la funci�n*/
				}
            break;/*Fin caso 8*/
            case 9:
            	{
            		tipoVNum(n);
				}
                
            break;
            case 10:
                exit(0);
            break;
            default:
            	{
            		printf("Ingrese Nuevamente: ");
				}
			break;
        }
    }
    }


int factorial(int numero)
{
    int fact=1,cont=1;
    while(cont<=numero)
    {
        fact=fact*cont;
        cont++;
    }
    return fact;
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
int sumaNum (int lim)
{
    int cont=1,num, sum=0;
    while(cont<=lim)
    {
        printf("Ingrese el numero %d:", cont);
        scanf("%d",&num);
        while(num<=0)
        {
            printf("Ingrese nuevamente: ");
            scanf("%d",&num);
        }
        sum=sum+num;
        cont++;
    }
    return sum;
    
}
void serie(int nume)
{
    int cont=1,sum=0,par=0;
    while (cont<=nume)
    {
        par=par+2;
        printf("%d\n",par);
        sum=sum+par;
        cont++;
    }
    printf("La suma es: %d",sum);
}
int sumaPositivos(int cant)
{
	int suma=0,num,cont=1;
	while(cont<=cant)
	{
		printf("Ingrese el numero: ");
		scanf("%d",&num);
		while(num<=0)
		{
			printf("Ingrese un numero positivo: ");
			scanf("%d",&num);
		}
		suma=suma+num;
		cont++;
	}
	return suma;
}
void tipoNumero(int num)
{
	if(num%2==0)
	{
		printf("Es un numero par.\n");
	}
	else
	{
		printf("Es un numero impar.\n");
	}
}
int serieFibonacci (int cant)
{
	int suma=0,num1=0,num2=1,num3,cont=1;
	printf("%d\t",num2);
	cant=cant-1;
	while (cont<=cant)
	{
		num3=num1+num2;
		printf("%d\t",num3);
		suma=suma+num3;
		num1=num2;
		num2=num3;
		cont++;
	}
	return suma;
}
void tipoNum (int cant)/*Definici�n de la funci�n*/
{	
	float n;/*Declaraci�n de variables de tipo flotante*/
	int cPo=0, cNe=0, cRo=0, cont=1;/*Declaraci�n de variables de tipo entero*/
	while(cont<=cant)/*Inicio funci�n while*/
	{
		printf("Ingrese el numero: ");/*Pedir al usuario que ingrese un numero*/
		scanf("%f",&n);/*Leer el numero*/
		if (n>0)/*Condici�n, si el numero es mayor a cero*/
		{
			cPo++;/*Contador de numeros negativos*/
		}
		else/*Sino, realizar lo siguiente*/
		{
			if(n<0)/*Condici�n, si el numero es menor a cero*/
			{
				cNe++;/*Contador de numeros negativos*/
			}
			else /*Condici�n, si el numero no cumple con las condiciones anteriores*/
			{
				cRo++;/*Contador de ceros*/
			}/*fin if*/
		}/*fin If*/
		cont++;/*Incremento para que salga del bucle*/
	}/*Fin while*/
	printf ("La cantidad de numeros positivos es: %d\n", cPo);/*Imprimir los resultados*/
	printf ("La cantidad de numeros negativos es: %d\n", cNe);
	printf ("La cantidad de ceros es: %d\n", cRo);
	
}/*Fin de la funcion*/
void parImpar (int num)
{
	int cPa=0, cIm=0,n;
	while(num!=0)
	{
		printf("Ingrese el numero: ");
        scanf("%d",&n);
        while(n<=0)
        {
            printf("Ingrese un numero positivo: ");
            scanf("%d",&n);
        }
        if(num%2==0)
		{
			cPa++;
		}
		else
		{
			cIm++;
		}
		
	}
	printf("Numeros pares: %d", cPa);
	printf("Numeros impares: %d", cIm);
}
