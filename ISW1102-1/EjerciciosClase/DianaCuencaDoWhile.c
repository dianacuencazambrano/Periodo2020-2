/******************************************************************************

Datos de entrada
número n

Proceso
Abrir menú repetitivo
mientras (op!=2)
    mostrar Menu
    1.Diagrama
    2.Salir
    Pedir al ususario que ingrese una opción
    leer op
    caso 1
        Hacer
        {
            pedir al usuario que ingrese n
            leer n
        }mientras(n<0||n>10)
        calcular n=n*11
        nn=n
        Hacer
        {
            w(suma)=w+cont
            imprimir w
            cont=cont*100
            cont+11
        }while(n<=cont)
        Hacer{
            cont=cont/100
            imprimir cont
        }Mientras(nn<=cont);
        }fin caso
    caso 2
    {
        salir
    }fin caso
    De lo contrario, imprimir "Opción Inválida"
fin

Datos de salida
Imprimir el diagrama de la forma
11
1122
112233
1122
11

*******************************************************************************/
#include <stdio.h>/*Inclusión de librerias*/
#include <math.h>
#include <stdlib.h>

void main()/*Inicio función prinicpal*/
{
    int n=0, cont=11,w=0,nn=0, op=0;/*Declaración de variables de tipo entero*/
    
while(op!=2)/*Inicio condición repetitiva del menú*/
{
    n=0, cont=11,w=0,nn=0, op=0;
    printf("\t\tMenú\n");/*Imprimir menú*/
    printf("1.Diagrama\n2.Salir\n");
    printf("Escoja una opción: ");/*Pedir al usuario que ingrese una opcion*/
    scanf("%d",&op);/*Leer op*/
    switch(op)/*Incio de la función switch*/
    {
    case 1:/*Inicio del caso 1*/
    {
    do/*Inicio función Do-While*/
    {
    printf("Ingrese un número:");/*Pedir al usuario que ingrese el número*/
    scanf("%d",&n);/*Leer número*/
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
    do/*Inicio de otra función Do-While*/
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
            printf("Opción inválida. Ingrese nuevamente.\n");/*Mostrar al ususario opción inválida*/
}/*Fin switch*/
}/*Fin while*/
}/*Fin de la función principal*/
