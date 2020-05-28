/******************************************************************************

Menú:
1.Mayor o menor de edad
2.Ïndice de masa corporal

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int edad, op;
    char nombre[10];
    float peso, altura, imc=0, gradosC,gradosF,centigrados=0,farenheit=0;
    while(op!=4)
    {
    printf("\t\tMenú\n");
        printf("1.Mayor o menor de edad\n2.IMC\n3.Conversión de Temperatura\n4.Salir\n");
    printf("Escoja una opción: ");
    scanf("%d",&op);
    switch (op)
    {
        case 1:
        {
            getchar();
            printf("Ingrese el nombre: ");
            gets(nombre);
            printf("Ingrese la edad: ");
            scanf ("%d",&edad);
            if (edad>=18)
                {
                printf("%s es mayor de edad",nombre);
                }
            else
                {
                printf("%s es menor de edad",nombre);
                }
        }
        system("pause");
        system("cls");
		break;
        case 2:
        {
            printf("Ingrese el peso: ");
            scanf("%f",&peso);
            printf("Ingrese la altura: ");
            scanf("%f",&altura);
            imc=peso/pow (altura,2);
            printf("El IMC es %.2f \n", imc);
            if (imc<18.5)
            {
                printf("Peso bajo \n");
            }
            else
            {
                if(imc>=18.5 && imc<=24.9)
                {
                    printf("Peso normal \n");
                }
                else
                {
                    if (imc>=25 && imc<=29.9)
                    {
                        printf("Sobrepeso \n");
                    }
                    else
                    {
                        if(imc>=30 && imc<=39.9)
                        {
                            printf("Obesidad \n");
                        }
                        else
                        {
                            printf("Obesidad mórbida \n");
                        }
                    }
                }
            }
            
        }
        system("pause");
        system("cls");
        break;
        case 3:
        {
                printf("1. C a F\n2.F a C\n");
                printf("EScoja la opcion: ");
                scanf("%d",&op);
                if(op==1)
                {
                        printf("Ingrese los grados centigrados:");
                        scanf("%f",&gradosC);
                        farenheit=(gradosC*9)/5+32;
                        printf("La conversion es: %.3f grados farenheit \n",farenheit);
                }
                else if(op==2)
                {
                        printf("Ingrese los grados farenheit:");
                        scanf("%f",&gradosF);
                        centigrados=(gradosF-32)*5/9;
                        printf("La conversion es: %.2f grados centigrados",centigrados);
                }
        }
        break;
        case 4:
            {
                exit(0);
            }
        break;
        default:
            printf("Opción inválida. Ingrese nuevamente.\n");
            system("pause");
        	system("cls");
        
    }

}
}
