/*
Crear un programa que permita realizar el cuadrado y la raíz de un numero

Crear un programa que permita realizar las operaciones matemáticas (suma y resta)
de dos numeros usando paso por valor y paso por referencia
crear un programa que realice la serie de n numeros pares usando paso por referencia


*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void SumResValor(float,float);
void SumResRefe(float*,float*);
void funcionValor(float, float);
void funcionReferencia (float*,float*);
void numpa (int*);
void main()
{
	/*float num1, num2;*/
	int n;
/*	printf("Ingrese numero 1 = ");
	scanf("%f",&num1);
	printf("Ingrese numero 2 = ");
	scanf("%f",&num2);
	printf("Paso por valor");
	funcionValor(num1,num2);/*Solo se imprimen los resultados porque no hay una impresión que retorne a esta función*/
/*	printf("\nNumero 1= %.1f",num1);
	printf("\nNumero 2= %.1f",num2);
	printf("\nPaso por referencia");
	/*funcionReferencia(&num1,&num2);
	printf("\nNumero 1= %.1f",num1);
	printf("\nNumero 2= %.1f",num2);*//*Para que no cambie el valor de la suma y la resta*/
/*	SumResValor(num1,num2);
	printf("\nSuma= %.1f",num1);
	printf("\nResta= %.1f",num2);
	SumResRefe(&num1,&num2);
	printf("\nSuma= %.1f",num1);
	printf("\nResta= %.1f",num2);*/
	printf("Ingrese la cantidad de numeros para generar la serie: ");
	scanf("%d",&n);
	numpa(&n);
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
void SumResRefe(float *x, float *y)
{
	int aux=*x;
	*x=(*x)+(*y);
	*y=aux-(*y);
}
void numpa(int *x)
{
	int s=2,i;
	for (i=1;i<=*x;i++)
	{
		printf ("%d\t",s);
		s=s+2;
	}
}

