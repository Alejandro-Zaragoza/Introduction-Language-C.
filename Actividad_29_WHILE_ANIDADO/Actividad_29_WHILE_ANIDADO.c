/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Utilizando solo el ciclo while...
Pide al usuario u nnumero e imprime:
Ejemplo
Num=4
Imprime:
1
22
333
4444
presiona 1 para otro numero
*/
#include<stdio.h>
#include<conio.h>
int main ()
{
int num, x, y, c=1;

    while (c==1)
    {
    printf ("Ingrese un n%cmero: ", 163);
    scanf ("%i", &num);

    if (num>0)
    {
        x=1;
        while (x<=num)
        {
            y=1;
            while (y<=x)
            {
                printf ("%i",x);
                y++;
            }
            printf ("\n");
            x++;
        }
    }
       else
            printf ("\nN%cmero invalido\n");

    printf ("\nDigite 1 si quiere volver a ingresar otro n%cmero: ", 163);
    scanf ("%i", &c);
        printf ("\n");
    }
    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
