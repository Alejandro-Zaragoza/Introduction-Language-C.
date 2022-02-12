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
   int i=0, num;
    char c[1];

   do
   {
       printf("Ingresa un numero: ");
       scanf("%i",&num);
       do
       {
        printf("%i+",i);
        i++;
       }


       while(i<=num);
        printf("                        =%d",num);

        printf("\n Ingresa una S o s para otro numero: ");
        scanf("%c",&c);
   }

        while(c=='S'||c='s');


    printf("\n \n %c Realizado por DANIEL ZEPEDA %c",174,175);
    getch ();
    return 0 ;
}
