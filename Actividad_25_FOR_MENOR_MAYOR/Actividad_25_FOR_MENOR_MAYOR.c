/*
DANIEL ALEJANDRO ZEPEDA ZARAGOZA
SEMINARIO DE PROGRAMACION 21A BETA 8

Realiza un programa que pregunte al usuario cuantos numeros desea registrar,
utiliza el ciclo for para pedir el numero esa cantidad de veces, al terminar imrpime cual es el menor y el mayor de ellos.
Preiosne 1 para pedir otro numero, aqui puedes utilizar el while o el do while
*/

#include<stdio.h>
#include<conio.h>
int main ()
{
    int num,menor,mayor;
    int vez,i,c;
    do{
        printf ("Cu%cntos n%cmeros desea registrar: ",160, 163);
        scanf ("%i", &vez);

        for (i= 1;i<=vez;i++)
        {
            printf ("Ingrese un n%cmero: ", 163);
            scanf ("%i", &num);
            if (i==1)
                {
                mayor=num;
                menor=num;
                }
            else
            {
            if (num<menor)
                menor=num;
            if (num>mayor)
                mayor=num;
            }
        }
        printf ("Mayor: %d\n", mayor);
        printf ("Menor: %d\n", menor);

        printf ("Presione 1 para otro registro: ");
        fflush(stdin);
        scanf ("%i",&c);
    }while (c==1);

    printf("\n \n%cRealizado por DANIEL ZEPEDA%c",174,175);
    getch ();
    return 0 ;
}
