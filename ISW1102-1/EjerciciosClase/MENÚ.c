/*






/*Implementación de la funcion */
/*Prototipo de funcion con un parámetro de tipo*/
/*Declaración de variables de tipo entero*/
/*Inicio funcion repetitiva for para i*/
/*Inicio funcion repetitiva For */
/*Fin For*/
/*Imprimir en pantalla*/
/**/

*/
#include <stdio.h>/*Declaación de la biblioteca de cabecera*/
#include <stdlib.h>/*Declaración de la biblioteca estandar*/
#define tam 30/*Declaración de un tamaño geenral en el programa*/
float ingresoNotas(int, float[], char*);/*Prototipo de funcion con un parámetro de tipo*/
float promedio(int, float[], char*);/*Prototipo de funcion con un parámetro de tipo*/

void main()/*Inicio funcion principal*/
{
	int op;/*Delcaración de variables de tipo entero*/
	while(op!=6)/*Validación de la función switch por medio de una función while, si op es distinto de 6*/
    {
    printf("\n\t\tMenu\n");/*Título*/
    printf("1.\n2.\n3.\n4\n5.\n6.Salir\n");/*Impresión de las opciones en el menu*/
    printf("Escoja una opcion:");/*Pedir al usuario que ingrese una de las opciones mostradas*/
    scanf("%d",&op);/*Leer la opción ingresada*/
    
        switch(op)/*Inicio función switch con los ejercicios*/
        {
            case 1:/*Inicio caso 1 Producto de dos numeros*/
            	{          		
				
				}
            break;/*Fin caso 1*/
            case 2:/*Inicio caso 2*/
                {
                
				}
            break;/*Fin caso 2*/
            case 3:/*Inicio caso 3*/
            	{
            		
            	}
            break;/*Fin caso 3*/
            case 4:/*Inicio caso 4*/
                {
                	
				}
            break;/*Fin caso 4*/
            case 5:/*Inicio caso 5*/
            	{
            		
             	}
             
            break;/*Fin caso 5*/
            case 6:/*Inicio caso 6*/
                exit(0);/*Funcion terminar el programa*/
            break;/*Fin caso 6*/
            default:/*Sino*/
                printf("Intente nuevamente. Opcion invalida.\n");/*Imprimir en pantalla que ingrese otra opcion*/
            break;/*Fin del sino*/
        }/*Fin funcion switch*/
    }/*Fin funcion while*/
}/*Fin de la función principal*/


