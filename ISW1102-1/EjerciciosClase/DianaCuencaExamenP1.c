/******************************************************************************

Datos de entrada
Número de clientes
Nombre de los clientes
cantidad de productos
precio de cada productos
subtotal de cada cliente
El iva que cada cliente debe pagar (12%)
Total + iva

Proceso
Imprimir menú
leer op
mientras (op!=2
{
Inicio función switch
caso 1:
Ingresar cantidad de clientes
leer cc
    si (cc>0)
        mientras (j<=cc) j=contador de clientes
            j++
            imprimir "Ingrese el nombre"
            leer nom
            imprimir "Ingrese la cantidad de productos"
            leer pro
                para (i=1;i<=pro;i++) i=contador de productos
                imprimir "Ingrese el precio del producto i"
                leer pre
                sum=sum+pre
                fin para
            iva=(sum*12/100)
            t=sum+iva
            imprmir nom, iva, sum,t
    sino
    Imprimir "Inválido"
caso 2
    salida
}

Salida
Nombre del cliente
subtotal
iva
valor total
*******************************************************************************/
#include <stdio.h>/*Inclusión de bibliotecas*/
#include <math.h>
#include <stdlib.h>

void main()/*Inicio función prinicpal*/
{
    int cc=0, j=1, pro, i=0, op;/*Declaración de variables de tipo entero*/
    char nom[10];/*Declaración de variables de tipo caracteres*/
    float pre=0, sum=0, iva=0, t=0;/*Declaración de variables de tipo flotante*/
    while(op!=2)/*Inicio de función repetitiva para el menú*/
    {
    int cc=0, j=1, pro, i=0, op;/*Declaración de variables de tipo entero*/
    float pre=0, sum=0, iva=0, t=0;/*Declaración de variables de tipo flotante*/
    printf("\n\t\tMenú");/*Imprimir menú y opciones*/
    printf("1.Factura\n2.Salir\n");
    printf("Escoja una opción: ");
    scanf("%d",&op);/*Leer op*/
    switch (op)/*Inicio funciónn switch*/
    {
        case 1:/*Inicio caso 1*/
        {
        printf("Ingrese cantidad de clientes: ");/*Pedir al ususario que ingrese la cantidad de clientes*/
        scanf("%d",&cc);/*Leer cc(cantidad de clientes)*/
        if(cc>0)/*Inicio función if de comprobación de números positivos*/
            {
                while(j<=cc)/*Inicio función while en la que j debe ser menor o igual a cc*/
                {
                    printf("\nCliente %d", j);/*Imprimir el cliente*/
                    printf("\nIngrese el nombre del cliente: ");/*Ingresar el nombre del cliente*/
                    scanf("%s",nom);/*Leer nom*/
                    printf("\nIngrese la cantidad de productos: ");/*Ingresar la cantidad de productos*/
                    scanf("%d",&pro);/*Leer pro*/
                    for(i=1;i<=pro;i++)/*Inicio función for para i debe ser menor o igual pro y sumar 1 al contador de productos*/
                    {
                        printf("\nIngrese el precio del producto %d: ",i);/*Ingresar el precio del producto i*/
                        scanf("%f",&pre);/*leer pre*/
                        sum=sum+pre;/*calcular subtotal*/
                    }
                    iva=sum*12/100;/*calcular el iva*/
                    t=sum+iva;/*calcular el total*/
                    printf("\n%s debe pagar un subtotal de=$%.2f", nom, sum);/*Imprimir el nombre y el subtotal*/
                    printf("\nIva=$%.2f", iva);/*Imprimir iva*/
                    printf("\nValor total=$%.2f",t);/*Imprimir el total*/
                    j++;/*Sumar 1 al contador de clientes*/
                }
            }else/*Sino se ejecuta lo siguiente*/
            {
                printf("Ingrese nuevamente.");/*pedir que ingrese un numero positivo*/
            }
        }
        break;/*fin caso 1*/
        case 2:/*Inicio caso 2*/
            {
                exit(0);/*Salida*/
            }
        break;/*fin caso 2*/
        default:/*Caso contrario switch*/
            printf("Opción inválida. Ingrese nuevamente.\n");/*Pedir al usuario que ingrese nuevamente*/
        
    }

    }
}
