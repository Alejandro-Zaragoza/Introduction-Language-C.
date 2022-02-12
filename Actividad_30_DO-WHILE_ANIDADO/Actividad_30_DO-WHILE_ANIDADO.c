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
    int num, x, y, c;
    do{
        printf ("Ingrese un n%cmero: ", 163);
        scanf ("%i", &num);
        if (num > 0)
        {
            x=1;
            do{
                y=1;
                do{
                    printf ("%i",y);
                    y++;
                }while (y<=x);
                printf ("\n");
                x++;
            }while (x<=num);
        }
        else
            printf ("inv%clido", 160);

        printf ("\nPulsa 1 para otro n%cmero: ", 163);
        scanf ("%i", &c);

            printf ("\n");
    }while (c==1);

    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
