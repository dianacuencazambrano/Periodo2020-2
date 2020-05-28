/******************************************************************************
realizar un programa que calcula el area de un circulo.

Datos de entrada:
decimal radio, area=0, pi=3.1416

Proceso
Escribir "Ingrese el radio del circulo"
Leer radio
Calcular area=pi*radio*radio

Datos de salida
Imprimir "El área es" area

*******************************************************************************/
#include <stdio.h>//Declaración de librerías

void main()//declaración de la función principal
{//inicio del programa

    float radio,area=0,pi=3.1416;
    printf("Ingrese el radio del círculo ");
    scanf("%f",&radio);
    area=pi*radio*radio;
    
    printf("El area es %.3f",area);
    

}//fin del programa
