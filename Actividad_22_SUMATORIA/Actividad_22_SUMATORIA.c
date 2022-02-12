/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8
Realiza un programa dond ese le pregunte al usuario un numero, calcule y muestre la sumatoria de ese numero.
Recuerda que la sumatoria es la suma desde cero hasta el numero dado.
Debe mostrarse como en el ejemplo:
Numero=5
Muestra:
0+1+2+3+4+5=15
Presiona s o S para otro numero: _


Cuando se muuestra la sumatoria asegurate de que no se imprima un +, antes del primer numero ni antes del =.
Solo utiliza el ciclo do while
*/

#include<stdio.h>
#include<conio.h>

int main()
{
   int i, num, n;
    char c;

   do
   {
       printf("Ingresa un n%cmero: ",163);
       scanf("%i",&num);
       i=0;
       n=0;

       do
       {
        printf("%i",i);
        n=n+i;
        if(i<num)
        printf("+");
        i++;

       }


       while(i<=num);

        printf("=%d",n);

        printf("\n Ingresa una S o s para otro numero: ");
        fflush(stdin);
        scanf("%c",&c);

   }while( c=='S' || c=='s');



    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
