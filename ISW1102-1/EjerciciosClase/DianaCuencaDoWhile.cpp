#include <stdio.h>/*Inclusi�n de librerias*/
#include <math.h>
#include <stdlib.h>

int main()/*Inicio funci�n prinicpal*/
{
    int n=0, cont=11,w=0,nn=0, op;/*Declaraci�n de variables de tipo entero*/
    
while(op!=2)/*Inicio condici�n repetitiva del men�*/
{
    printf("\t\tMen�\n");/*Imprimir men�*/
    printf("1.Diagrama\n2.Salir\n");
    printf("Escoja una opci�n: ");/*Pedir al usuario que ingrese una opcion*/
    scanf("%d",&op);/*Leer op*/
    switch(op)/*Incio de la funci�n switch*/
    {
    case 1:/*Inicio del caso 1*/
    {
    do/*Inicio funci�n Do-While*/
    {
    printf("Ingrese un n�mero:");/*Pedir al usuario que ingrese el n�mero*/
    scanf("%d",&n);/*Leer n�mero*/
    }while(n<0||n>10);/*fin Do-While*/
    n=n*11;/*Calcular n*/
    do
    {
        w=w+cont;/*Calcular w*/
        printf("\n%d",w);/*Imprimir w*/
        cont=cont*100;/*calcular contador*/
        cont=cont+11;/*calcular contador*/
    }
    while(n<=cont);/*mientras n sea menor o igual al cont*/
    do/*Inicio de otra funci�n Do-While*/
    {
        cont=cont/100;/*Calcular contador para que vaya de forma descendente*/
        printf("\n%d",cont);/*Imprimir cont*/
    }while(cont>=n);/*Mientras el contador sea mayor o igual a n*/
    }
    
    break;/*fin case*/
        case 2:/*Inicio caso 2*/
            {
                exit(0);/*salida*/
            }
        break;/*fin caso 2*/
        default:/*Caso cotnrario*/
            printf("Opci�n inv�lida. Ingrese nuevamente.\n");/*Mostrar al ususario opci�n inv�lida*/
}/*Fin switch*/
}/*Fin while*/
return 0;
}/*Fin de la funci�n principal*/

