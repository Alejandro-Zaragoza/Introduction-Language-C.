/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
PREGUNTAR UNA CANTIDAD EN PESOS CALCULA Y MUESTRA EL EQUIVALENTE EN DOLARES (20.70)
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float pesos,dolares;

    printf("Conversi%cn de pesos a dolares",162);


    printf("\n Coloca la cantidad en pesos:");
    scanf("%f",&pesos);

    dolares=pesos/20.70;

    printf("\n dolares= %.2f",dolares);

    printf("\n Realizado por Daniel Alejandro ");
    getch();
    return 0;
}
