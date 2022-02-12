/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Programa que pide al usuario un numero e imprime una lista de la siguiente manera:
Ejemplo:
num=4
Imprime
*
**
***
****
presiona 1 para pedir otro numero:_
Para la figura utiliza for anidado y para repetir todo el while
*/
#include<stdio.h>
#include<conio.h>
int main ()
{
int num,c=1,i,j;

    while (c==1){

    printf("Ingrese un n%cmero: ",163);
    scanf("%i",&num);


        for(i=1;i<=num;i++)
        {
            for(j=1;j<=i;j++)

                printf("*");

        printf("\n");
        }

    printf("Para otro n%cmero ingrese el 1 ",163);
    scanf("%i",&c);

    }



    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
