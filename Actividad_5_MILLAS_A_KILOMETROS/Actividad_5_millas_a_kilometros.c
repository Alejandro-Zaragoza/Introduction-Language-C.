/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Sabiendo que una milla equivale a (1.609) kilómetros, lea una cantidad en millas y conviértala y muestre los Kilómetros.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float millas,kilometros,operacion;

    printf("Coloque la cantidad en Millas: ");
    scanf("%f",&millas);

    operacion= millas*(1.609);
    printf("\n %.1f millas equivale a %.1f kil%cmetros",millas,operacion,162);




    printf("\n Realizado por Daniel Alejandro ");
    getch();
    return 0;
}
