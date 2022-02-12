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
int num,c,i,j;

    do{

    printf("Ingrese un n%cmero: ",163);
    scanf("%i",&num);


        for(i=1;i<=num;i++)
        {
            for(j=num;j>=i;j--)

                printf("*");

        printf("\n");
        }

    printf("Para otro n%cmero ingrese el 1 ",163);
    scanf("%i",&c);

    }while(c==1);



    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
