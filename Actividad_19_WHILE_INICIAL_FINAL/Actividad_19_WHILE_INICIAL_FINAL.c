/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Utilizando solo el ciclo while, pregunta al usuario un numero inicial y un numero final,
imrpimir una lista desde el  numero incial hasta el numero final
presiona 1 para pedir otros valores
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int inicial,fin,resp=1;

    while (resp==1)
    {
    printf ("\nIngrese su n%cmero inicial: ",163);
    scanf ("%i",&inicial);
    printf ("\nIngrese su n%cmero final: ",163);
    scanf ("%i",&fin);


    while (inicial<=fin)
    {
    printf ("\nCuenta: %i",inicial);
    inicial=inicial+1;
    }
    printf ("\nSi quiere ingresar otros n%cmeros presione 1:\n",163);
    scanf ("%i",&resp);
    }
    printf("\n \n %c Realizado por DANIEL ZEPEDA %c",174,175);
    getch ();
    return 0 ;
}
