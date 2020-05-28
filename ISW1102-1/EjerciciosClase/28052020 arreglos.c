/*

Crear un programa que genere la serie de los numeros pares


*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float sumaNum(int);
void pares(int);

void main ()
{
	int op, cantNum;
	while (op!=3)
	{
		printf("\n1.Suma de Numeros\n2.Serie de numeros pares");
		printf("\nIngrese una opcion:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				{
					printf("Ingrese la cantidad de numeros: ");
					scanf ("%d",&cantNum);
					while(cantNum<=0)
					{
						printf("Ingrese la cantidad de numeros positivos: ");
						scanf ("%d",&cantNum);
					}
					printf("la suma es: %.1f", sumaNum(cantNum));
				}
			break;
			case 2:
				{
					printf("Ingrese la cantidad de numeros: ");
					scanf ("%d",&cantNum);
					while(cantNum<=0)
					{
						printf("Ingrese la cantidad de numeros positivos: ");
						scanf ("%d",&cantNum);
					}
					pares (cantNum);
					
				}
			break;
			case 3:
                exit(0);
            break;
			default:
			{
				printf("Opci�n Invalida. Ingrese Nuevamente: ");
			}
			break;
		}	
	}
}
float sumaNum(int cant)
{
	int i=0;
	float numero[cant], suma=0;
	while (i<cant)
	{
		printf("Ingrese la cantidad de numeros: ");
		scanf("%f",&numero[i]);
		suma=suma+numero[i];
		i++;
	}
	i=0;
	printf("Elementos del arreglo\n");
	while (i<cant)
	{
		printf("Elemento[%d]=%.1f\n",i, numero[i]);
		i++;
	}
	return suma;
}
void pares (int cant)
{
	int i=0, par=0, numPar[cant];
	while (i<cant)
	{
		par=par+2;
		numPar[i]=par;
		printf("%d\t",numPar[i]);
		i++;
	}
}
