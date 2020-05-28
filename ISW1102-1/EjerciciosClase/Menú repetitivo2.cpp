#include <stdio.h>
#include <math.h>

void main()
{
    int edad,op;
    float peso,altura,imc=0,gradosC,gradosF,centigrados=0,farenheit=0;
    char nombre[10];
    while(op!=4)
    {
    printf("\t\tMenu Principal\n");
    printf("1.Edad Persona\n2.IMC\n3.Conversión temperatura\n4.Salir\n");
    printf("Escoja una opción:");
    scanf("%d",&op);
    switch(op)
    {
            case 1:
                getchar();
                printf("Ingrese el nombre:");
                gets(nombre);
                printf("Ingrese la edad:");
                scanf("%d",&edad);
                if(edad>=18)
                {
                       printf("%s es mayor de edad\n",nombre);
                }
                    else
                {
                       printf("%s es menor de edad\n",nombre);
                }
            system("pause");
            system("cls");
            break;
            case 2:
          
                printf("Ingrese el peso:");
                scanf("%f",&peso);
                printf("Ingrese la altura:");
                scanf("%f",&altura);
                imc=peso/pow(altura,2);
                printf("El imc es %.2f\n",imc);
                if(imc<18.5)
                {
                    printf("Tiene un Peso Bajo\n");
                }
                else if(imc>=18.5 && imc<=24.9)
                {
                    printf("Tiene Peso Normal\n");
                }
                else if(imc>=25 && imc<=29.9)
                {
                    printf("Tiene Sobrepeso\n");
                }
                else if(imc>=30 && imc<=39.9)
                {
                    printf("Tiene Obesidad\n");
                }
                else
                {
                     printf("Tiene Obesidad morbida");
                }
            system("pause");
            system("cls");
            break;
            case 3:
                  printf("1. C a F\n2.F a C\n");
                  printf("EScoja la opcion:");
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
            system("pause");
            system("cls");     
            break;
            case 4:
            	exit(0);
            break;
            default:
                printf("Opción Inválida. Intente nuevamente\n");
            system("pause");
            system("cls");  
            break;
    }
    }
    
}
