/*
Crear un programa que permita ingresar a cantidad de numeros enteros positivos
y realice la suma de dichos numeros.

crear un programa que permita determinar si un numero es par o impar

ingrese un número: -2
ingresa un numero positivo: 2
el numero es par.
**********************************************************
Crear una función que permita ingresar la cantidad de números positivos
para generar la serie de Fibonacci, y realice la suma de dichos numeros

Ingrese la cantidad de numeros: -6
Ingrese la cantidad de numeros positivos: 4
1 1 2 3
la suma es: 7


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

void main()
{
    int num,nume,n,limite,lim,op;
    while(op!=8)
    {
    printf("\n1.Factorial\n2.Tabla de Multiplicar\n3.Suma de Numeros\n4.Serie de numeros pares\n5.Suma de cualquier numero\n6.Tipo de numero\n7.Serie Fibonacci\n8.Salir\n");
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
                    printf("Número invalido. Ingrese Nuevamente: ");
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
            case 8:
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

