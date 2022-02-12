/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza un programa que pregunte al usuario una palabra y que caracter desea contar, imprime el numero de caraceres que hay en la  palabra.
1. para pedir otra palabra
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char car,cadena[20];
    int x,ciclo=0,contador=0;

    do{
    printf("CAPTURA UNA CADENA: ");
    scanf("%s",&cadena);

    printf("CARACTER A CONTAR: ");
    fflush(stdin);
    scanf("%c",&car);

    for (x=0;x<=20;x++){

        if(cadena[x]!= '\0'){

            if(car==cadena[x])
            contador++;

            printf("%c",cadena[x]);
        }
        else
            break;
    }

        printf("\nTU PALABRA %c APARECE %i VECES ",car,contador);
    contador=0;
    printf("\nPARA OTRA PALABRA PULSA 1 ");
    scanf("%i",&ciclo);

    }while(ciclo==1);


    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
