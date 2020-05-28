/*




*/
#include <stdio.h>
#include <math.h>

float sumaNum(int);

void main ()
{
	int op, cantNum;
	while (op!=3)
	{
		printf("1.Suma de Numeros");
		printf("\nIngrese una opción:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				{
					do
					{
						printf("Ingrese la cantidad de numeros: ");
						scanf ("%d",&cantNum);
					}while(cantNum<0);
					printf("la suma es: %.1f", sumaNum(cantNum));
				}
			break;
			default:
			{
				printf("Opción Invalida. Ingrese Nuevamente: ");
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
