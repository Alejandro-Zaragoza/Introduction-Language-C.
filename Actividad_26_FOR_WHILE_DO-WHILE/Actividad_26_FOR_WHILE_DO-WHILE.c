/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8

Utilizando los tres ciclos, pide al usuario cuantas filasy cuantas columas queire
recuerda que el primer ciclo manipula las filas y el segundo las columnas
*/

#include<stdio.h>
#include<conio.h>
int main ()
{
int i,j;
int filas,columnas;

printf("Cuantas filas deseas agregar:");
scanf("%i",&filas);

printf("Cuantas columnas deseas agregar:");
scanf("%i",&columnas);

printf("\n");

    for(i=1;i<=filas;i++)
    {
        for(j=1;j<=columnas;j++)

            printf("*");

    printf("\n");
    }


    printf("\n\n________________________________________\n\n");
    i=1;

    while(i<=filas)
    {
        j=1;
        while(j<=columnas)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }


    printf("\n________________________________________\n");
    i=1;
    printf("\n");

    do
    {
        j=1;
        do
        {
        printf("*");
        j++;
        }while(j<=columnas);
        printf("\n");
        i++;
    }while(i<=filas);




    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
